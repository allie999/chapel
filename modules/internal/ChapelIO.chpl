/*
 * Copyright 2004-2019 Cray Inc.
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*

Basic types and utilities in support of I/O operation.

Most of Chapel's I/O support is within the :mod:`IO` module.  This section
describes automatically included basic types and routines that support the
:mod:`IO` module.

Writing and Reading
~~~~~~~~~~~~~~~~~~~

The :proc:`~IO.writeln` function allows for a simple implementation
of a Hello World program:

.. code-block:: chapel

 writeln("Hello, World!");
 // outputs
 // Hello, World!

The :proc:`~IO.read` functions allow one to read values into variables as
the following example demonstrates. It shows three ways to read values into
a pair of variables ``x`` and ``y``.

.. code-block:: chapel

  var x: int;
  var y: real;

  /* reading into variable expressions, returning
     true if the values were read, false on EOF */
  var ok:bool = read(x, y);

  /* reading via a single type argument */
  x = read(int);
  y = read(real);

  /* reading via multiple type arguments */
  (x, y) = read(int, real);

.. _readThis-writeThis-readWriteThis:

The readThis(), writeThis(), and readWriteThis() Methods
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

When programming the input and output method for a custom data type, it is
often useful to define both the read and write routines at the same time. That
is possible to do in a Chapel program by defining a ``readWriteThis`` method,
which is a generic method expecting a single :record:`~IO.channel` argument.

In cases when the reading routine and the writing routine are more naturally
separate, or in which only one should be defined, a Chapel program can define
``readThis`` (taking in a single argument - a readable channel) and/or
``writeThis`` (taking in a single argument - a writeable channel).

If none of these routines are provided, a default version of ``readThis`` and
``writeThis`` will be generated by the compiler. If ``readWriteThis`` is
defined, the compiler will generate ``readThis`` or ``writeThis`` methods - if
they do not already exist - which call ``readWriteThis``.

Note that arguments to ``readThis`` and ``writeThis`` may represent a locked
channel; as a result, calling methods on the channel in parallel from within a
``readThis``, ``writeThis``, or ``readWriteThis`` may cause undefined behavior.
Additionally, performing I/O on a global channel that is the same channel as the
one ``readThis``, ``writeThis``, or ``readWriteThis`` is operating on can result
in a deadlock. In particular, these methods should not refer to
:var:`~IO.stdin`, :var:`~IO.stdout`, or :var:`~IO.stderr` explicitly or
implicitly (such as by calling the global :proc:`~IO.writeln` function).
Instead, these methods should only perform I/O on the channel passed as an
argument.

Because it is often more convenient to use an operator for I/O, instead of
writing

.. code-block:: chapel

  f.readwrite(x);
  f.readwrite(y);

one can write

.. code-block:: chapel

  f <~> x <~> y;

Note that the types :type:`IO.ioLiteral` and :type:`IO.ioNewline` may be useful
when using the ``<~>`` operator. :type:`IO.ioLiteral` represents some string
that must be read or written as-is (e.g. ``","`` when working with a tuple),
and :type:`IO.ioNewline` will emit a newline when writing but skip to and
consume a newline when reading.


This example defines a readWriteThis method and demonstrates how ``<~>`` will
call the read or write routine, depending on the situation.

.. code-block:: chapel

  class IntPair {
    var x: int;
    var y: int;
    proc readWriteThis(f) {
      f <~> x <~> new ioLiteral(",") <~> y <~> new ioNewline();
    }
  }
  var ip = new IntPair(17,2);
  write(ip);
  // prints out
  // 17,2

  delete ip;

This example defines a only a writeThis method - so that there will be a
function resolution error if the class NoRead is read.

.. code-block:: chapel

  class NoRead {
    var x: int;
    var y: int;
    proc writeThis(f) {
      f <~> "hello";
    }
    // Note that no readThis function will be generated.
  }
  var nr = new NoRead();
  write(nr);
  // prints out
  // hello

  // Note that read(nr) will generate a compiler error.

  delete nr;

.. _default-readThis-writeThis:

Default writeThis and readThis Methods
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Default ``writeThis`` methods are created for all types for which a user-defined
``writeThis`` or ``readWriteThis`` method is not provided.  They have the
following semantics:

* for a class: outputs the values within the fields of the class prefixed by
  the name of the field and the character ``=``.  Each field is separated by a
  comma.  The output is delimited by ``{`` and ``}``.
* for a record: outputs the values within the fields of the class prefixed by
  the name of the field and the character ``=``.  Each field is separated by a
  comma.  The output is delimited by ``(`` and ``)``.

Default ``readThis`` methods are created for all types for which a user-defined
``readThis`` method is not provided.  The default ``readThis`` methods are
defined to read in the output of the default ``writeThis`` method.

Additionally, the Chapel implementation includes ``writeThis`` methods for
built-in types as follows:

* for an array: outputs the elements of the array in row-major order
  where rows are separated by line-feeds and blank lines are used to separate
  other dimensions.
* for a domain: outputs the dimensions of the domain enclosed by
  ``{`` and ``}``.
* for a range: output the lower bound of the range, output ``..``,
  then output the upper bound of the range.  If the stride of the range
  is not ``1``, output the word ``by`` and then the stride of the range.
  If the range has special alignment, output the word ``align`` and then the
  alignment.
* for tuples, outputs the components of the tuple in order delimited by ``(``
  and ``)``, and separated by commas.

These types also include ``readThis`` methods to read the corresponding format.
Note that when reading an array, the domain of the array must be set up
appropriately before the elements can be read.

.. note::

  Note that it is not currently possible to read and write circular
  data structures with these mechanisms.

 */
module ChapelIO {
  use ChapelBase; // for uint().
  use ChapelLocale;
  use SysBasic;

  // TODO -- this should probably be private
  pragma "no doc"
  proc _isNilObject(val) {
    proc helper(o: borrowed object) return o == nil;
    proc helper(o)                  return false;
    return helper(val);
  }

  use IO;

    private
    proc isIoField(x, param i) param {
      if isType(__primitive("field by num", x, i)) ||
         isParam(__primitive("field by num", x, i)) ||
         __primitive("field by num", x, i).type == nothing {
        // I/O should ignore type or param fields
        return false;
      } else {
        return true;
      }
    }

    // ch is the channel
    // x is the record/class/union
    // i is the field number of interest
    private
    proc ioFieldNameEqLiteral(ch, type t, param i) {
      var st = ch.styleElement(QIO_STYLE_ELEMENT_AGGREGATE);
      if st == QIO_AGGREGATE_FORMAT_JSON {
        return new ioLiteral('"' +
                             __primitive("field num to name", t, i) +
                             '":');
      } else {
        return new ioLiteral(__primitive("field num to name", t, i) + " = ");
      }
    }
    private
    proc ioFieldNameLiteral(ch, type t, param i) {
      var st = ch.styleElement(QIO_STYLE_ELEMENT_AGGREGATE);
      if st == QIO_AGGREGATE_FORMAT_JSON {
        return new ioLiteral('"' +
                             __primitive("field num to name", t, i) +
                             '"');
      } else {
        return new ioLiteral(__primitive("field num to name", t, i));
      }
    }




    pragma "no doc"
    proc writeThisFieldsDefaultImpl(writer, x:?t, inout first:bool) {
      param num_fields = __primitive("num fields", t);
      var isBinary = writer.binary();

      if (isClassType(t)) {
        if _to_borrowed(t) != borrowed object {
          // only write parent fields for subclasses of object
          // since object has no .super field.
          writeThisFieldsDefaultImpl(writer, x.super, first);
        }
      }

      if !isUnionType(t) {
        // print out all fields for classes and records
        for param i in 1..num_fields {
          if isIoField(x, i) {
            if !isBinary {
              var comma = new ioLiteral(", ");
              if !first then writer.readwrite(comma);

              var eq:ioLiteral = ioFieldNameEqLiteral(writer, t, i);
              writer.readwrite(eq);
            }

            writer.readwrite(__primitive("field by num", x, i));

            first = false;
          }
        }
      } else {
        // Handle unions.
        // print out just the set field for a union.
        var id = __primitive("get_union_id", x);
        for param i in 1..num_fields {
          if isIoField(x, i) && i == id {
            if isBinary {
              // store the union ID
              write(id);
            } else {
              var eq:ioLiteral = ioFieldNameEqLiteral(writer, t, i);
              writer.readwrite(eq);
            }
            writer.readwrite(__primitive("field by num", x, i));
          }
        }
      }
    }
    // Note; this is not a multi-method and so must be called
    // with the appropriate *concrete* type of x; that's what
    // happens now with buildDefaultWriteFunction
    // since it has the concrete type and then calls this method.

    // MPF: We would like to entirely write the default writeThis
    // method in Chapel, but that seems to be a bit of a challenge
    // right now and I'm having trouble with scoping/modules.
    // So I'll go back to writeThis being generated by the
    // compiler.... the writeThis generated by the compiler
    // calls writeThisDefaultImpl.
    pragma "no doc"
    proc writeThisDefaultImpl(writer, x:?t) throws {
      if !writer.binary() {
        var st = writer.styleElement(QIO_STYLE_ELEMENT_AGGREGATE);
        var start:ioLiteral;
        if st == QIO_AGGREGATE_FORMAT_JSON {
          start = new ioLiteral("{");
        } else if st == QIO_AGGREGATE_FORMAT_CHPL {
          start = new ioLiteral("new " + t:string + "(");
        } else {
          // the default 'braces' type
          if isClassType(t) {
            start = new ioLiteral("{");
          } else {
            start = new ioLiteral("(");
          }
        }
        writer.readwrite(start);
      }

      var first = true;

      writeThisFieldsDefaultImpl(writer, x, first);

      if !writer.binary() {
        var st = writer.styleElement(QIO_STYLE_ELEMENT_AGGREGATE);
        var end:ioLiteral;
        if st == QIO_AGGREGATE_FORMAT_JSON {
          end = new ioLiteral("}");
        } else if st == QIO_AGGREGATE_FORMAT_CHPL {
          end = new ioLiteral(")");
        } else {
          if isClassType(t) {
            end = new ioLiteral("}");
          } else {
            end = new ioLiteral(")");
          }
        }
        writer.readwrite(end);
      }
    }

    private
    proc skipFieldsAtEnd(reader, inout needsComma:bool) {

      var st = reader.styleElement(QIO_STYLE_ELEMENT_AGGREGATE);
      var skip_unk = reader.styleElement(QIO_STYLE_ELEMENT_SKIP_UNKNOWN_FIELDS);

      if skip_unk != 0 && st == QIO_AGGREGATE_FORMAT_JSON {

        while true {
          if needsComma {
            // read a comma
            var comma = new ioLiteral(",", true);
            reader.readwrite(comma);

            if !reader.error() {
              needsComma = false; // we read a comma
            } else if reader.error() == EFORMAT {
              // break out of the loop if we didn't read a comma
              // and we're expecting to read one.
              // We clear the error since we
              // might be at the end (without error)
              reader.clearError();
              break;
            }
          }

          // Skip an unknown JSON field.
          var err:syserr = ENOERR;
          try {
            reader.skipField();
            needsComma = true;
          } catch e: SystemError {
            err = e.err;
          } catch {
            err = EINVAL;
          }
          reader.setError(err);
        }
      }
    }

    pragma "no doc"
    proc readThisFieldsDefaultImpl(reader, type t, ref x,
                                   inout needsComma:bool) {
      param num_fields = __primitive("num fields", t);
      var isBinary = reader.binary();
      var superclass_error : syserr = ENOERR;

      if (isClassType(t)) {
        if _to_borrowed(t) != borrowed object {
          // only write parent fields for subclasses of object
          // since object has no .super field.
          type superType = x.super.type;
          var castTmp:superType = x; // make a copy of the ptr so we
                                     // can pass it by ref
          readThisFieldsDefaultImpl(reader, superType, castTmp, needsComma);
          // Any error reading superclass must be preserved.
          superclass_error = reader.error();
        }
      }

      if !isUnionType(t) {
        // read all fields for classes and records
        if isBinary {
          for param i in 1..num_fields {
            if isIoField(x, i) {
              reader.readwrite(__primitive("field by num", x, i));
            }
          }
        } else if num_fields > 0 {

          // this tuple helps us not read the same field twice.
          var read_field:(num_fields)*bool;
          // these two help us know if we've read all the fields.
          var num_to_read = 0;
          var num_read = 0;
          for param i in 1..num_fields {
            if isIoField(x, i) {
              num_to_read += 1;
            }
          }

          // the order should not matter.
          while num_read < num_to_read {

            if needsComma {
              // read a comma

              var comma = new ioLiteral(",", true);
              reader.readwrite(comma);

              if !reader.error() {
                needsComma = false; // we read a comma
              } else if reader.error() == EFORMAT {
                // break out of the loop if we didn't read a comma
                // and we're expecting to read one.
                break;
              }
            }

            // find a field name that matches.
            // TODO: this is not particularly efficient. If we
            // have a lot of fields, this is O(n**2), and there
            // are other potential problems with string reallocation.
            // We could do better if we put the field names to
            // scan for into a regular expression, possibly
            // with | and ( ) for capture groups so we can know
            // which field was read.
            var st = reader.styleElement(QIO_STYLE_ELEMENT_AGGREGATE);
            var skip_unk = reader.styleElement(QIO_STYLE_ELEMENT_SKIP_UNKNOWN_FIELDS);

            var read_field_name = false;

            for param i in 1..num_fields {
              if isIoField(x, i) {

                if !read_field_name && !read_field[i] {
                  var fname:ioLiteral = ioFieldNameLiteral(reader, t, i);

                  reader.readwrite(fname);

                  if reader.error() == EFORMAT || reader.error() == EEOF {
                    // Try reading again with a different union element.
                    reader.clearError();
                  } else {
                    read_field_name = true;
                    needsComma = true;

                    var eq:ioLiteral;
                    if st == QIO_AGGREGATE_FORMAT_JSON {
                      eq = new ioLiteral(":", true);
                    } else {
                      eq = new ioLiteral("=", true);
                    }
                    reader.readwrite(eq);

                    reader.readwrite(__primitive("field by num", x, i));
                    if !reader.error() {
                      read_field[i] = true;
                      num_read += 1;
                    }
                  }
                }
              }
            }

            // Stop with an error if we didn't read a field name
            // ... unless we skip unknown fields...
            if !read_field_name {
              if skip_unk != 0 && st == QIO_AGGREGATE_FORMAT_JSON {

                // Skip an unknown JSON field.
                var err:syserr = ENOERR;
                try {
                  reader.skipField();
                  needsComma = true;
                } catch e: SystemError {
                  err = e.err;
                } catch {
                  err = EINVAL;
                }
                reader.setError(err);

              } else {
                reader.setError(EFORMAT:syserr);
                break;
              }
            }
          }

          // check that we've read all fields, return error if not.
          {
            var ok = num_read == num_to_read;

            if ok then reader.setError(superclass_error);
            else reader.setError(EFORMAT:syserr);
          }
        }
      } else {
        // Handle unions.
        if isBinary {
          var id = __primitive("get_union_id", x);
          // Read the ID
          reader.readwrite(id);
          for param i in 1..num_fields {
            if isIoField(x, i) && i == id {
              reader.readwrite(__primitive("field by num", x, i));
            }
          }
        } else {
          // Read the field name = part until we get one that worked.
          var found_field = false;
          for param i in 1..num_fields {
            if isIoField(x, i) {
              var st = reader.styleElement(QIO_STYLE_ELEMENT_AGGREGATE);

              // the field name
              var fname:ioLiteral = ioFieldNameLiteral(reader, t, i);

              reader.readwrite(fname);

              // Read : or = if there was no error reading field name.
              if reader.error() == EFORMAT || reader.error() == EEOF {
                // Try reading again with a different union element.
                reader.clearError();
              } else {
                found_field = true;
                var eq:ioLiteral;
                if st == QIO_AGGREGATE_FORMAT_JSON {
                  eq = new ioLiteral(":", true);
                } else {
                  eq = new ioLiteral("=", true);
                }
                readIt(eq);

                // We read the 'name = ', so now read the value!
                reader.readwrite(__primitive("field by num", x, i));
              }
            }
          }
          // Create an error if we never found a field in our union.
          if !found_field {
            reader.setError(EFORMAT:syserr);
          }
        }
      }
    }
    // Note; this is not a multi-method and so must be called
    // with the appropriate *concrete* type of x; that's what
    // happens now with buildDefaultWriteFunction
    // since it has the concrete type and then calls this method.
    pragma "no doc"
    proc readThisDefaultImpl(reader, x:?t) throws where isClassType(t) {
      if !reader.binary() {
        var st = reader.styleElement(QIO_STYLE_ELEMENT_AGGREGATE);
        var start:ioLiteral;
        if st == QIO_AGGREGATE_FORMAT_CHPL {
          start = new ioLiteral("new " + t:string + "(");
        } else {
          // json and braces type
          start = new ioLiteral("{");
        }
        reader.readwrite(start);
      }

      var needsComma = false;

      var obj = x; // make obj point to x so ref works
      if ! reader.error() {
        readThisFieldsDefaultImpl(reader, t, obj, needsComma);
      }
      if ! reader.error() {
        skipFieldsAtEnd(reader, needsComma);
      }

      if !reader.binary() {
        var st = reader.styleElement(QIO_STYLE_ELEMENT_AGGREGATE);
        var end:ioLiteral;
        if st == QIO_AGGREGATE_FORMAT_CHPL {
          end = new ioLiteral(")");
        } else {
          // json and braces type
          end = new ioLiteral("}");
        }
        reader.readwrite(end);
      }
    }
    pragma "no doc"
    proc readThisDefaultImpl(reader, ref x:?t) throws where !isClassType(t) {
      if !reader.binary() {
        var st = reader.styleElement(QIO_STYLE_ELEMENT_AGGREGATE);
        var start:ioLiteral;
        if st == QIO_AGGREGATE_FORMAT_CHPL {
          start = new ioLiteral("new " + t:string + "(");
        } else if st == QIO_AGGREGATE_FORMAT_JSON {
          start = new ioLiteral("{");
        } else {
          start = new ioLiteral("(");
        }
        reader.readwrite(start);
      }

      var needsComma = false;

      if ! reader.error() {
        readThisFieldsDefaultImpl(reader, t, x, needsComma);
      }
      if ! reader.error() {
        skipFieldsAtEnd(reader, needsComma);
      }

      if !reader.binary() {
        var st = reader.styleElement(QIO_STYLE_ELEMENT_AGGREGATE);
        var end:ioLiteral;
        if st == QIO_AGGREGATE_FORMAT_JSON {
          end = new ioLiteral("}");
        } else {
          end = new ioLiteral(")");
        }
        reader.readwrite(end);
      }
    }

  /*
     Prints an error message to stderr giving the location of the call to
     ``halt`` in the Chapel source, followed by the arguments to the call,
     if any, then exits the program.
   */
  pragma "function terminates program"
  pragma "always propagate line file info"
  proc halt() {
    __primitive("chpl_error", c"halt reached");
  }

  /*
     Prints an error message to stderr giving the location of the call to
     ``halt`` in the Chapel source, followed by the arguments to the call,
     if any, then exits the program.
   */
  pragma "function terminates program"
  pragma "always propagate line file info"
  proc halt(s:string) {
    halt(s.localize().c_str());
  }

  /*
     Prints an error message to stderr giving the location of the call to
     ``halt`` in the Chapel source, followed by the arguments to the call,
     if any, then exits the program.
   */
  pragma "function terminates program"
  pragma "always propagate line file info"
  proc halt(args ...?numArgs) {
    var tmpstring = "halt reached - " + stringify((...args));
    __primitive("chpl_error", tmpstring.c_str());
  }

  /*
    Prints a warning to stderr giving the location of the call to ``warning``
    in the Chapel source, followed by the argument(s) to the call.
  */
  pragma "always propagate line file info"
  proc warning(s:string) {
    __primitive("chpl_warning", s.localize().c_str());
  }

  /*
    Prints a warning to stderr giving the location of the call to ``warning``
    in the Chapel source, followed by the argument(s) to the call.
  */
  pragma "always propagate line file info"
  proc warning(args ...?numArgs) {
    var tmpstring = stringify((...args));
    warning(tmpstring);
  }

  pragma "no doc"
  proc _ddata.writeThis(f) throws {
    compilerWarning("printing _ddata class");
    f <~> "<_ddata class cannot be printed>";
  }

  pragma "no doc"
  proc chpl_taskID_t.writeThis(f) throws {
    var tmp : uint(64) = this : uint(64);
    f <~> (tmp);
  }

  pragma "no doc"
  proc chpl_taskID_t.readThis(f) throws {
    var tmp : uint(64);
    f <~> tmp;
    this = tmp : chpl_taskID_t;
  }

  pragma "no doc"
  proc nothing.writeThis(f) {}

  // Moved here to avoid circular dependencies in ChapelTuple.
  pragma "no doc"
  proc _tuple.readWriteThis(f) throws {
    var st = f.styleElement(QIO_STYLE_ELEMENT_TUPLE);
    var start:ioLiteral;
    var comma:ioLiteral;
    var end:ioLiteral;
    var binary = f.binary();

    if st == QIO_TUPLE_FORMAT_SPACE {
      start = new ioLiteral("");
      comma = new ioLiteral(" ");
      end = new ioLiteral("");
    } else if st == QIO_TUPLE_FORMAT_JSON {
      start = new ioLiteral("[");
      comma = new ioLiteral(", ");
      end = new ioLiteral("]");
    } else {
      start = new ioLiteral("(");
      comma = new ioLiteral(", ");
      end = new ioLiteral(")");
    }

    if !binary {
      f <~> start;
    }
    if size != 0 {
      f <~> this(1);
      for param i in 2..size {
        if !binary {
          f <~> comma;
        }
        f <~> this(i);
      }
    }
    if !binary {
      f <~> end;
    }
  }

  // Moved here to avoid circular dependencies in ChapelRange
  // Write implementation for ranges
  pragma "no doc"
  proc range.writeThis(f) throws
  {
    // a range with a more normalized alignment
    // a separate variable so 'this' can be const
    var alignCheckRange = this;
    if f.writing {
      alignCheckRange.normalizeAlignment();
    }

    if hasLowBound() then
      f <~> low;
    f <~> new ioLiteral("..");
    if hasHighBound() then
      f <~> high;
    if stride != 1 then
      f <~> new ioLiteral(" by ") <~> stride;

    // Write out the alignment only if it differs from natural alignment.
    // We take alignment modulo the stride for consistency.
    if ! alignCheckRange.isNaturallyAligned() && aligned then
      f <~> new ioLiteral(" align ") <~> chpl_intToIdx(chpl__mod(chpl__idxToInt(alignment), stride));
  }

  pragma "no doc"
  proc ref range.readThis(f) throws
  {
    if hasLowBound() then
      f <~> _low;
    f <~> new ioLiteral("..");
    if hasHighBound() then
      f <~> _high;
    if stride != 1 then
      f <~> new ioLiteral(" by ") <~> stride;

    // try reading an 'align'
    if !f.error() {
      f <~> new ioLiteral(" align ");
      if f.error() == EFORMAT then {
        // naturally aligned.
        f.clearError();
      } else {
        if stridable {
          // un-naturally aligned - read the un-natural alignment
          var a: intIdxType;
          f <~> a;
          _alignment = a;
        } else {
          // If the range is not stridable, it can't store an alignment.
          // TODO: once Channels can store Chapel errors,
          // create a more descriptive error for this case
          f.setError(EFORMAT:syserr);
        }
      }
    }
  }

  override proc LocaleModel.writeThis(f) throws {
    // Most classes will define it like this:
    //      f <~> name;
    // but here it is defined thus for backward compatibility.
    f <~> new ioLiteral("LOCALE") <~> chpl_id();
  }

  //
  // Catch all
  //
  // Convert 'x' to a string just the way it would be written out.
  //
  // This is marked as last resort so it doesn't take precedence over
  // generated casts for types like enums
  //
  // This version only applies to non-primitive types
  // (primitive types should support :string directly)
  pragma "no doc"
  pragma "last resort"
  proc _cast(type t, x) where t == string && ! isPrimitiveType(x.type) {
    return stringify(x);
  }
}

class SingleLocaleDistribution {
  param stridable: bool = false;

  def buildDomain(param rank: int, type dim_type) {
    return SingleLocaleArithmeticDomain(rank=rank, dim_type=dim_type, 
                                        stridable=stridable);
  }

  def buildEnumDomain(type ind_type) {
    return SingleLocaleEnumDomain(ind_type=ind_type);
  }

  def buildDomain(type ind_type) {
    return SingleLocaleAssociativeDomain(ind_type=ind_type);
  }

  def buildSparseDomain(param rank:int, type dim_type, 
                        parentDom: BaseArithmeticDomain) {
    return SingleLocaleSparseDomain(rank=rank, dim_type=dim_type, 
                                    parentDom=parentDom);
  }
}

var Block = SingleLocaleDistribution();

class SingleLocaleArithmeticDomain: BaseArithmeticDomain {
  param rank : int;
  type dim_type;
  param stridable: bool;
  var ranges : rank*range(dim_type,bounded,stridable);

  def getIndices() return ranges;

  def setIndices(x) {
    if ranges.size != x.size then
      compilerError("rank mismatch in domain assignment");
    if ranges(1).eltType != x(1).eltType then
      compilerError("index type mismatch in domain assignment");
    ranges = x;
  }

  def buildExclusiveUpperDomain() {
    var x = SingleLocaleArithmeticDomain(rank=rank, dim_type=dim_type, stridable=stridable);
    for param i in 1..rank {
      if ranges(i)._stride != 1 then
        halt("syntax [domain-specification) requires a stride of one");
      x.ranges(i) = ranges(i)._low..ranges(i)._high-1;
    }
    return x;
  }

  def getHeadCursor() {
    var c : rank*dim_type;
    for param i in 1..rank do
      c(i) = ranges(i).getHeadCursor();
    return c;
  }

  def getNextCursor(c) {
    for param i in 1..rank {
      c(rank-i+1) = ranges(rank-i+1).getNextCursor(c(rank-i+1));
      if ranges(rank-i+1).isValidCursor?(c(rank-i+1)) then
        return c;
      else
        c(rank-i+1) = ranges(rank-i+1).getHeadCursor();
    }
    c(1) = ranges(1)._high+1;
    return c;
  }

  def getValue(c) {
    if rank == 1 then
      return c(1);
    else
      return c;
  }

  def isValidCursor?(c) {
    //        return c(1) != ranges(1)._high+1;
    return ranges(1).isValidCursor?(c(1));
  }

  def member?(ind: rank*dim_type) {
    for param i in 1..rank do
      if !_in(ranges(i), ind(i)) then
        return false;
    return true;
  }

  def this(dim : int)
    return ranges(dim);

  def bbox(dim: int) {
    const r: range(dim_type,bounded,false) = ranges(dim);
    return r;
  }

  def numIndices {
    var sum = 1:dim_type;
    for param i in 1..rank do
      sum *= ranges(i).length;
    return sum;
    // WANT: return * reduce (this(1..rank).length);
  }

  def low {
    if rank == 1 {
      return ranges(1)._low;
    } else {
      var result: rank*dim_type;
      for param i in 1..rank do
        result(i) = ranges(i)._low;
      return result;
    }
  }

  def high {
    if rank == 1 {
      return ranges(1)._high;
    } else {
      var result: rank*dim_type;
      for param i in 1..rank do
        result(i) = ranges(i)._high;
      return result;
    }
  }

  def buildArray(type eltType) {
    return SingleLocaleArithmeticArray(eltType, rank, dim_type, stridable, dom=this);
  }

  def buildSubdomain()
    return SingleLocaleArithmeticDomain(rank=rank, dim_type=dim_type, stridable=stridable);

  def buildEmptyDomain()
    return SingleLocaleArithmeticDomain(rank=rank, dim_type=dim_type, stridable=stridable);

  def translate(dim: rank*int) {
    var x = SingleLocaleArithmeticDomain(rank=rank, dim_type=int, stridable=stridable);
    for i in 1..rank do
      x.ranges(i) = this(i)._translate(dim(i));
    return x;
  }

  def interior(dim: rank*int) {
    var x = SingleLocaleArithmeticDomain(rank=rank, dim_type=int, stridable=stridable);
    for i in 1..rank do {
      if ((dim(i) > 0) && (this(i)._high+1-dim(i) < this(i)._low) ||
          (dim(i) < 0) && (this(i)._low-1-dim(i) > this(i)._high)) {
        halt("***Error: Argument to 'interior' function out of range in dimension ", i, "***");
      } 
      x.ranges(i) = this(i)._interior(dim(i));
    }
    return x;
  }

  def exterior(dim: rank*int) {
    var x = SingleLocaleArithmeticDomain(rank=rank, dim_type=int, stridable=stridable);
    for i in 1..rank do
      x.ranges(i) = this(i)._exterior(dim(i));
    return x;
  }

  def expand(dim: rank*int) {
    var x = SingleLocaleArithmeticDomain(rank=rank, dim_type=int, stridable=stridable);
    for i in 1..rank do {
      x.ranges(i) = ranges(i)._expand(dim(i));
      if (x.ranges(i)._low > x.ranges(i)._high) {
        halt("***Error: Degenerate dimension created in dimension ", i, "***");
      }
    }
    return x;
  }  

  def expand(dim: int) {
    var x = SingleLocaleArithmeticDomain(rank=rank, dim_type=int, stridable=stridable);
    for i in 1..rank do
      x.ranges(i) = ranges(i)._expand(dim);
    return x;
  }

  // this should eventually...
  //  ...be in the distribtion's implementation of the blocked domain
  // ...yield a subBlock of the domain per thread per locale
  iterator subBlocks {
    yield this;
  }

  def strideBy(dim : rank*int) {
    var x = SingleLocaleArithmeticDomain(rank=rank, dim_type=dim_type, stridable=true);
    for i in 1..rank do
      x.ranges(i) = ranges(i) by dim(i);
    return x;
  }

  def strideBy(dim : int) {
    var x = SingleLocaleArithmeticDomain(rank=rank, dim_type=dim_type, stridable=true);
    for i in 1..rank do
      x.ranges(i) = ranges(i) by dim;
    return x;
  }
}


class SingleLocaleArithmeticArray: BaseArray {
  type eltType;
  param rank : int;
  type dim_type;
  param stridable: bool;

  var dom : SingleLocaleArithmeticDomain(rank=rank, dim_type=dim_type, stridable=stridable);
  var off: rank*dim_type;
  var blk: rank*dim_type;
  var str: rank*int;
  var orig: dim_type;
  var origOff: dim_type;
  var size : dim_type;
  var data : _ddata(eltType);
  var noinit: bool = false;

  def getHeadCursor()
    return dom.getHeadCursor();

  def getNextCursor(c)
    return dom.getNextCursor(c);

  def getValue(c)
    return this(dom.getValue(c));

  def isValidCursor?(c)
    return dom.isValidCursor?(c);

  def computeOrigOff() {
    origOff = orig;
    for i in 1..rank do
      origOff = origOff + blk(i) * off(i);
  }

  def initialize() {
    if noinit == true then return;
    for param dim in 1..rank {
      off(dim) = dom(dim)._low;
      str(dim) = dom(dim)._stride;
    }
    blk(rank) = 1:dim_type;
    for dim in 1..rank-1 by -1 do
      blk(dim) = blk(dim+1) * dom(dim+1).length;
    orig = 0:dim_type;
    computeOrigOff();
    size = blk(1) * dom(1).length;
    data = _ddata(eltType, size:int); // ahh!!! can't cast to int here
    data.init();
  }

  def this(ind: dim_type ...1) var where rank == 1
    return this(ind);

  def this(ind : rank*dim_type) var {
    if boundsChecking then
      if !dom.member?(ind) then
        halt("array index out of bounds: ", ind);
    var sum : dim_type;
    if stridable {
      for param i in 1..rank do
        sum = sum + (ind(i) - off(i)) * blk(i) / str(i):dim_type;
      sum = sum - orig;
    } else {
      for param i in 1..rank do
        sum = sum + ind(i) * blk(i);
      sum = sum - origOff;
    }
    return data(sum:int); // !!ahh
  }

  def view(d: SingleLocaleArithmeticDomain) {
    if rank != d.rank then
      compilerError("illegal implicit rank change");
    for param i in 1..rank do
      if d(i).length != dom(i).length then
        halt("extent in dimension ", i, " does not match actual");
    var alias = SingleLocaleArithmeticArray(eltType, rank, dim_type, d.stridable, d, noinit=true);
    alias.data = data;
    alias.size = size;
    for param i in 1..rank {
      alias.off(i) = d(i)._low;
      alias.blk(i) = blk(i) * (dom(i)._stride / str(i));
      alias.str(i) = d(i)._stride;
      alias.orig = orig + (off(i) - dom(i)._low) * blk(i);
    }
    alias.computeOrigOff();
    return alias;
  }

  def checkSlice(d: SingleLocaleArithmeticDomain) {
    if rank != d.rank then
      halt("array rank change not supported");
    for param i in 1..rank {
      if !_in(dom(i), d(i)) then
        halt("array slice out of bounds in dimension ", i, ": ", d);
      if d(i)._stride % dom(i)._stride != 0 then
        halt("stride of array slice is not multiple of stride in dimension ", i);
    }
  }

  def slice(d: SingleLocaleArithmeticDomain) {
    checkSlice(d);
    var alias = SingleLocaleArithmeticArray(eltType, rank, dim_type, d.stridable, d, noinit=true);
    alias.data = data;
    alias.size = size;
    alias.off = off;
    alias.blk = blk;
    alias.str = str;
    alias.orig = orig;
    alias.computeOrigOff();
    return alias;
  }

  def reallocate(d: _domain) {
    if (d._value.type == dom.type) {
      var new = SingleLocaleArithmeticArray(eltType, rank, dim_type, d._value.stridable, d._value);
      for i in _intersect(d._value, dom) do
        new(i) = this(i);
      off = new.off;
      blk = new.blk;
      str = new.str;
      orig = new.orig;
      origOff = new.origOff;
      size = new.size;
      data = new.data;
    } else {
      halt("illegal reallocation");
    }
  }
}

def SingleLocaleArithmeticDomain.writeThis(f: Writer) {
  f.write("[", this(1));
  for i in 2..rank do
    f.write(", ", this(i));
  f.write("]");
}

def SingleLocaleArithmeticArray.writeThis(f: Writer) {
  if dom.numIndices == 0 then return;
  var i : rank*dim_type;
  for dim in 1..rank do
    i(dim) = dom(dim)._low;
  label next while true {
    f.write(this(i));
    if i(rank) <= (dom(rank)._high - dom(rank)._stride:dim_type) {
      f.write(" ");
      i(rank) += dom(rank)._stride:dim_type;
    } else {
      for dim in 1..rank-1 by -1 {
        if i(dim) <= (dom(dim)._high - dom(dim)._stride:dim_type) {
          i(dim) += dom(dim)._stride:dim_type;
          for dim2 in dim+1..rank {
            f.writeln();
            i(dim2) = dom(dim2)._low;
          }
          continue next;
        }
      }
      break;
    }
  }
}

def _intersect(a: SingleLocaleArithmeticDomain, b: SingleLocaleArithmeticDomain) {
  var c = SingleLocaleArithmeticDomain(rank=a.rank, dim_type=a.dim_type, stridable=a.stridable);
  for param i in 1..a.rank do
    c.ranges(i) = _intersect(a(i), b(i));
  return c;
}

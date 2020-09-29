/*
 * Copyright 2020 Hewlett Packard Enterprise Development LP
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

// These are primitives
// the format is
//   PRIMITIVE_R(NAME)
//   PRIMITIVE_G(NAME)
// use this file by defining a PRIMITIVE PRIMITIVE and then including it

// Primitives are declared in groups
//  PRIMITIVE_R -- does not exist during code generation
//  PRIMITIVE_G -- needs to be code generated
//                 and there will be a CallExpr::codegenPRIM_BLA method for it

// individual primitives are not documented in this file
// but rather in AST/primitive.cpp

  PRIMITIVE_G(PRIM_UNKNOWN)

  PRIMITIVE_R(PRIM_ACTUALS_LIST)
  PRIMITIVE_G(PRIM_NOOP)
  PRIMITIVE_G(PRIM_MOVE)

  PRIMITIVE_R(PRIM_DEFAULT_INIT_VAR)
  PRIMITIVE_R(PRIM_NOINIT_INIT_VAR)
  PRIMITIVE_R(PRIM_INIT_FIELD)
  PRIMITIVE_R(PRIM_INIT_VAR)
  PRIMITIVE_R(PRIM_INIT_VAR_SPLIT_DECL)
  PRIMITIVE_R(PRIM_INIT_VAR_SPLIT_INIT)

  PRIMITIVE_G(PRIM_REF_TO_STRING)
  PRIMITIVE_G(PRIM_RETURN)

  PRIMITIVE_R(PRIM_THROW)
  PRIMITIVE_R(PRIM_TRY_EXPR)
  PRIMITIVE_R(PRIM_TRYBANG_EXPR)
  PRIMITIVE_R(PRIM_YIELD)
  PRIMITIVE_R(PRIM_REDUCE)
  PRIMITIVE_R(PRIM_GPU_REDUCE)
  PRIMITIVE_R(PRIM_IS_GPU)

  PRIMITIVE_G(PRIM_UNARY_MINUS)
  PRIMITIVE_G(PRIM_UNARY_PLUS)
  PRIMITIVE_G(PRIM_UNARY_NOT)
  PRIMITIVE_G(PRIM_UNARY_LNOT)
  PRIMITIVE_G(PRIM_ADD)
  PRIMITIVE_G(PRIM_SUBTRACT)
  PRIMITIVE_G(PRIM_MULT)
  PRIMITIVE_G(PRIM_DIV)
  PRIMITIVE_G(PRIM_MOD)
  PRIMITIVE_G(PRIM_LSH)
  PRIMITIVE_G(PRIM_RSH)
  PRIMITIVE_G(PRIM_EQUAL)
  PRIMITIVE_G(PRIM_NOTEQUAL)
  PRIMITIVE_G(PRIM_LESSOREQUAL)
  PRIMITIVE_G(PRIM_GREATEROREQUAL)
  PRIMITIVE_G(PRIM_LESS)
  PRIMITIVE_G(PRIM_GREATER)
  PRIMITIVE_G(PRIM_AND)
  PRIMITIVE_G(PRIM_OR)
  PRIMITIVE_G(PRIM_XOR)
  PRIMITIVE_G(PRIM_POW)

  PRIMITIVE_G(PRIM_ASSIGN)
  PRIMITIVE_R(PRIM_ASSIGN_ELIDED_COPY)
  PRIMITIVE_G(PRIM_UNORDERED_ASSIGN)
  PRIMITIVE_G(PRIM_ADD_ASSIGN)
  PRIMITIVE_G(PRIM_SUBTRACT_ASSIGN)
  PRIMITIVE_G(PRIM_MULT_ASSIGN)
  PRIMITIVE_G(PRIM_DIV_ASSIGN)
  PRIMITIVE_G(PRIM_MOD_ASSIGN)
  PRIMITIVE_G(PRIM_LSH_ASSIGN)
  PRIMITIVE_G(PRIM_RSH_ASSIGN)
  PRIMITIVE_G(PRIM_AND_ASSIGN)
  PRIMITIVE_G(PRIM_OR_ASSIGN)
  PRIMITIVE_G(PRIM_XOR_ASSIGN)
  PRIMITIVE_R(PRIM_REDUCE_ASSIGN)

  PRIMITIVE_G(PRIM_MIN)
  PRIMITIVE_G(PRIM_MAX)

  PRIMITIVE_G(PRIM_SETCID)
  PRIMITIVE_G(PRIM_TESTCID)
  PRIMITIVE_G(PRIM_GETCID)
  PRIMITIVE_G(PRIM_SET_UNION_ID)
  PRIMITIVE_G(PRIM_GET_UNION_ID)
  PRIMITIVE_G(PRIM_GET_MEMBER)
  PRIMITIVE_G(PRIM_GET_MEMBER_VALUE)
  PRIMITIVE_G(PRIM_SET_MEMBER)
  PRIMITIVE_G(PRIM_CHECK_NIL)

  PRIMITIVE_R(PRIM_NEW)

  PRIMITIVE_G(PRIM_GET_REAL)
  PRIMITIVE_G(PRIM_GET_IMAG)

  PRIMITIVE_R(PRIM_QUERY)
  PRIMITIVE_R(PRIM_QUERY_PARAM_FIELD)
  PRIMITIVE_R(PRIM_QUERY_TYPE_FIELD)

  PRIMITIVE_G(PRIM_ADDR_OF)
  PRIMITIVE_G(PRIM_DEREF)
  PRIMITIVE_G(PRIM_SET_REFERENCE)

  PRIMITIVE_G(PRIM_LOCAL_CHECK)

  PRIMITIVE_R(PRIM_GET_END_COUNT)
  PRIMITIVE_R(PRIM_SET_END_COUNT)

  PRIMITIVE_G(PRIM_GET_DYNAMIC_END_COUNT)
  PRIMITIVE_G(PRIM_SET_DYNAMIC_END_COUNT)

  PRIMITIVE_G(PRIM_GET_SERIAL)
  PRIMITIVE_G(PRIM_SET_SERIAL)

  PRIMITIVE_G(PRIM_SIZEOF_BUNDLE)
  PRIMITIVE_G(PRIM_SIZEOF_DDATA_ELEMENT)

  PRIMITIVE_R(PRIM_INIT_FIELDS)

  PRIMITIVE_G(PRIM_PTR_EQUAL)
  PRIMITIVE_G(PRIM_PTR_NOTEQUAL)

  PRIMITIVE_R(PRIM_IS_SUBTYPE)
  PRIMITIVE_R(PRIM_IS_INSTANTIATION_ALLOW_VALUES)
  PRIMITIVE_R(PRIM_IS_PROPER_SUBTYPE)
  PRIMITIVE_R(PRIM_IS_BOUND)
  PRIMITIVE_R(PRIM_IS_COERCIBLE)

  PRIMITIVE_G(PRIM_CAST)
  PRIMITIVE_G(PRIM_DYNAMIC_CAST)
  PRIMITIVE_R(PRIM_LIFETIME_OF)
  PRIMITIVE_R(PRIM_TYPEOF)
  PRIMITIVE_R(PRIM_STATIC_TYPEOF)
  PRIMITIVE_R(PRIM_SCALAR_PROMOTION_TYPE)
  PRIMITIVE_R(PRIM_STATIC_FIELD_TYPE)
  PRIMITIVE_R(PRIM_USED_MODULES_LIST)
  PRIMITIVE_R(PRIM_REFERENCED_MODULES_LIST)
  PRIMITIVE_R(PRIM_TUPLE_EXPAND)

  PRIMITIVE_G(PRIM_CHPL_COMM_GET)
  PRIMITIVE_G(PRIM_CHPL_COMM_PUT)

  PRIMITIVE_G(PRIM_CHPL_COMM_ARRAY_GET)
  PRIMITIVE_G(PRIM_CHPL_COMM_ARRAY_PUT)
  PRIMITIVE_G(PRIM_CHPL_COMM_REMOTE_PREFETCH)
  PRIMITIVE_G(PRIM_CHPL_COMM_GET_STRD)
  PRIMITIVE_G(PRIM_CHPL_COMM_PUT_STRD)

  PRIMITIVE_G(PRIM_ARRAY_GET)
  PRIMITIVE_G(PRIM_ARRAY_SHIFT_BASE_POINTER)

  PRIMITIVE_G(PRIM_ARRAY_SET)
  PRIMITIVE_G(PRIM_ARRAY_SET_FIRST)

  PRIMITIVE_R(PRIM_MAYBE_LOCAL_THIS)

  PRIMITIVE_R(PRIM_ERROR)
  PRIMITIVE_R(PRIM_WARNING)
  PRIMITIVE_R(PRIM_WHEN)
  PRIMITIVE_R(PRIM_TYPE_TO_STRING)

  // Maybe these should be in a different category
  PRIMITIVE_R(PRIM_BLOCK_PARAM_LOOP)
  PRIMITIVE_R(PRIM_BLOCK_WHILEDO_LOOP)
  PRIMITIVE_R(PRIM_BLOCK_DOWHILE_LOOP)
  PRIMITIVE_R(PRIM_BLOCK_FOR_LOOP)
  PRIMITIVE_R(PRIM_BLOCK_FORALL_LOOP)
  PRIMITIVE_R(PRIM_BLOCK_C_FOR_LOOP)

  PRIMITIVE_R(PRIM_BLOCK_BEGIN)
  PRIMITIVE_R(PRIM_BLOCK_COBEGIN)
  PRIMITIVE_R(PRIM_BLOCK_COFORALL)
  PRIMITIVE_R(PRIM_BLOCK_ON)
  PRIMITIVE_R(PRIM_BLOCK_ELIDED_ON)
  PRIMITIVE_R(PRIM_BLOCK_BEGIN_ON)
  PRIMITIVE_R(PRIM_BLOCK_COBEGIN_ON)
  PRIMITIVE_R(PRIM_BLOCK_COFORALL_ON)
  PRIMITIVE_R(PRIM_BLOCK_LOCAL)
  PRIMITIVE_R(PRIM_BLOCK_UNLOCAL)

  PRIMITIVE_R(PRIM_HAS_LEADER)
  PRIMITIVE_R(PRIM_TO_LEADER)
  PRIMITIVE_R(PRIM_TO_FOLLOWER)
  PRIMITIVE_R(PRIM_TO_STANDALONE)

  PRIMITIVE_R(PRIM_CALL_DESTRUCTOR)

  PRIMITIVE_R(PRIM_LOGICAL_FOLDER)

  PRIMITIVE_G(PRIM_WIDE_MAKE)

  PRIMITIVE_G(PRIM_WIDE_GET_LOCALE)

  PRIMITIVE_G(PRIM_WIDE_GET_NODE)
  PRIMITIVE_G(PRIM_WIDE_GET_ADDR)
  PRIMITIVE_R(PRIM_IS_WIDE_PTR)

  PRIMITIVE_G(PRIM_ON_LOCALE_NUM)

  PRIMITIVE_G(PRIM_REGISTER_GLOBAL_VAR)
  PRIMITIVE_G(PRIM_BROADCAST_GLOBAL_VARS)
  PRIMITIVE_G(PRIM_PRIVATE_BROADCAST)

  PRIMITIVE_G(PRIM_INT_ERROR)

  PRIMITIVE_R(PRIM_CAPTURE_FN_FOR_CHPL)
  PRIMITIVE_R(PRIM_CAPTURE_FN_FOR_C)
  PRIMITIVE_R(PRIM_CREATE_FN_TYPE)

  PRIMITIVE_G(PRIM_STRING_COPY)
  PRIMITIVE_G(PRIM_CAST_TO_VOID_STAR)

  PRIMITIVE_G(PRIM_RT_ERROR)
  PRIMITIVE_G(PRIM_RT_WARNING)

  PRIMITIVE_G(PRIM_NEW_PRIV_CLASS)

  PRIMITIVE_R(PRIM_GET_USER_LINE)
  PRIMITIVE_R(PRIM_GET_USER_FILE)

  PRIMITIVE_G(PRIM_FTABLE_CALL)

  PRIMITIVE_R(PRIM_IS_TUPLE_TYPE)
  PRIMITIVE_R(PRIM_IS_STAR_TUPLE_TYPE)

  PRIMITIVE_G(PRIM_SET_SVEC_MEMBER)
  PRIMITIVE_G(PRIM_GET_SVEC_MEMBER)
  PRIMITIVE_G(PRIM_GET_SVEC_MEMBER_VALUE)

  PRIMITIVE_G(PRIM_VIRTUAL_METHOD_CALL)

  PRIMITIVE_R(PRIM_NUM_FIELDS)
  PRIMITIVE_R(PRIM_FIELD_NUM_TO_NAME)
  PRIMITIVE_R(PRIM_FIELD_NAME_TO_NUM)
  PRIMITIVE_R(PRIM_FIELD_BY_NUM)

  PRIMITIVE_G(PRIM_CLASS_NAME_BY_ID)

  PRIMITIVE_R(PRIM_ITERATOR_RECORD_FIELD_VALUE_BY_FORMAL)
  PRIMITIVE_R(PRIM_ITERATOR_RECORD_SET_SHAPE)
  PRIMITIVE_R(PRIM_IS_GENERIC_TYPE)
  PRIMITIVE_R(PRIM_IS_CLASS_TYPE)
  PRIMITIVE_R(PRIM_IS_NILABLE_CLASS_TYPE)
  PRIMITIVE_R(PRIM_IS_NON_NILABLE_CLASS_TYPE)
  PRIMITIVE_R(PRIM_IS_RECORD_TYPE)
  PRIMITIVE_R(PRIM_IS_UNION_TYPE)
  PRIMITIVE_R(PRIM_IS_ATOMIC_TYPE)
  PRIMITIVE_R(PRIM_IS_REF_ITER_TYPE)
  PRIMITIVE_R(PRIM_IS_EXTERN_TYPE)
  PRIMITIVE_R(PRIM_IS_ABS_ENUM_TYPE)

  PRIMITIVE_R(PRIM_IS_POD)
  PRIMITIVE_R(PRIM_IS_COPYABLE)
  PRIMITIVE_R(PRIM_IS_CONST_COPYABLE)
  PRIMITIVE_R(PRIM_IS_ASSIGNABLE)
  PRIMITIVE_R(PRIM_IS_CONST_ASSIGNABLE)
  PRIMITIVE_R(PRIM_HAS_DEFAULT_VALUE)
  PRIMITIVE_R(PRIM_NEEDS_AUTO_DESTROY)
  PRIMITIVE_R(PRIM_END_OF_STATEMENT)
  PRIMITIVE_R(PRIM_STEAL)
  PRIMITIVE_R(PRIM_AUTO_DESTROY_RUNTIME_TYPE)

  PRIMITIVE_R(PRIM_GET_RUNTIME_TYPE_FIELD)

  PRIMITIVE_R(PRIM_COERCE)

  PRIMITIVE_R(PRIM_CALL_RESOLVES)
  PRIMITIVE_R(PRIM_METHOD_CALL_RESOLVES)
  PRIMITIVE_R(PRIM_CALL_AND_FN_RESOLVES)
  PRIMITIVE_R(PRIM_METHOD_CALL_AND_FN_RESOLVES)

  PRIMITIVE_G(PRIM_START_RMEM_FENCE)
  PRIMITIVE_G(PRIM_FINISH_RMEM_FENCE)

  PRIMITIVE_G(PRIM_LOOKUP_FILENAME)

  PRIMITIVE_R(PRIM_GET_COMPILER_VAR)

  PRIMITIVE_G(PRIM_STACK_ALLOCATE_CLASS)

  PRIMITIVE_R(PRIM_ZIP)
  PRIMITIVE_R(PRIM_REQUIRE)

  PRIMITIVE_R(PRIM_CHECK_ERROR)
  PRIMITIVE_R(PRIM_CURRENT_ERROR)

  PRIMITIVE_R(PRIM_TO_UNMANAGED_CLASS_CHECKED)
  PRIMITIVE_R(PRIM_TO_BORROWED_CLASS_CHECKED)
  PRIMITIVE_R(PRIM_TO_NILABLE_CLASS_CHECKED)
  PRIMITIVE_R(PRIM_TO_UNMANAGED_CLASS)
  PRIMITIVE_R(PRIM_TO_BORROWED_CLASS)
  PRIMITIVE_R(PRIM_TO_UNDECORATED_CLASS)
  PRIMITIVE_R(PRIM_TO_NILABLE_CLASS)
  PRIMITIVE_R(PRIM_TO_NON_NILABLE_CLASS)

  PRIMITIVE_G(PRIM_INVARIANT_START)
  PRIMITIVE_G(PRIM_NO_ALIAS_SET)
  PRIMITIVE_G(PRIM_COPIES_NO_ALIAS_SET)

  PRIMITIVE_G(PRIM_OPTIMIZATION_INFO)

  PRIMITIVE_R(PRIM_GATHER_TESTS)
  PRIMITIVE_R(PRIM_GET_TEST_BY_INDEX)
  PRIMITIVE_R(PRIM_GET_TEST_BY_NAME)

  PRIMITIVE_R(PRIM_VERSION_MAJOR)
  PRIMITIVE_R(PRIM_VERSION_MINOR)
  PRIMITIVE_R(PRIM_VERSION_UPDATE)
  PRIMITIVE_R(PRIM_VERSION_SHA)

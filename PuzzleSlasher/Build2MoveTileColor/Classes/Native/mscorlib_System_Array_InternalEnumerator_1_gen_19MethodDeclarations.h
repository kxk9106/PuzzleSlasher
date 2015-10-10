#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct InternalEnumerator_1_t2011;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m9523_gshared (InternalEnumerator_1_t2011 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m9523(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2011 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m9523_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9524_gshared (InternalEnumerator_1_t2011 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9524(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2011 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9524_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m9525_gshared (InternalEnumerator_1_t2011 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m9525(__this, method) (( void (*) (InternalEnumerator_1_t2011 *, const MethodInfo*))InternalEnumerator_1_Dispose_m9525_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m9526_gshared (InternalEnumerator_1_t2011 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m9526(__this, method) (( bool (*) (InternalEnumerator_1_t2011 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m9526_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2010  InternalEnumerator_1_get_Current_m9527_gshared (InternalEnumerator_1_t2011 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m9527(__this, method) (( KeyValuePair_2_t2010  (*) (InternalEnumerator_1_t2011 *, const MethodInfo*))InternalEnumerator_1_get_Current_m9527_gshared)(__this, method)

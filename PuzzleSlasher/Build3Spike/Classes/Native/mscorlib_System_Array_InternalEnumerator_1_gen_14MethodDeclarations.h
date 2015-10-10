#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct InternalEnumerator_1_t1984;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m9235_gshared (InternalEnumerator_1_t1984 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m9235(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1984 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m9235_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9236_gshared (InternalEnumerator_1_t1984 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9236(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1984 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9236_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m9237_gshared (InternalEnumerator_1_t1984 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m9237(__this, method) (( void (*) (InternalEnumerator_1_t1984 *, const MethodInfo*))InternalEnumerator_1_Dispose_m9237_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m9238_gshared (InternalEnumerator_1_t1984 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m9238(__this, method) (( bool (*) (InternalEnumerator_1_t1984 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m9238_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1983  InternalEnumerator_1_get_Current_m9239_gshared (InternalEnumerator_1_t1984 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m9239(__this, method) (( KeyValuePair_2_t1983  (*) (InternalEnumerator_1_t1984 *, const MethodInfo*))InternalEnumerator_1_get_Current_m9239_gshared)(__this, method)

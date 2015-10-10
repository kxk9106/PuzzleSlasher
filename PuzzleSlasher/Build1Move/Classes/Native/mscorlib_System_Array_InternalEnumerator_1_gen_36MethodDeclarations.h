#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct InternalEnumerator_1_t2109;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10868_gshared (InternalEnumerator_1_t2109 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10868(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2109 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10868_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10869_gshared (InternalEnumerator_1_t2109 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10869(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2109 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10869_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10870_gshared (InternalEnumerator_1_t2109 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10870(__this, method) (( void (*) (InternalEnumerator_1_t2109 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10870_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10871_gshared (InternalEnumerator_1_t2109 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10871(__this, method) (( bool (*) (InternalEnumerator_1_t2109 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10871_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Current()
extern "C" KeyValuePair_2_t2108  InternalEnumerator_1_get_Current_m10872_gshared (InternalEnumerator_1_t2109 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10872(__this, method) (( KeyValuePair_2_t2108  (*) (InternalEnumerator_1_t2109 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10872_gshared)(__this, method)

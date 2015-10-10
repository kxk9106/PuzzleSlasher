#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.DateTime>
struct InternalEnumerator_1_t2263;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12382_gshared (InternalEnumerator_1_t2263 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12382(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2263 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12382_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12383_gshared (InternalEnumerator_1_t2263 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12383(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2263 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12383_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12384_gshared (InternalEnumerator_1_t2263 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12384(__this, method) (( void (*) (InternalEnumerator_1_t2263 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12384_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12385_gshared (InternalEnumerator_1_t2263 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12385(__this, method) (( bool (*) (InternalEnumerator_1_t2263 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12385_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t60  InternalEnumerator_1_get_Current_m12386_gshared (InternalEnumerator_1_t2263 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12386(__this, method) (( DateTime_t60  (*) (InternalEnumerator_1_t2263 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12386_gshared)(__this, method)

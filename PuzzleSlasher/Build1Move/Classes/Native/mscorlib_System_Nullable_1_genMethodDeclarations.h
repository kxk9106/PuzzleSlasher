#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1445;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m8113_gshared (Nullable_1_t1445 * __this, TimeSpan_t562  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m8113(__this, ___value, method) (( void (*) (Nullable_1_t1445 *, TimeSpan_t562 , const MethodInfo*))Nullable_1__ctor_m8113_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m8114_gshared (Nullable_1_t1445 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m8114(__this, method) (( bool (*) (Nullable_1_t1445 *, const MethodInfo*))Nullable_1_get_HasValue_m8114_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t562  Nullable_1_get_Value_m8115_gshared (Nullable_1_t1445 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m8115(__this, method) (( TimeSpan_t562  (*) (Nullable_1_t1445 *, const MethodInfo*))Nullable_1_get_Value_m8115_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m12479_gshared (Nullable_1_t1445 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m12479(__this, ___other, method) (( bool (*) (Nullable_1_t1445 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m12479_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m12480_gshared (Nullable_1_t1445 * __this, Nullable_1_t1445  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m12480(__this, ___other, method) (( bool (*) (Nullable_1_t1445 *, Nullable_1_t1445 , const MethodInfo*))Nullable_1_Equals_m12480_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m12481_gshared (Nullable_1_t1445 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m12481(__this, method) (( int32_t (*) (Nullable_1_t1445 *, const MethodInfo*))Nullable_1_GetHashCode_m12481_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m12482_gshared (Nullable_1_t1445 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m12482(__this, method) (( String_t* (*) (Nullable_1_t1445 *, const MethodInfo*))Nullable_1_ToString_m12482_gshared)(__this, method)

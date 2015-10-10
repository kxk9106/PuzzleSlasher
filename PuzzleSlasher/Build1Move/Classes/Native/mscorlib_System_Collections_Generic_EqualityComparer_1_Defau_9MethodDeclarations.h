#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t2277;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12476_gshared (DefaultComparer_t2277 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12476(__this, method) (( void (*) (DefaultComparer_t2277 *, const MethodInfo*))DefaultComparer__ctor_m12476_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12477_gshared (DefaultComparer_t2277 * __this, DateTimeOffset_t370  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12477(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2277 *, DateTimeOffset_t370 , const MethodInfo*))DefaultComparer_GetHashCode_m12477_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12478_gshared (DefaultComparer_t2277 * __this, DateTimeOffset_t370  ___x, DateTimeOffset_t370  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12478(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2277 *, DateTimeOffset_t370 , DateTimeOffset_t370 , const MethodInfo*))DefaultComparer_Equals_m12478_gshared)(__this, ___x, ___y, method)

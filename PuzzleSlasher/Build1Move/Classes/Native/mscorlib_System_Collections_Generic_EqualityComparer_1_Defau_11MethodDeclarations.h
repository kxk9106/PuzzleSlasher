#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2285;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m12514_gshared (DefaultComparer_t2285 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12514(__this, method) (( void (*) (DefaultComparer_t2285 *, const MethodInfo*))DefaultComparer__ctor_m12514_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12515_gshared (DefaultComparer_t2285 * __this, TimeSpan_t562  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12515(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2285 *, TimeSpan_t562 , const MethodInfo*))DefaultComparer_GetHashCode_m12515_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12516_gshared (DefaultComparer_t2285 * __this, TimeSpan_t562  ___x, TimeSpan_t562  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12516(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2285 *, TimeSpan_t562 , TimeSpan_t562 , const MethodInfo*))DefaultComparer_Equals_m12516_gshared)(__this, ___x, ___y, method)

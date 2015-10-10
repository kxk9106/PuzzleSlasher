#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t2288;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12532_gshared (DefaultComparer_t2288 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12532(__this, method) (( void (*) (DefaultComparer_t2288 *, const MethodInfo*))DefaultComparer__ctor_m12532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12533_gshared (DefaultComparer_t2288 * __this, DateTimeOffset_t379  ___x, DateTimeOffset_t379  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12533(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2288 *, DateTimeOffset_t379 , DateTimeOffset_t379 , const MethodInfo*))DefaultComparer_Compare_m12533_gshared)(__this, ___x, ___y, method)

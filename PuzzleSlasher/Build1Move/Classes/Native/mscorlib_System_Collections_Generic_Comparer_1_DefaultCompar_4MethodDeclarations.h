#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2283;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m12505_gshared (DefaultComparer_t2283 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12505(__this, method) (( void (*) (DefaultComparer_t2283 *, const MethodInfo*))DefaultComparer__ctor_m12505_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12506_gshared (DefaultComparer_t2283 * __this, TimeSpan_t562  ___x, TimeSpan_t562  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12506(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2283 *, TimeSpan_t562 , TimeSpan_t562 , const MethodInfo*))DefaultComparer_Compare_m12506_gshared)(__this, ___x, ___y, method)

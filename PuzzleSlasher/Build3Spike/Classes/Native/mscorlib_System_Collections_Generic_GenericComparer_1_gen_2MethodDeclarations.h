#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t1481;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m8140_gshared (GenericComparer_1_t1481 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m8140(__this, method) (( void (*) (GenericComparer_1_t1481 *, const MethodInfo*))GenericComparer_1__ctor_m8140_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m12565_gshared (GenericComparer_1_t1481 * __this, TimeSpan_t572  ___x, TimeSpan_t572  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m12565(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1481 *, TimeSpan_t572 , TimeSpan_t572 , const MethodInfo*))GenericComparer_1_Compare_m12565_gshared)(__this, ___x, ___y, method)

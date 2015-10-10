#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2292;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12550_gshared (DefaultComparer_t2292 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12550(__this, method) (( void (*) (DefaultComparer_t2292 *, const MethodInfo*))DefaultComparer__ctor_m12550_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12551_gshared (DefaultComparer_t2292 * __this, Guid_t380  ___x, Guid_t380  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12551(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2292 *, Guid_t380 , Guid_t380 , const MethodInfo*))DefaultComparer_Compare_m12551_gshared)(__this, ___x, ___y, method)

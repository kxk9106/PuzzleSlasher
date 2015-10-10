#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t1480;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m8139_gshared (GenericEqualityComparer_1_t1480 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m8139(__this, method) (( void (*) (GenericEqualityComparer_1_t1480 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m8139_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m12555_gshared (GenericEqualityComparer_1_t1480 * __this, Guid_t380  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m12555(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1480 *, Guid_t380 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m12555_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m12556_gshared (GenericEqualityComparer_1_t1480 * __this, Guid_t380  ___x, Guid_t380  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m12556(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1480 *, Guid_t380 , Guid_t380 , const MethodInfo*))GenericEqualityComparer_1_Equals_m12556_gshared)(__this, ___x, ___y, method)

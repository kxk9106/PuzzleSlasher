#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2294;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12559_gshared (DefaultComparer_t2294 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12559(__this, method) (( void (*) (DefaultComparer_t2294 *, const MethodInfo*))DefaultComparer__ctor_m12559_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12560_gshared (DefaultComparer_t2294 * __this, Guid_t380  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12560(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2294 *, Guid_t380 , const MethodInfo*))DefaultComparer_GetHashCode_m12560_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12561_gshared (DefaultComparer_t2294 * __this, Guid_t380  ___x, Guid_t380  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12561(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2294 *, Guid_t380 , Guid_t380 , const MethodInfo*))DefaultComparer_Equals_m12561_gshared)(__this, ___x, ___y, method)

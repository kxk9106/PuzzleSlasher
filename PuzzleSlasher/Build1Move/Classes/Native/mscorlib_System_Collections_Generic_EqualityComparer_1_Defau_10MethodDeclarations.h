#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2281;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12497_gshared (DefaultComparer_t2281 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12497(__this, method) (( void (*) (DefaultComparer_t2281 *, const MethodInfo*))DefaultComparer__ctor_m12497_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12498_gshared (DefaultComparer_t2281 * __this, Guid_t371  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12498(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2281 *, Guid_t371 , const MethodInfo*))DefaultComparer_GetHashCode_m12498_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12499_gshared (DefaultComparer_t2281 * __this, Guid_t371  ___x, Guid_t371  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12499(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2281 *, Guid_t371 , Guid_t371 , const MethodInfo*))DefaultComparer_Equals_m12499_gshared)(__this, ___x, ___y, method)

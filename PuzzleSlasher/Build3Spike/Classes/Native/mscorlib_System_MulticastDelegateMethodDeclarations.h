#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t64;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t326;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1442;
// System.Delegate
struct Delegate_t348;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m1459 (MulticastDelegate_t64 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m1457 (MulticastDelegate_t64 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m1458 (MulticastDelegate_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1442* MulticastDelegate_GetInvocationList_m1461 (MulticastDelegate_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t348 * MulticastDelegate_CombineImpl_m1462 (MulticastDelegate_t64 * __this, Delegate_t348 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m4208 (MulticastDelegate_t64 * __this, MulticastDelegate_t64 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t64 * MulticastDelegate_KPM_m4209 (Object_t * __this /* static, unused */, MulticastDelegate_t64 * ___needle, MulticastDelegate_t64 * ___haystack, MulticastDelegate_t64 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t348 * MulticastDelegate_RemoveImpl_m1463 (MulticastDelegate_t64 * __this, Delegate_t348 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

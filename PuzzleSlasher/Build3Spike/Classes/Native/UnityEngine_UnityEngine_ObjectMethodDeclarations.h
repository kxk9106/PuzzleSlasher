﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object
struct Object_t10;
struct Object_t10_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Object::.ctor()
extern "C" void Object__ctor_m643 (Object_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t10 * Object_Internal_InstantiateSingle_m644 (Object_t * __this /* static, unused */, Object_t10 * ___data, Vector3_t5  ___pos, Quaternion_t9  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t10 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m645 (Object_t * __this /* static, unused */, Object_t10 * ___data, Vector3_t5 * ___pos, Quaternion_t9 * ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m646 (Object_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m35 (Object_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern "C" bool Object_Equals_m32 (Object_t10 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m34 (Object_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m647 (Object_t * __this /* static, unused */, Object_t10 * ___lhs, Object_t10 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C" bool Object_IsNativeObjectAlive_m648 (Object_t * __this /* static, unused */, Object_t10 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m649 (Object_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m650 (Object_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t10 * Object_Instantiate_m10 (Object_t * __this /* static, unused */, Object_t10 * ___original, Vector3_t5  ___position, Quaternion_t9  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C" void Object_CheckNullArgument_m651 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m652 (Object_t * __this /* static, unused */, Object_t10 * ___exists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m653 (Object_t * __this /* static, unused */, Object_t10 * ___x, Object_t10 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m654 (Object_t * __this /* static, unused */, Object_t10 * ___x, Object_t10 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Object_t10_marshal(const Object_t10& unmarshaled, Object_t10_marshaled& marshaled);
void Object_t10_marshal_back(const Object_t10_marshaled& marshaled, Object_t10& unmarshaled);
void Object_t10_marshal_cleanup(Object_t10_marshaled& marshaled);

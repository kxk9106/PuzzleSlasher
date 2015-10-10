﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TrackedReference
struct TrackedReference_t153;
struct TrackedReference_t153_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" bool TrackedReference_Equals_m1165 (TrackedReference_t153 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m1166 (TrackedReference_t153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m1167 (Object_t * __this /* static, unused */, TrackedReference_t153 * ___x, TrackedReference_t153 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void TrackedReference_t153_marshal(const TrackedReference_t153& unmarshaled, TrackedReference_t153_marshaled& marshaled);
void TrackedReference_t153_marshal_back(const TrackedReference_t153_marshaled& marshaled, TrackedReference_t153& unmarshaled);
void TrackedReference_t153_marshal_cleanup(TrackedReference_t153_marshaled& marshaled);

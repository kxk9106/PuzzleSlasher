#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t152;
struct AnimationCurve_t152_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t299;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m729 (AnimationCurve_t152 * __this, KeyframeU5BU5D_t299* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m730 (AnimationCurve_t152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m731 (AnimationCurve_t152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m732 (AnimationCurve_t152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m733 (AnimationCurve_t152 * __this, KeyframeU5BU5D_t299* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t152_marshal(const AnimationCurve_t152& unmarshaled, AnimationCurve_t152_marshaled& marshaled);
void AnimationCurve_t152_marshal_back(const AnimationCurve_t152_marshaled& marshaled, AnimationCurve_t152& unmarshaled);
void AnimationCurve_t152_marshal_cleanup(AnimationCurve_t152_marshaled& marshaled);

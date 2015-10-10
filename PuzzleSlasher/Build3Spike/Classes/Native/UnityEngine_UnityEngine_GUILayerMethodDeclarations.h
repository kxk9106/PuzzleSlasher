#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayer
struct GUILayer_t54;
// UnityEngine.GUIElement
struct GUIElement_t53;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" GUIElement_t53 * GUILayer_HitTest_m161 (GUILayer_t54 * __this, Vector3_t5  ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t53 * GUILayer_INTERNAL_CALL_HitTest_m162 (Object_t * __this /* static, unused */, GUILayer_t54 * ___self, Vector3_t5 * ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;

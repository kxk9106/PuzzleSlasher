#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Material
struct Material_t14;
// System.String
struct String_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" void Material_set_color_m26 (Material_t14 * __this, Color_t15  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" void Material_SetColor_m519 (Material_t14 * __this, String_t* ___propertyName, Color_t15  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C" void Material_SetColor_m520 (Material_t14 * __this, int32_t ___nameID, Color_t15  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C" void Material_INTERNAL_CALL_SetColor_m521 (Object_t * __this /* static, unused */, Material_t14 * ___self, int32_t ___nameID, Color_t15 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;

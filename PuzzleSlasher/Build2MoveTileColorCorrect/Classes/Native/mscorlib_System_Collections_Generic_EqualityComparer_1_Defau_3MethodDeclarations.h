﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t2066;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m10243_gshared (DefaultComparer_t2066 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10243(__this, method) (( void (*) (DefaultComparer_t2066 *, const MethodInfo*))DefaultComparer__ctor_m10243_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10244_gshared (DefaultComparer_t2066 * __this, UILineInfo_t166  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10244(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2066 *, UILineInfo_t166 , const MethodInfo*))DefaultComparer_GetHashCode_m10244_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10245_gshared (DefaultComparer_t2066 * __this, UILineInfo_t166  ___x, UILineInfo_t166  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10245(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2066 *, UILineInfo_t166 , UILineInfo_t166 , const MethodInfo*))DefaultComparer_Equals_m10245_gshared)(__this, ___x, ___y, method)

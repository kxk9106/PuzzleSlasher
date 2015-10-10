#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"
extern TypeInfo* InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t7_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t389_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		RuntimeCompatibilityAttribute_t7_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ExtensionAttribute_t389_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t388 * tmp;
		tmp = (InternalsVisibleToAttribute_t388 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1340(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t388 * tmp;
		tmp = (InternalsVisibleToAttribute_t388 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1340(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t388 * tmp;
		tmp = (InternalsVisibleToAttribute_t388 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1340(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t388 * tmp;
		tmp = (InternalsVisibleToAttribute_t388 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1340(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t388 * tmp;
		tmp = (InternalsVisibleToAttribute_t388 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1340(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t388 * tmp;
		tmp = (InternalsVisibleToAttribute_t388 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1340(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t388 * tmp;
		tmp = (InternalsVisibleToAttribute_t388 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1340(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t388 * tmp;
		tmp = (InternalsVisibleToAttribute_t388 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1340(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t388 * tmp;
		tmp = (InternalsVisibleToAttribute_t388 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1340(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t7 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t7 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t7_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m13(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m14(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t389 * tmp;
		tmp = (ExtensionAttribute_t389 *)il2cpp_codegen_object_new (ExtensionAttribute_t389_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m1341(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t388 * tmp;
		tmp = (InternalsVisibleToAttribute_t388 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1340(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t388 * tmp;
		tmp = (InternalsVisibleToAttribute_t388 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1340(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t388 * tmp;
		tmp = (InternalsVisibleToAttribute_t388 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1340(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t388 * tmp;
		tmp = (InternalsVisibleToAttribute_t388 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1340(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t388 * tmp;
		tmp = (InternalsVisibleToAttribute_t388 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1340(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t10_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m20(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t10_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m21(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t277_il2cpp_TypeInfo_var;
void AssetBundle_t12_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m25(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t277 * tmp;
		tmp = (TypeInferenceRuleAttribute_t277 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t277_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1170(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t277_il2cpp_TypeInfo_var;
void AssetBundle_t12_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m26(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		TypeInferenceRuleAttribute_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t277 * tmp;
		tmp = (TypeInferenceRuleAttribute_t277 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t277_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1170(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void AssetBundle_t12_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m27(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void LayerMask_t16_CustomAttributesCacheGenerator_LayerMask_LayerToName_m30(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void LayerMask_t16_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m31(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t390_il2cpp_TypeInfo_var;
void LayerMask_t16_CustomAttributesCacheGenerator_LayerMask_t16_LayerMask_GetMask_m32_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t390 * tmp;
		tmp = (ParamArrayAttribute_t390 *)il2cpp_codegen_object_new (ParamArrayAttribute_t390_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1342(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void SystemInfo_t18_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m35(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Coroutine_t23_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m40(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void ScriptableObject_t24_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m43(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t227_il2cpp_TypeInfo_var;
void ScriptableObject_t24_CustomAttributesCacheGenerator_ScriptableObject_t24_ScriptableObject_Internal_CreateScriptableObject_m43_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t227 * tmp;
		tmp = (WritableAttribute_t227 *)il2cpp_codegen_object_new (WritableAttribute_t227_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1037(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void ScriptableObject_t24_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m44(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void ScriptableObject_t24_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m46(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m51(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m52(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m53(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m54(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m55(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m56(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m57(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m58(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m59(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m60(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m61(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m62(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m63(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m65(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m66(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m67(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m71(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GcLeaderboard_t36_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GcLeaderboard_t36_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GcLeaderboard_t36_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GcLeaderboard_t36_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Screen_t38_CustomAttributesCacheGenerator_Screen_get_width_m139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Screen_t38_CustomAttributesCacheGenerator_Screen_get_height_m140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Texture2D_t40_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t227_il2cpp_TypeInfo_var;
void Texture2D_t40_CustomAttributesCacheGenerator_Texture2D_t40_Texture2D_Internal_Create_m143_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t227 * tmp;
		tmp = (WritableAttribute_t227 *)il2cpp_codegen_object_new (WritableAttribute_t227_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1037(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUILayer_t45_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Gradient_t49_CustomAttributesCacheGenerator_Gradient_Init_m149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Gradient_t49_CustomAttributesCacheGenerator_Gradient_Cleanup_m150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void GUI_t59_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void GUI_t59_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void GUI_t59_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUI_t59_CustomAttributesCacheGenerator_GUI_set_changed_m161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUILayoutUtility_t66_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUILayoutUtility_t66_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIUtility_t75_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIUtility_t75_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m210(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIUtility_t75_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISettings_t76_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISettings_t76_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISettings_t76_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISettings_t76_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISettings_t76_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t225_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(205);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t225 * tmp;
		tmp = (ExecuteInEditMode_t225 *)il2cpp_codegen_object_new (ExecuteInEditMode_t225_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m1033(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUISkin_t57_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUIContent_t81_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUIContent_t81_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void GUIContent_t81_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyleState_t82_CustomAttributesCacheGenerator_GUIStyleState_Init_m281(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyleState_t82_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m282(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyleState_t82_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m283(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyleState_t82_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_Init_m290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_Cleanup_m291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_get_left_m292(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_set_left_m293(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_get_right_m294(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_set_right_m295(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_get_top_m296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_set_top_m297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_get_bottom_m298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_set_bottom_m299(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_get_vertical_m301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_Init_m306(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_get_name_m308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_set_name_m309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m311(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m317(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m318(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m319(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m320(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m321(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t84_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Event_t85_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Event_t85_CustomAttributesCacheGenerator_Event_Init_m327(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Event_t85_CustomAttributesCacheGenerator_Event_Cleanup_m329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Event_t85_CustomAttributesCacheGenerator_Event_get_type_m330(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Event_t85_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m332(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Event_t85_CustomAttributesCacheGenerator_Event_get_modifiers_m333(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Event_t85_CustomAttributesCacheGenerator_Event_get_character_m334(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Event_t85_CustomAttributesCacheGenerator_Event_get_commandName_m335(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Event_t85_CustomAttributesCacheGenerator_Event_get_keyCode_m336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Event_t85_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t392_il2cpp_TypeInfo_var;
void EventModifiers_t89_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(240);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t392 * tmp;
		tmp = (FlagsAttribute_t392 *)il2cpp_codegen_object_new (FlagsAttribute_t392_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m1345(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t393_il2cpp_TypeInfo_var;
void Vector2_t52_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t393 * tmp;
		tmp = (DefaultMemberAttribute_t393 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t393_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1346(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t393_il2cpp_TypeInfo_var;
void Vector3_t4_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t393 * tmp;
		tmp = (DefaultMemberAttribute_t393 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t393_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1346(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t393_il2cpp_TypeInfo_var;
void Color_t47_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t393 * tmp;
		tmp = (DefaultMemberAttribute_t393 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t393_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1346(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t217_il2cpp_TypeInfo_var;
void Color32_t90_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t217 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t217 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t217_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m1027(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t393_il2cpp_TypeInfo_var;
void Quaternion_t91_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t393 * tmp;
		tmp = (DefaultMemberAttribute_t393 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t393_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1346(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t393_il2cpp_TypeInfo_var;
void Matrix4x4_t92_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t393 * tmp;
		tmp = (DefaultMemberAttribute_t393 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t393_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1346(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Matrix4x4_t92_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Matrix4x4_t92_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Matrix4x4_t92_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Matrix4x4_t92_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Matrix4x4_t92_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Matrix4x4_t92_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Matrix4x4_t92_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Bounds_t93_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Bounds_t93_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Bounds_t93_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Bounds_t93_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t393_il2cpp_TypeInfo_var;
void Vector4_t94_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t393 * tmp;
		tmp = (DefaultMemberAttribute_t393 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t393_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1346(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t277_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Resources_t102_CustomAttributesCacheGenerator_Resources_Load_m501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t277 * tmp;
		tmp = (TypeInferenceRuleAttribute_t277 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t277_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1170(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t394_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t103_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t394_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t394 * tmp;
		tmp = (ObsoleteAttribute_t394 *)il2cpp_codegen_object_new (ObsoleteAttribute_t394_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1347(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t393_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t106_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t393 * tmp;
		tmp = (DefaultMemberAttribute_t393 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t393_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1346(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t106_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t106_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m509(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t106_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m512(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void WWW_t107_CustomAttributesCacheGenerator_WWW_DestroyWWW_m525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void WWW_t107_CustomAttributesCacheGenerator_WWW_InitWWW_m526(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void WWW_t107_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m528(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void WWW_t107_CustomAttributesCacheGenerator_WWW_get_bytes_m532(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void WWW_t107_CustomAttributesCacheGenerator_WWW_get_error_m533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void WWW_t107_CustomAttributesCacheGenerator_WWW_get_isDone_m534(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t274_il2cpp_TypeInfo_var;
void WWWForm_t111_CustomAttributesCacheGenerator_WWWForm_AddField_m538(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t274 * tmp;
		tmp = (ExcludeFromDocsAttribute_t274 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t274_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1168(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t273_il2cpp_TypeInfo_var;
void WWWForm_t111_CustomAttributesCacheGenerator_WWWForm_t111_WWWForm_AddField_m539_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t273 * tmp;
		tmp = (DefaultValueAttribute_t273 *)il2cpp_codegen_object_new (DefaultValueAttribute_t273_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1164(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t273_il2cpp_TypeInfo_var;
void WWWTranscoder_t112_CustomAttributesCacheGenerator_WWWTranscoder_t112_WWWTranscoder_QPEncode_m546_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t273 * tmp;
		tmp = (DefaultValueAttribute_t273 *)il2cpp_codegen_object_new (DefaultValueAttribute_t273_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1164(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t273_il2cpp_TypeInfo_var;
void WWWTranscoder_t112_CustomAttributesCacheGenerator_WWWTranscoder_t112_WWWTranscoder_SevenBitClean_m549_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t273 * tmp;
		tmp = (DefaultValueAttribute_t273 *)il2cpp_codegen_object_new (DefaultValueAttribute_t273_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1164(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t394_il2cpp_TypeInfo_var;
void CacheIndex_t113_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t394_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t394 * tmp;
		tmp = (ObsoleteAttribute_t394 *)il2cpp_codegen_object_new (ObsoleteAttribute_t394_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1347(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t390_il2cpp_TypeInfo_var;
void UnityString_t114_CustomAttributesCacheGenerator_UnityString_t114_UnityString_Format_m551_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t390 * tmp;
		tmp = (ParamArrayAttribute_t390 *)il2cpp_codegen_object_new (ParamArrayAttribute_t390_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1342(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void AsyncOperation_t11_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m553(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Camera_t117_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m565(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Camera_t117_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Camera_t117_CustomAttributesCacheGenerator_Camera_get_cullingMask_m567(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Camera_t117_CustomAttributesCacheGenerator_Camera_get_eventMask_m568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Camera_t117_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Camera_t117_CustomAttributesCacheGenerator_Camera_get_targetTexture_m571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Camera_t117_CustomAttributesCacheGenerator_Camera_get_clearFlags_m572(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Camera_t117_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m574(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Camera_t117_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Camera_t117_CustomAttributesCacheGenerator_Camera_GetAllCameras_m576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Camera_t117_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m581(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Camera_t117_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t396_il2cpp_TypeInfo_var;
void CameraCallback_t118_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(245);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t396 * tmp;
		tmp = (EditorBrowsableAttribute_t396 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t396_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1350(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Debug_t119_CustomAttributesCacheGenerator_Debug_Internal_Log_m584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t227_il2cpp_TypeInfo_var;
void Debug_t119_CustomAttributesCacheGenerator_Debug_t119_Debug_Internal_Log_m584_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t227 * tmp;
		tmp = (WritableAttribute_t227 *)il2cpp_codegen_object_new (WritableAttribute_t227_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1037(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Display_t122_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m612(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Display_t122_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m613(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Display_t122_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Display_t122_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Display_t122_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m616(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Display_t122_CustomAttributesCacheGenerator_Display_SetParamsImpl_m617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Display_t122_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m618(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Display_t122_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void MonoBehaviour_t3_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m621(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Input_t6_CustomAttributesCacheGenerator_Input_GetMouseButton_m623(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Input_t6_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m624(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Input_t6_CustomAttributesCacheGenerator_Input_get_mousePosition_m625(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Input_t6_CustomAttributesCacheGenerator_Input_get_acceleration_m7(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Object_t14_CustomAttributesCacheGenerator_Object_get_name_m627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Object_t14_CustomAttributesCacheGenerator_Object_ToString_m18(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Component_t5_CustomAttributesCacheGenerator_Component_get_gameObject_m636(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Component_t5_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t397_il2cpp_TypeInfo_var;
void Component_t5_CustomAttributesCacheGenerator_Component_GetComponent_m1351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t397 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t397 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t397_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1352(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void GameObject_t123_CustomAttributesCacheGenerator_GameObject_SendMessage_m638(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t273_il2cpp_TypeInfo_var;
void GameObject_t123_CustomAttributesCacheGenerator_GameObject_t123_GameObject_SendMessage_m638_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t273 * tmp;
		tmp = (DefaultValueAttribute_t273 *)il2cpp_codegen_object_new (DefaultValueAttribute_t273_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1164(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t273_il2cpp_TypeInfo_var;
void GameObject_t123_CustomAttributesCacheGenerator_GameObject_t123_GameObject_SendMessage_m638_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t273 * tmp;
		tmp = (DefaultValueAttribute_t273 *)il2cpp_codegen_object_new (DefaultValueAttribute_t273_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1164(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Transform_t100_CustomAttributesCacheGenerator_Transform_get_childCount_m642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Transform_t100_CustomAttributesCacheGenerator_Transform_GetChild_m644(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Time_t125_CustomAttributesCacheGenerator_Time_get_deltaTime_m10(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Random_t126_CustomAttributesCacheGenerator_Random_RandomRangeInt_m646(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void PlayerPrefs_t127_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m648(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t273_il2cpp_TypeInfo_var;
void PlayerPrefs_t127_CustomAttributesCacheGenerator_PlayerPrefs_t127_PlayerPrefs_GetString_m648_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t273 * tmp;
		tmp = (DefaultValueAttribute_t273 *)il2cpp_codegen_object_new (DefaultValueAttribute_t273_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1164(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t274_il2cpp_TypeInfo_var;
void PlayerPrefs_t127_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m649(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t274 * tmp;
		tmp = (ExcludeFromDocsAttribute_t274 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t274_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1168(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t274_il2cpp_TypeInfo_var;
void Rigidbody_t1_CustomAttributesCacheGenerator_Rigidbody_AddForce_m12(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t274 * tmp;
		tmp = (ExcludeFromDocsAttribute_t274 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t274_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1168(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Rigidbody_t1_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForce_m666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t394_il2cpp_TypeInfo_var;
void AnimationEvent_t139_CustomAttributesCacheGenerator_AnimationEvent_t139____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t394_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t394 * tmp;
		tmp = (ObsoleteAttribute_t394 *)il2cpp_codegen_object_new (ObsoleteAttribute_t394_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1347(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t393_il2cpp_TypeInfo_var;
void AnimationCurve_t143_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t393 * tmp;
		tmp = (DefaultMemberAttribute_t393 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t393_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1346(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t390_il2cpp_TypeInfo_var;
void AnimationCurve_t143_CustomAttributesCacheGenerator_AnimationCurve_t143_AnimationCurve__ctor_m707_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t390 * tmp;
		tmp = (ParamArrayAttribute_t390 *)il2cpp_codegen_object_new (ParamArrayAttribute_t390_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1342(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void AnimationCurve_t143_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void AnimationCurve_t143_CustomAttributesCacheGenerator_AnimationCurve_Init_m711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t394_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t140_CustomAttributesCacheGenerator_AnimatorStateInfo_t140____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t394_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t394 * tmp;
		tmp = (ObsoleteAttribute_t394 *)il2cpp_codegen_object_new (ObsoleteAttribute_t394_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1347(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Animator_t146_CustomAttributesCacheGenerator_Animator_StringToHash_m730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t394_il2cpp_TypeInfo_var;
void CharacterInfo_t153_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t394_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t394 * tmp;
		tmp = (ObsoleteAttribute_t394 *)il2cpp_codegen_object_new (ObsoleteAttribute_t394_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1347(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t394_il2cpp_TypeInfo_var;
void CharacterInfo_t153_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t394_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t394 * tmp;
		tmp = (ObsoleteAttribute_t394 *)il2cpp_codegen_object_new (ObsoleteAttribute_t394_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1347(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t394_il2cpp_TypeInfo_var;
void CharacterInfo_t153_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t394_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t394 * tmp;
		tmp = (ObsoleteAttribute_t394 *)il2cpp_codegen_object_new (ObsoleteAttribute_t394_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1347(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t394_il2cpp_TypeInfo_var;
void CharacterInfo_t153_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t394_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t394 * tmp;
		tmp = (ObsoleteAttribute_t394 *)il2cpp_codegen_object_new (ObsoleteAttribute_t394_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1347(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void Font_t78_CustomAttributesCacheGenerator_Font_get_dynamic_m756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t396_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t154_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(245);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t396 * tmp;
		tmp = (EditorBrowsableAttribute_t396 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t396_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1350(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_Init_m760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m761(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m767(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m775(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t216_il2cpp_TypeInfo_var;
void TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t216 * tmp;
		tmp = (WrapperlessIcall_t216 *)il2cpp_codegen_object_new (WrapperlessIcall_t216_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1026(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Request_t166_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Request_t166_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Request_t166_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Request_t166_CustomAttributesCacheGenerator_Request_get_sourceId_m797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Request_t166_CustomAttributesCacheGenerator_Request_get_appId_m798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Request_t166_CustomAttributesCacheGenerator_Request_get_domain_m799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Response_t168_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Response_t168_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Response_t168_CustomAttributesCacheGenerator_Response_get_success_m808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Response_t168_CustomAttributesCacheGenerator_Response_set_success_m809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Response_t168_CustomAttributesCacheGenerator_Response_get_extendedInfo_m810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Response_t168_CustomAttributesCacheGenerator_Response_set_extendedInfo_m811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchRequest_t171_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchRequest_t171_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchRequest_t171_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchRequest_t171_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchRequest_t171_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m824(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m831(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchRequest_t173_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchRequest_t173_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchRequest_t173_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchRequest_t173_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchRequest_t173_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m844(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchRequest_t173_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t175_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t175_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t175_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void DropConnectionRequest_t176_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void DropConnectionRequest_t176_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void DropConnectionRequest_t176_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void DropConnectionRequest_t176_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void DropConnectionRequest_t176_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void DropConnectionRequest_t176_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchRequest_t177_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchRequest_t177_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchRequest_t177_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchRequest_t177_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchRequest_t177_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m884(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_name_m894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_set_name_m895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m899(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchResponse_t182_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchResponse_t182_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ListMatchResponse_t182_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo* DefaultValueAttribute_t399_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t183_il2cpp_TypeInfo_var;
void AppID_t183_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		AppID_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t399 * tmp;
		tmp = (DefaultValueAttribute_t399 *)il2cpp_codegen_object_new (DefaultValueAttribute_t399_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1355(tmp, Box(AppID_t183_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t399_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t184_il2cpp_TypeInfo_var;
void SourceID_t184_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		SourceID_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t399 * tmp;
		tmp = (DefaultValueAttribute_t399 *)il2cpp_codegen_object_new (DefaultValueAttribute_t399_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1355(tmp, Box(SourceID_t184_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t399_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t185_il2cpp_TypeInfo_var;
void NetworkID_t185_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		NetworkID_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t399 * tmp;
		tmp = (DefaultValueAttribute_t399 *)il2cpp_codegen_object_new (DefaultValueAttribute_t399_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1355(tmp, Box(NetworkID_t185_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t399_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t186_il2cpp_TypeInfo_var;
void NodeID_t186_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		NodeID_t186_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t399 * tmp;
		tmp = (DefaultValueAttribute_t399 *)il2cpp_codegen_object_new (DefaultValueAttribute_t399_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1355(tmp, Box(NodeID_t186_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t400_il2cpp_TypeInfo_var;
void NetworkMatch_t192_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(248);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t400 * tmp;
		tmp = (DebuggerHiddenAttribute_t400 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t400_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1357(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t402_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t400_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t402_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1363(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(248);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t400 * tmp;
		tmp = (DebuggerHiddenAttribute_t400 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t400_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1357(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t400_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t402_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1364(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(248);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t400 * tmp;
		tmp = (DebuggerHiddenAttribute_t400 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t400_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1357(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t400_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t402_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(248);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t400 * tmp;
		tmp = (DebuggerHiddenAttribute_t400 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t400_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1357(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t396_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var;
void JsonArray_t193_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(245);
		GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t396 * tmp;
		tmp = (EditorBrowsableAttribute_t396 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t396_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1350(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t403 * tmp;
		tmp = (GeneratedCodeAttribute_t403 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1367(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t396_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t393_il2cpp_TypeInfo_var;
void JsonObject_t196_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(245);
		GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		DefaultMemberAttribute_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t396 * tmp;
		tmp = (EditorBrowsableAttribute_t396 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t396_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1350(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t403 * tmp;
		tmp = (GeneratedCodeAttribute_t403 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1367(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t393 * tmp;
		tmp = (DefaultMemberAttribute_t393 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t393_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1346(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var;
void SimpleJson_t199_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t403 * tmp;
		tmp = (GeneratedCodeAttribute_t403 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1367(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t404_il2cpp_TypeInfo_var;
void SimpleJson_t199_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t404_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(250);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t404 * tmp;
		tmp = (SuppressMessageAttribute_t404 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t404_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1368(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1369(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t404_il2cpp_TypeInfo_var;
void SimpleJson_t199_CustomAttributesCacheGenerator_SimpleJson_NextToken_m967(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t404_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(250);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t404 * tmp;
		tmp = (SuppressMessageAttribute_t404 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t404_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1368(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t396_il2cpp_TypeInfo_var;
void SimpleJson_t199_CustomAttributesCacheGenerator_SimpleJson_t199____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(245);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t396 * tmp;
		tmp = (EditorBrowsableAttribute_t396 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t396_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1350(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t197_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t403 * tmp;
		tmp = (GeneratedCodeAttribute_t403 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1367(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t404_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t197_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t404_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(250);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t404 * tmp;
		tmp = (SuppressMessageAttribute_t404 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t404_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1368(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1369(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t198_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t403 * tmp;
		tmp = (GeneratedCodeAttribute_t403 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1367(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t404_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t198_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t404_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(250);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t404 * tmp;
		tmp = (SuppressMessageAttribute_t404 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t404_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1368(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1369(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t404_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t198_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t404_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(250);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t404 * tmp;
		tmp = (SuppressMessageAttribute_t404 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t404_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1368(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1369(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var;
void ReflectionUtils_t215_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t403 * tmp;
		tmp = (GeneratedCodeAttribute_t403 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t403_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1367(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t390_il2cpp_TypeInfo_var;
void ReflectionUtils_t215_CustomAttributesCacheGenerator_ReflectionUtils_t215_ReflectionUtils_GetConstructorInfo_m1010_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t390 * tmp;
		tmp = (ParamArrayAttribute_t390 *)il2cpp_codegen_object_new (ParamArrayAttribute_t390_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1342(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t390_il2cpp_TypeInfo_var;
void ReflectionUtils_t215_CustomAttributesCacheGenerator_ReflectionUtils_t215_ReflectionUtils_GetContructor_m1015_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t390 * tmp;
		tmp = (ParamArrayAttribute_t390 *)il2cpp_codegen_object_new (ParamArrayAttribute_t390_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1342(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t390_il2cpp_TypeInfo_var;
void ReflectionUtils_t215_CustomAttributesCacheGenerator_ReflectionUtils_t215_ReflectionUtils_GetConstructorByReflection_m1017_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t390 * tmp;
		tmp = (ParamArrayAttribute_t390 *)il2cpp_codegen_object_new (ParamArrayAttribute_t390_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1342(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t393_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t405_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t393 * tmp;
		tmp = (DefaultMemberAttribute_t393 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t393_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1346(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t390_il2cpp_TypeInfo_var;
void ConstructorDelegate_t208_CustomAttributesCacheGenerator_ConstructorDelegate_t208_ConstructorDelegate_Invoke_m995_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t390 * tmp;
		tmp = (ParamArrayAttribute_t390 *)il2cpp_codegen_object_new (ParamArrayAttribute_t390_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1342(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t390_il2cpp_TypeInfo_var;
void ConstructorDelegate_t208_CustomAttributesCacheGenerator_ConstructorDelegate_t208_ConstructorDelegate_BeginInvoke_m996_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t390 * tmp;
		tmp = (ParamArrayAttribute_t390 *)il2cpp_codegen_object_new (ParamArrayAttribute_t390_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1342(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t210_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t211_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t212_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t213_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t214_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern TypeInfo* AttributeUsageAttribute_t407_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t217_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t407 * tmp;
		tmp = (AttributeUsageAttribute_t407 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t407_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1394(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t407_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t222_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t407 * tmp;
		tmp = (AttributeUsageAttribute_t407 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t407_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1394(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m1395(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t407_il2cpp_TypeInfo_var;
void RequireComponent_t223_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t407 * tmp;
		tmp = (AttributeUsageAttribute_t407 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t407_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1394(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1396(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t407_il2cpp_TypeInfo_var;
void WritableAttribute_t227_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t407 * tmp;
		tmp = (AttributeUsageAttribute_t407 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t407_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1394(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1396(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t407_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t228_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t407 * tmp;
		tmp = (AttributeUsageAttribute_t407 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t407_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1394(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Achievement_t240_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Achievement_t240_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Achievement_t240_CustomAttributesCacheGenerator_Achievement_get_id_m1070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Achievement_t240_CustomAttributesCacheGenerator_Achievement_set_id_m1071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Achievement_t240_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1072(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Achievement_t240_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void AchievementDescription_t241_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void AchievementDescription_t241_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void AchievementDescription_t241_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Score_t242_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Score_t242_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Score_t242_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Score_t242_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Score_t242_CustomAttributesCacheGenerator_Score_get_value_m1092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Score_t242_CustomAttributesCacheGenerator_Score_set_value_m1093(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Leaderboard_t35_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Leaderboard_t35_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Leaderboard_t35_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Leaderboard_t35_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_get_id_m1101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_set_id_m1102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1104(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_get_range_m1105(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_set_range_m1106(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t391 * tmp;
		tmp = (CompilerGeneratedAttribute_t391 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1344(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t397_il2cpp_TypeInfo_var;
void StackTraceUtility_t254_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t397 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t397 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t397_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1352(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t397_il2cpp_TypeInfo_var;
void StackTraceUtility_t254_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t397 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t397 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t397_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1352(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t397_il2cpp_TypeInfo_var;
void StackTraceUtility_t254_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t397 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t397 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t397_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1352(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t407_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t256_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t407 * tmp;
		tmp = (AttributeUsageAttribute_t407 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t407_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1394(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1396(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var;
void ArgumentCache_t262_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(252);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t275 * tmp;
		tmp = (FormerlySerializedAsAttribute_t275 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1169(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var;
void PersistentCall_t265_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(252);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t275 * tmp;
		tmp = (FormerlySerializedAsAttribute_t275 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1169(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var;
void PersistentCall_t265_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(252);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t275 * tmp;
		tmp = (FormerlySerializedAsAttribute_t275 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1169(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t275 * tmp;
		tmp = (FormerlySerializedAsAttribute_t275 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1169(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void PersistentCallGroup_t267_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(252);
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t275 * tmp;
		tmp = (FormerlySerializedAsAttribute_t275 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1169(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void UnityEventBase_t270_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(252);
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t275 * tmp;
		tmp = (FormerlySerializedAsAttribute_t275 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t275_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1169(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t105_il2cpp_TypeInfo_var;
void UnityEventBase_t270_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t105 * tmp;
		tmp = (SerializeField_t105 *)il2cpp_codegen_object_new (SerializeField_t105_il2cpp_TypeInfo_var);
		SerializeField__ctor_m503(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t224_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t272_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(253);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t224 * tmp;
		tmp = (AddComponentMenu_t224 *)il2cpp_codegen_object_new (AddComponentMenu_t224_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m1032(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t407_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t273_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t407 * tmp;
		tmp = (AttributeUsageAttribute_t407 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t407_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1394(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t407_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t274_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t407 * tmp;
		tmp = (AttributeUsageAttribute_t407 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t407_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1394(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t407_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t275_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t407 * tmp;
		tmp = (AttributeUsageAttribute_t407 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t407_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1394(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1396(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m1395(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t407_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t277_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t407 * tmp;
		tmp = (AttributeUsageAttribute_t407 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t407_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1394(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[441] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t10_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m20,
	AssetBundleCreateRequest_t10_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m21,
	AssetBundle_t12_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m25,
	AssetBundle_t12_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m26,
	AssetBundle_t12_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m27,
	LayerMask_t16_CustomAttributesCacheGenerator_LayerMask_LayerToName_m30,
	LayerMask_t16_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m31,
	LayerMask_t16_CustomAttributesCacheGenerator_LayerMask_t16_LayerMask_GetMask_m32_Arg0_ParameterInfo,
	SystemInfo_t18_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m35,
	Coroutine_t23_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m40,
	ScriptableObject_t24_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m43,
	ScriptableObject_t24_CustomAttributesCacheGenerator_ScriptableObject_t24_ScriptableObject_Internal_CreateScriptableObject_m43_Arg0_ParameterInfo,
	ScriptableObject_t24_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m44,
	ScriptableObject_t24_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m46,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m51,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m52,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m53,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m54,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m55,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m56,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m57,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m58,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m59,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m60,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m61,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m62,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m63,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m64,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m65,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m66,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m67,
	GameCenterPlatform_t34_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m71,
	GcLeaderboard_t36_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m115,
	GcLeaderboard_t36_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m116,
	GcLeaderboard_t36_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m117,
	GcLeaderboard_t36_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m118,
	Screen_t38_CustomAttributesCacheGenerator_Screen_get_width_m139,
	Screen_t38_CustomAttributesCacheGenerator_Screen_get_height_m140,
	Texture2D_t40_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m143,
	Texture2D_t40_CustomAttributesCacheGenerator_Texture2D_t40_Texture2D_Internal_Create_m143_Arg0_ParameterInfo,
	GUILayer_t45_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m145,
	Gradient_t49_CustomAttributesCacheGenerator_Gradient_Init_m149,
	Gradient_t49_CustomAttributesCacheGenerator_Gradient_Cleanup_m150,
	GUI_t59_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t59_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t59_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m158,
	GUI_t59_CustomAttributesCacheGenerator_GUI_set_changed_m161,
	GUILayoutUtility_t66_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m174,
	GUILayoutUtility_t66_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m176,
	GUIUtility_t75_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m208,
	GUIUtility_t75_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m210,
	GUIUtility_t75_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m214,
	GUISettings_t76_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t76_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t76_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t76_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t76_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t57_CustomAttributesCacheGenerator,
	GUISkin_t57_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t57_CustomAttributesCacheGenerator_m_box,
	GUISkin_t57_CustomAttributesCacheGenerator_m_button,
	GUISkin_t57_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t57_CustomAttributesCacheGenerator_m_label,
	GUISkin_t57_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t57_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t57_CustomAttributesCacheGenerator_m_window,
	GUISkin_t57_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t57_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t57_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t57_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t57_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t57_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t57_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t57_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t57_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t57_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t57_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t57_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t57_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t57_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t57_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t81_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t81_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t81_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t82_CustomAttributesCacheGenerator_GUIStyleState_Init_m281,
	GUIStyleState_t82_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m282,
	GUIStyleState_t82_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m283,
	GUIStyleState_t82_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m284,
	RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_Init_m290,
	RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_Cleanup_m291,
	RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_get_left_m292,
	RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_set_left_m293,
	RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_get_right_m294,
	RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_set_right_m295,
	RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_get_top_m296,
	RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_set_top_m297,
	RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_get_bottom_m298,
	RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_set_bottom_m299,
	RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m300,
	RectOffset_t69_CustomAttributesCacheGenerator_RectOffset_get_vertical_m301,
	GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_Init_m306,
	GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m307,
	GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_get_name_m308,
	GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_set_name_m309,
	GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m311,
	GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m314,
	GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m315,
	GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m316,
	GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m317,
	GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m318,
	GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m319,
	GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m320,
	GUIStyle_t65_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m321,
	TouchScreenKeyboard_t84_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m324,
	Event_t85_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t85_CustomAttributesCacheGenerator_Event_Init_m327,
	Event_t85_CustomAttributesCacheGenerator_Event_Cleanup_m329,
	Event_t85_CustomAttributesCacheGenerator_Event_get_type_m330,
	Event_t85_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m332,
	Event_t85_CustomAttributesCacheGenerator_Event_get_modifiers_m333,
	Event_t85_CustomAttributesCacheGenerator_Event_get_character_m334,
	Event_t85_CustomAttributesCacheGenerator_Event_get_commandName_m335,
	Event_t85_CustomAttributesCacheGenerator_Event_get_keyCode_m336,
	Event_t85_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m338,
	EventModifiers_t89_CustomAttributesCacheGenerator,
	Vector2_t52_CustomAttributesCacheGenerator,
	Vector3_t4_CustomAttributesCacheGenerator,
	Color_t47_CustomAttributesCacheGenerator,
	Color32_t90_CustomAttributesCacheGenerator,
	Quaternion_t91_CustomAttributesCacheGenerator,
	Matrix4x4_t92_CustomAttributesCacheGenerator,
	Matrix4x4_t92_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m406,
	Matrix4x4_t92_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m408,
	Matrix4x4_t92_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m410,
	Matrix4x4_t92_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m413,
	Matrix4x4_t92_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m426,
	Matrix4x4_t92_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m429,
	Matrix4x4_t92_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m430,
	Bounds_t93_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m455,
	Bounds_t93_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m458,
	Bounds_t93_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m461,
	Bounds_t93_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m465,
	Vector4_t94_CustomAttributesCacheGenerator,
	Resources_t102_CustomAttributesCacheGenerator_Resources_Load_m501,
	SerializePrivateVariables_t103_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t106_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t106_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m506,
	SphericalHarmonicsL2_t106_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m509,
	SphericalHarmonicsL2_t106_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m512,
	WWW_t107_CustomAttributesCacheGenerator_WWW_DestroyWWW_m525,
	WWW_t107_CustomAttributesCacheGenerator_WWW_InitWWW_m526,
	WWW_t107_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m528,
	WWW_t107_CustomAttributesCacheGenerator_WWW_get_bytes_m532,
	WWW_t107_CustomAttributesCacheGenerator_WWW_get_error_m533,
	WWW_t107_CustomAttributesCacheGenerator_WWW_get_isDone_m534,
	WWWForm_t111_CustomAttributesCacheGenerator_WWWForm_AddField_m538,
	WWWForm_t111_CustomAttributesCacheGenerator_WWWForm_t111_WWWForm_AddField_m539_Arg2_ParameterInfo,
	WWWTranscoder_t112_CustomAttributesCacheGenerator_WWWTranscoder_t112_WWWTranscoder_QPEncode_m546_Arg1_ParameterInfo,
	WWWTranscoder_t112_CustomAttributesCacheGenerator_WWWTranscoder_t112_WWWTranscoder_SevenBitClean_m549_Arg1_ParameterInfo,
	CacheIndex_t113_CustomAttributesCacheGenerator,
	UnityString_t114_CustomAttributesCacheGenerator_UnityString_t114_UnityString_Format_m551_Arg1_ParameterInfo,
	AsyncOperation_t11_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m553,
	Camera_t117_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m565,
	Camera_t117_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m566,
	Camera_t117_CustomAttributesCacheGenerator_Camera_get_cullingMask_m567,
	Camera_t117_CustomAttributesCacheGenerator_Camera_get_eventMask_m568,
	Camera_t117_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m569,
	Camera_t117_CustomAttributesCacheGenerator_Camera_get_targetTexture_m571,
	Camera_t117_CustomAttributesCacheGenerator_Camera_get_clearFlags_m572,
	Camera_t117_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m574,
	Camera_t117_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m575,
	Camera_t117_CustomAttributesCacheGenerator_Camera_GetAllCameras_m576,
	Camera_t117_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m581,
	Camera_t117_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m583,
	CameraCallback_t118_CustomAttributesCacheGenerator,
	Debug_t119_CustomAttributesCacheGenerator_Debug_Internal_Log_m584,
	Debug_t119_CustomAttributesCacheGenerator_Debug_t119_Debug_Internal_Log_m584_Arg2_ParameterInfo,
	Display_t122_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m612,
	Display_t122_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m613,
	Display_t122_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m614,
	Display_t122_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m615,
	Display_t122_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m616,
	Display_t122_CustomAttributesCacheGenerator_Display_SetParamsImpl_m617,
	Display_t122_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m618,
	Display_t122_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m619,
	MonoBehaviour_t3_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m621,
	Input_t6_CustomAttributesCacheGenerator_Input_GetMouseButton_m623,
	Input_t6_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m624,
	Input_t6_CustomAttributesCacheGenerator_Input_get_mousePosition_m625,
	Input_t6_CustomAttributesCacheGenerator_Input_get_acceleration_m7,
	Object_t14_CustomAttributesCacheGenerator_Object_get_name_m627,
	Object_t14_CustomAttributesCacheGenerator_Object_ToString_m18,
	Component_t5_CustomAttributesCacheGenerator_Component_get_gameObject_m636,
	Component_t5_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m637,
	Component_t5_CustomAttributesCacheGenerator_Component_GetComponent_m1351,
	GameObject_t123_CustomAttributesCacheGenerator_GameObject_SendMessage_m638,
	GameObject_t123_CustomAttributesCacheGenerator_GameObject_t123_GameObject_SendMessage_m638_Arg1_ParameterInfo,
	GameObject_t123_CustomAttributesCacheGenerator_GameObject_t123_GameObject_SendMessage_m638_Arg2_ParameterInfo,
	Transform_t100_CustomAttributesCacheGenerator_Transform_get_childCount_m642,
	Transform_t100_CustomAttributesCacheGenerator_Transform_GetChild_m644,
	Time_t125_CustomAttributesCacheGenerator_Time_get_deltaTime_m10,
	Random_t126_CustomAttributesCacheGenerator_Random_RandomRangeInt_m646,
	PlayerPrefs_t127_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m648,
	PlayerPrefs_t127_CustomAttributesCacheGenerator_PlayerPrefs_t127_PlayerPrefs_GetString_m648_Arg1_ParameterInfo,
	PlayerPrefs_t127_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m649,
	Rigidbody_t1_CustomAttributesCacheGenerator_Rigidbody_AddForce_m12,
	Rigidbody_t1_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForce_m666,
	AnimationEvent_t139_CustomAttributesCacheGenerator_AnimationEvent_t139____data_PropertyInfo,
	AnimationCurve_t143_CustomAttributesCacheGenerator,
	AnimationCurve_t143_CustomAttributesCacheGenerator_AnimationCurve_t143_AnimationCurve__ctor_m707_Arg0_ParameterInfo,
	AnimationCurve_t143_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m709,
	AnimationCurve_t143_CustomAttributesCacheGenerator_AnimationCurve_Init_m711,
	AnimatorStateInfo_t140_CustomAttributesCacheGenerator_AnimatorStateInfo_t140____nameHash_PropertyInfo,
	Animator_t146_CustomAttributesCacheGenerator_Animator_StringToHash_m730,
	CharacterInfo_t153_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t153_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t153_CustomAttributesCacheGenerator_width,
	CharacterInfo_t153_CustomAttributesCacheGenerator_flipped,
	Font_t78_CustomAttributesCacheGenerator_Font_get_dynamic_m756,
	FontTextureRebuildCallback_t154_CustomAttributesCacheGenerator,
	TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_Init_m760,
	TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m761,
	TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m764,
	TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m765,
	TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m766,
	TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m767,
	TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m768,
	TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m769,
	TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m771,
	TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m772,
	TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m773,
	TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m774,
	TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m775,
	TextGenerator_t161_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m776,
	Request_t166_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t166_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t166_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t166_CustomAttributesCacheGenerator_Request_get_sourceId_m797,
	Request_t166_CustomAttributesCacheGenerator_Request_get_appId_m798,
	Request_t166_CustomAttributesCacheGenerator_Request_get_domain_m799,
	Response_t168_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t168_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t168_CustomAttributesCacheGenerator_Response_get_success_m808,
	Response_t168_CustomAttributesCacheGenerator_Response_set_success_m809,
	Response_t168_CustomAttributesCacheGenerator_Response_get_extendedInfo_m810,
	Response_t168_CustomAttributesCacheGenerator_Response_set_extendedInfo_m811,
	CreateMatchRequest_t171_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t171_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t171_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t171_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t171_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m816,
	CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m817,
	CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m818,
	CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m819,
	CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m820,
	CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m821,
	CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m822,
	CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m823,
	CreateMatchRequest_t171_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m824,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m827,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m828,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m829,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m830,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m831,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m832,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m833,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m834,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m835,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m836,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m837,
	CreateMatchResponse_t172_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m838,
	JoinMatchRequest_t173_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t173_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t173_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m842,
	JoinMatchRequest_t173_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m843,
	JoinMatchRequest_t173_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m844,
	JoinMatchRequest_t173_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m845,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m848,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m849,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m850,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m851,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m852,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m853,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m854,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m855,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m856,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m857,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m858,
	JoinMatchResponse_t174_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m859,
	DestroyMatchRequest_t175_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t175_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m863,
	DestroyMatchRequest_t175_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m864,
	DropConnectionRequest_t176_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t176_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t176_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m867,
	DropConnectionRequest_t176_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m868,
	DropConnectionRequest_t176_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m869,
	DropConnectionRequest_t176_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m870,
	ListMatchRequest_t177_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t177_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t177_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t177_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t177_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m873,
	ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m874,
	ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m875,
	ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m876,
	ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m877,
	ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m878,
	ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m879,
	ListMatchRequest_t177_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m880,
	MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m883,
	MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m884,
	MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m885,
	MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m886,
	MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m887,
	MatchDirectConnectInfo_t178_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m888,
	MatchDesc_t180_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t180_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t180_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t180_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t180_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t180_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t180_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t180_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t180_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m892,
	MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m893,
	MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_name_m894,
	MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_set_name_m895,
	MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m896,
	MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m897,
	MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m898,
	MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m899,
	MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m900,
	MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m901,
	MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m902,
	MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m903,
	MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m904,
	MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m905,
	MatchDesc_t180_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m906,
	ListMatchResponse_t182_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t182_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m910,
	ListMatchResponse_t182_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m911,
	AppID_t183_CustomAttributesCacheGenerator,
	SourceID_t184_CustomAttributesCacheGenerator,
	NetworkID_t185_CustomAttributesCacheGenerator,
	NodeID_t186_CustomAttributesCacheGenerator,
	NetworkMatch_t192_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1356,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t402_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t402_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1363,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t402_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1364,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t402_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1366,
	JsonArray_t193_CustomAttributesCacheGenerator,
	JsonObject_t196_CustomAttributesCacheGenerator,
	SimpleJson_t199_CustomAttributesCacheGenerator,
	SimpleJson_t199_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m955,
	SimpleJson_t199_CustomAttributesCacheGenerator_SimpleJson_NextToken_m967,
	SimpleJson_t199_CustomAttributesCacheGenerator_SimpleJson_t199____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t197_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t197_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1370,
	PocoJsonSerializerStrategy_t198_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t198_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m984,
	PocoJsonSerializerStrategy_t198_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m985,
	ReflectionUtils_t215_CustomAttributesCacheGenerator,
	ReflectionUtils_t215_CustomAttributesCacheGenerator_ReflectionUtils_t215_ReflectionUtils_GetConstructorInfo_m1010_Arg1_ParameterInfo,
	ReflectionUtils_t215_CustomAttributesCacheGenerator_ReflectionUtils_t215_ReflectionUtils_GetContructor_m1015_Arg1_ParameterInfo,
	ReflectionUtils_t215_CustomAttributesCacheGenerator_ReflectionUtils_t215_ReflectionUtils_GetConstructorByReflection_m1017_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t405_CustomAttributesCacheGenerator,
	ConstructorDelegate_t208_CustomAttributesCacheGenerator_ConstructorDelegate_t208_ConstructorDelegate_Invoke_m995_Arg0_ParameterInfo,
	ConstructorDelegate_t208_CustomAttributesCacheGenerator_ConstructorDelegate_t208_ConstructorDelegate_BeginInvoke_m996_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t210_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t211_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t212_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t213_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t214_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t217_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t222_CustomAttributesCacheGenerator,
	RequireComponent_t223_CustomAttributesCacheGenerator,
	WritableAttribute_t227_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t228_CustomAttributesCacheGenerator,
	Achievement_t240_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t240_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t240_CustomAttributesCacheGenerator_Achievement_get_id_m1070,
	Achievement_t240_CustomAttributesCacheGenerator_Achievement_set_id_m1071,
	Achievement_t240_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1072,
	Achievement_t240_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1073,
	AchievementDescription_t241_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t241_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1080,
	AchievementDescription_t241_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1081,
	Score_t242_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t242_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t242_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1090,
	Score_t242_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1091,
	Score_t242_CustomAttributesCacheGenerator_Score_get_value_m1092,
	Score_t242_CustomAttributesCacheGenerator_Score_set_value_m1093,
	Leaderboard_t35_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t35_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t35_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t35_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_get_id_m1101,
	Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_set_id_m1102,
	Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1103,
	Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1104,
	Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_get_range_m1105,
	Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_set_range_m1106,
	Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1107,
	Leaderboard_t35_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1108,
	StackTraceUtility_t254_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1120,
	StackTraceUtility_t254_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1123,
	StackTraceUtility_t254_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1125,
	SharedBetweenAnimatorsAttribute_t256_CustomAttributesCacheGenerator,
	ArgumentCache_t262_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	PersistentCall_t265_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t265_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t267_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t270_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t270_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t272_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t273_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t274_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t275_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t277_CustomAttributesCacheGenerator,
};

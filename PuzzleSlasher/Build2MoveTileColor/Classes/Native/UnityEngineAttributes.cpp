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
extern TypeInfo* InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t16_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t398_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(240);
		RuntimeCompatibilityAttribute_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ExtensionAttribute_t398_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t397 * tmp;
		tmp = (InternalsVisibleToAttribute_t397 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t397 * tmp;
		tmp = (InternalsVisibleToAttribute_t397 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t397 * tmp;
		tmp = (InternalsVisibleToAttribute_t397 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t397 * tmp;
		tmp = (InternalsVisibleToAttribute_t397 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t397 * tmp;
		tmp = (InternalsVisibleToAttribute_t397 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t397 * tmp;
		tmp = (InternalsVisibleToAttribute_t397 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t397 * tmp;
		tmp = (InternalsVisibleToAttribute_t397 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t397 * tmp;
		tmp = (InternalsVisibleToAttribute_t397 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t397 * tmp;
		tmp = (InternalsVisibleToAttribute_t397 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t16 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t16 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t16_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m28(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m29(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t398 * tmp;
		tmp = (ExtensionAttribute_t398 *)il2cpp_codegen_object_new (ExtensionAttribute_t398_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m1359(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t397 * tmp;
		tmp = (InternalsVisibleToAttribute_t397 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t397 * tmp;
		tmp = (InternalsVisibleToAttribute_t397 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t397 * tmp;
		tmp = (InternalsVisibleToAttribute_t397 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t397 * tmp;
		tmp = (InternalsVisibleToAttribute_t397 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t397 * tmp;
		tmp = (InternalsVisibleToAttribute_t397 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t19_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m35(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t19_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m36(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t286_il2cpp_TypeInfo_var;
void AssetBundle_t21_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m40(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t286 * tmp;
		tmp = (TypeInferenceRuleAttribute_t286 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t286_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1189(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t286_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void AssetBundle_t21_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m41(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t286 * tmp;
		tmp = (TypeInferenceRuleAttribute_t286 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t286_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1189(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void AssetBundle_t21_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m42(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void LayerMask_t24_CustomAttributesCacheGenerator_LayerMask_LayerToName_m45(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void LayerMask_t24_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m46(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t399_il2cpp_TypeInfo_var;
void LayerMask_t24_CustomAttributesCacheGenerator_LayerMask_t24_LayerMask_GetMask_m47_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t399 * tmp;
		tmp = (ParamArrayAttribute_t399 *)il2cpp_codegen_object_new (ParamArrayAttribute_t399_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void SystemInfo_t26_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m50(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Coroutine_t31_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m55(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void ScriptableObject_t32_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m58(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t236_il2cpp_TypeInfo_var;
void ScriptableObject_t32_CustomAttributesCacheGenerator_ScriptableObject_t32_ScriptableObject_Internal_CreateScriptableObject_m58_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(245);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t236 * tmp;
		tmp = (WritableAttribute_t236 *)il2cpp_codegen_object_new (WritableAttribute_t236_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1056(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void ScriptableObject_t32_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m59(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void ScriptableObject_t32_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m61(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m66(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m67(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m68(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m69(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m70(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m71(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m72(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m73(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m74(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m75(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m76(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m77(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m78(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m79(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m80(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m81(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m82(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GcLeaderboard_t44_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GcLeaderboard_t44_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GcLeaderboard_t44_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GcLeaderboard_t44_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Renderer_t12_CustomAttributesCacheGenerator_Renderer_get_material_m24(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Screen_t46_CustomAttributesCacheGenerator_Screen_get_width_m154(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Screen_t46_CustomAttributesCacheGenerator_Screen_get_height_m155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Texture2D_t48_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t236_il2cpp_TypeInfo_var;
void Texture2D_t48_CustomAttributesCacheGenerator_Texture2D_t48_Texture2D_Internal_Create_m158_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(245);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t236 * tmp;
		tmp = (WritableAttribute_t236 *)il2cpp_codegen_object_new (WritableAttribute_t236_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1056(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUILayer_t53_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Gradient_t56_CustomAttributesCacheGenerator_Gradient_Init_m164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Gradient_t56_CustomAttributesCacheGenerator_Gradient_Cleanup_m165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void GUI_t66_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void GUI_t66_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void GUI_t66_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUI_t66_CustomAttributesCacheGenerator_GUI_set_changed_m176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUILayoutUtility_t73_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUILayoutUtility_t73_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIUtility_t82_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m223(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIUtility_t82_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIUtility_t82_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISettings_t83_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISettings_t83_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISettings_t83_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISettings_t83_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISettings_t83_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t234_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t234 * tmp;
		tmp = (ExecuteInEditMode_t234 *)il2cpp_codegen_object_new (ExecuteInEditMode_t234_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m1052(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUISkin_t64_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUIContent_t88_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUIContent_t88_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void GUIContent_t88_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyleState_t89_CustomAttributesCacheGenerator_GUIStyleState_Init_m296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyleState_t89_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyleState_t89_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyleState_t89_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m299(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_Init_m305(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_Cleanup_m306(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_get_left_m307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_set_left_m308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_get_right_m309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_set_right_m310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_get_top_m311(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_set_top_m312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_get_bottom_m313(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_set_bottom_m314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_get_vertical_m316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_Init_m321(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m322(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_get_name_m323(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_set_name_m324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m326(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m330(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m332(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m333(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m334(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m335(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t91_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Event_t92_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Event_t92_CustomAttributesCacheGenerator_Event_Init_m342(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Event_t92_CustomAttributesCacheGenerator_Event_Cleanup_m344(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Event_t92_CustomAttributesCacheGenerator_Event_get_type_m345(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Event_t92_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Event_t92_CustomAttributesCacheGenerator_Event_get_modifiers_m348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Event_t92_CustomAttributesCacheGenerator_Event_get_character_m349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Event_t92_CustomAttributesCacheGenerator_Event_get_commandName_m350(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Event_t92_CustomAttributesCacheGenerator_Event_get_keyCode_m351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Event_t92_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t401_il2cpp_TypeInfo_var;
void EventModifiers_t96_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(248);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t401 * tmp;
		tmp = (FlagsAttribute_t401 *)il2cpp_codegen_object_new (FlagsAttribute_t401_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m1363(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t402_il2cpp_TypeInfo_var;
void Vector2_t59_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t402 * tmp;
		tmp = (DefaultMemberAttribute_t402 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t402_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1364(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t402_il2cpp_TypeInfo_var;
void Vector3_t7_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t402 * tmp;
		tmp = (DefaultMemberAttribute_t402 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t402_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1364(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t402_il2cpp_TypeInfo_var;
void Color_t15_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t402 * tmp;
		tmp = (DefaultMemberAttribute_t402 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t402_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1364(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t226_il2cpp_TypeInfo_var;
void Color32_t97_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(250);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t226 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t226 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t226_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m1046(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t402_il2cpp_TypeInfo_var;
void Quaternion_t9_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t402 * tmp;
		tmp = (DefaultMemberAttribute_t402 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t402_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1364(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t402_il2cpp_TypeInfo_var;
void Matrix4x4_t98_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t402 * tmp;
		tmp = (DefaultMemberAttribute_t402 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t402_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1364(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Matrix4x4_t98_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Matrix4x4_t98_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Matrix4x4_t98_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m423(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Matrix4x4_t98_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Matrix4x4_t98_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Matrix4x4_t98_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Matrix4x4_t98_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Bounds_t99_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Bounds_t99_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Bounds_t99_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Bounds_t99_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t402_il2cpp_TypeInfo_var;
void Vector4_t100_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t402 * tmp;
		tmp = (DefaultMemberAttribute_t402 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t402_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1364(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t286_il2cpp_TypeInfo_var;
void Resources_t108_CustomAttributesCacheGenerator_Resources_Load_m513(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		TypeInferenceRuleAttribute_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t286 * tmp;
		tmp = (TypeInferenceRuleAttribute_t286 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t286_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1189(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t403_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t109_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t403 * tmp;
		tmp = (ObsoleteAttribute_t403 *)il2cpp_codegen_object_new (ObsoleteAttribute_t403_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1365(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Shader_t112_CustomAttributesCacheGenerator_Shader_PropertyToID_m516(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Material_t14_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m519(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t402_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t113_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t402 * tmp;
		tmp = (DefaultMemberAttribute_t402 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t402_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1364(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t113_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m522(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t113_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t113_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m528(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void WWW_t114_CustomAttributesCacheGenerator_WWW_DestroyWWW_m541(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void WWW_t114_CustomAttributesCacheGenerator_WWW_InitWWW_m542(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void WWW_t114_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void WWW_t114_CustomAttributesCacheGenerator_WWW_get_bytes_m548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void WWW_t114_CustomAttributesCacheGenerator_WWW_get_error_m549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void WWW_t114_CustomAttributesCacheGenerator_WWW_get_isDone_m550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t283_il2cpp_TypeInfo_var;
void WWWForm_t118_CustomAttributesCacheGenerator_WWWForm_AddField_m554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(252);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t283 * tmp;
		tmp = (ExcludeFromDocsAttribute_t283 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t283_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1187(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t282_il2cpp_TypeInfo_var;
void WWWForm_t118_CustomAttributesCacheGenerator_WWWForm_t118_WWWForm_AddField_m555_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t282 * tmp;
		tmp = (DefaultValueAttribute_t282 *)il2cpp_codegen_object_new (DefaultValueAttribute_t282_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1183(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t282_il2cpp_TypeInfo_var;
void WWWTranscoder_t119_CustomAttributesCacheGenerator_WWWTranscoder_t119_WWWTranscoder_QPEncode_m562_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t282 * tmp;
		tmp = (DefaultValueAttribute_t282 *)il2cpp_codegen_object_new (DefaultValueAttribute_t282_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1183(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t282_il2cpp_TypeInfo_var;
void WWWTranscoder_t119_CustomAttributesCacheGenerator_WWWTranscoder_t119_WWWTranscoder_SevenBitClean_m565_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t282 * tmp;
		tmp = (DefaultValueAttribute_t282 *)il2cpp_codegen_object_new (DefaultValueAttribute_t282_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1183(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t403_il2cpp_TypeInfo_var;
void CacheIndex_t120_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t403 * tmp;
		tmp = (ObsoleteAttribute_t403 *)il2cpp_codegen_object_new (ObsoleteAttribute_t403_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1365(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t399_il2cpp_TypeInfo_var;
void UnityString_t121_CustomAttributesCacheGenerator_UnityString_t121_UnityString_Format_m567_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t399 * tmp;
		tmp = (ParamArrayAttribute_t399 *)il2cpp_codegen_object_new (ParamArrayAttribute_t399_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void AsyncOperation_t20_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Camera_t124_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m581(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Camera_t124_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Camera_t124_CustomAttributesCacheGenerator_Camera_get_cullingMask_m583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Camera_t124_CustomAttributesCacheGenerator_Camera_get_eventMask_m584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Camera_t124_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Camera_t124_CustomAttributesCacheGenerator_Camera_get_targetTexture_m587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Camera_t124_CustomAttributesCacheGenerator_Camera_get_clearFlags_m588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Camera_t124_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Camera_t124_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Camera_t124_CustomAttributesCacheGenerator_Camera_GetAllCameras_m592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Camera_t124_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Camera_t124_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t405_il2cpp_TypeInfo_var;
void CameraCallback_t125_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(253);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t405 * tmp;
		tmp = (EditorBrowsableAttribute_t405 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t405_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1368(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Debug_t126_CustomAttributesCacheGenerator_Debug_Internal_Log_m600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t236_il2cpp_TypeInfo_var;
void Debug_t126_CustomAttributesCacheGenerator_Debug_t126_Debug_Internal_Log_m600_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(245);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t236 * tmp;
		tmp = (WritableAttribute_t236 *)il2cpp_codegen_object_new (WritableAttribute_t236_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1056(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Display_t129_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Display_t129_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Display_t129_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Display_t129_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m630(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Display_t129_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m631(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Display_t129_CustomAttributesCacheGenerator_Display_SetParamsImpl_m632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Display_t129_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m633(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Display_t129_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void MonoBehaviour_t4_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m636(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Input_t13_CustomAttributesCacheGenerator_Input_GetMouseButton_m638(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Input_t13_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m639(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Input_t13_CustomAttributesCacheGenerator_Input_get_mousePosition_m640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Input_t13_CustomAttributesCacheGenerator_Input_get_acceleration_m17(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Object_t10_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m643(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Object_t10_CustomAttributesCacheGenerator_Object_get_name_m644(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Object_t10_CustomAttributesCacheGenerator_Object_ToString_m33(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t286_il2cpp_TypeInfo_var;
void Object_t10_CustomAttributesCacheGenerator_Object_Instantiate_m10(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t286 * tmp;
		tmp = (TypeInferenceRuleAttribute_t286 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t286_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1189(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Component_t11_CustomAttributesCacheGenerator_Component_get_gameObject_m654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Component_t11_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t406_il2cpp_TypeInfo_var;
void Component_t11_CustomAttributesCacheGenerator_Component_GetComponent_m1369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t406 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t406 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t406_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1370(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t406_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_GetComponent_m1371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t406 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t406 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t406_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1370(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_get_tag_m22(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_SendMessage_m657(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t282_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_t1_GameObject_SendMessage_m657_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t282 * tmp;
		tmp = (DefaultValueAttribute_t282 *)il2cpp_codegen_object_new (DefaultValueAttribute_t282_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1183(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t282_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_t1_GameObject_SendMessage_m657_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t282 * tmp;
		tmp = (DefaultValueAttribute_t282 *)il2cpp_codegen_object_new (DefaultValueAttribute_t282_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1183(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Transform_t106_CustomAttributesCacheGenerator_Transform_get_childCount_m661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Transform_t106_CustomAttributesCacheGenerator_Transform_GetChild_m663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Time_t131_CustomAttributesCacheGenerator_Time_get_deltaTime_m18(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Random_t132_CustomAttributesCacheGenerator_Random_RandomRangeInt_m665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void PlayerPrefs_t133_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t282_il2cpp_TypeInfo_var;
void PlayerPrefs_t133_CustomAttributesCacheGenerator_PlayerPrefs_t133_PlayerPrefs_GetString_m667_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t282 * tmp;
		tmp = (DefaultValueAttribute_t282 *)il2cpp_codegen_object_new (DefaultValueAttribute_t282_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1183(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t283_il2cpp_TypeInfo_var;
void PlayerPrefs_t133_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(252);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t283 * tmp;
		tmp = (ExcludeFromDocsAttribute_t283 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t283_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1187(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t283_il2cpp_TypeInfo_var;
void Rigidbody_t5_CustomAttributesCacheGenerator_Rigidbody_AddForce_m20(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(252);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t283 * tmp;
		tmp = (ExcludeFromDocsAttribute_t283 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t283_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1187(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Rigidbody_t5_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForce_m685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t403_il2cpp_TypeInfo_var;
void AnimationEvent_t148_CustomAttributesCacheGenerator_AnimationEvent_t148____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t403 * tmp;
		tmp = (ObsoleteAttribute_t403 *)il2cpp_codegen_object_new (ObsoleteAttribute_t403_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1365(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t402_il2cpp_TypeInfo_var;
void AnimationCurve_t152_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t402 * tmp;
		tmp = (DefaultMemberAttribute_t402 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t402_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1364(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t399_il2cpp_TypeInfo_var;
void AnimationCurve_t152_CustomAttributesCacheGenerator_AnimationCurve_t152_AnimationCurve__ctor_m726_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t399 * tmp;
		tmp = (ParamArrayAttribute_t399 *)il2cpp_codegen_object_new (ParamArrayAttribute_t399_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void AnimationCurve_t152_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void AnimationCurve_t152_CustomAttributesCacheGenerator_AnimationCurve_Init_m730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t403_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t149_CustomAttributesCacheGenerator_AnimatorStateInfo_t149____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t403 * tmp;
		tmp = (ObsoleteAttribute_t403 *)il2cpp_codegen_object_new (ObsoleteAttribute_t403_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1365(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Animator_t155_CustomAttributesCacheGenerator_Animator_StringToHash_m749(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t403_il2cpp_TypeInfo_var;
void CharacterInfo_t162_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t403 * tmp;
		tmp = (ObsoleteAttribute_t403 *)il2cpp_codegen_object_new (ObsoleteAttribute_t403_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1365(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t403_il2cpp_TypeInfo_var;
void CharacterInfo_t162_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t403 * tmp;
		tmp = (ObsoleteAttribute_t403 *)il2cpp_codegen_object_new (ObsoleteAttribute_t403_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1365(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t403_il2cpp_TypeInfo_var;
void CharacterInfo_t162_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t403 * tmp;
		tmp = (ObsoleteAttribute_t403 *)il2cpp_codegen_object_new (ObsoleteAttribute_t403_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1365(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t403_il2cpp_TypeInfo_var;
void CharacterInfo_t162_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t403 * tmp;
		tmp = (ObsoleteAttribute_t403 *)il2cpp_codegen_object_new (ObsoleteAttribute_t403_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1365(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void Font_t85_CustomAttributesCacheGenerator_Font_get_dynamic_m775(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t405_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t163_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(253);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t405 * tmp;
		tmp = (EditorBrowsableAttribute_t405 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t405_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1368(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_Init_m779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m791(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t225_il2cpp_TypeInfo_var;
void TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t225 * tmp;
		tmp = (WrapperlessIcall_t225 *)il2cpp_codegen_object_new (WrapperlessIcall_t225_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1045(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Request_t175_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Request_t175_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Request_t175_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Request_t175_CustomAttributesCacheGenerator_Request_get_sourceId_m816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Request_t175_CustomAttributesCacheGenerator_Request_get_appId_m817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Request_t175_CustomAttributesCacheGenerator_Request_get_domain_m818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Response_t177_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Response_t177_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Response_t177_CustomAttributesCacheGenerator_Response_get_success_m827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Response_t177_CustomAttributesCacheGenerator_Response_set_success_m828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Response_t177_CustomAttributesCacheGenerator_Response_get_extendedInfo_m829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Response_t177_CustomAttributesCacheGenerator_Response_set_extendedInfo_m830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchRequest_t180_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchRequest_t180_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchRequest_t180_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchRequest_t180_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchRequest_t180_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m847(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchRequest_t182_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchRequest_t182_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchRequest_t182_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchRequest_t182_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchRequest_t182_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchRequest_t182_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t184_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t184_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t184_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void DropConnectionRequest_t185_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void DropConnectionRequest_t185_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void DropConnectionRequest_t185_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void DropConnectionRequest_t185_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void DropConnectionRequest_t185_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void DropConnectionRequest_t185_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchRequest_t186_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchRequest_t186_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchRequest_t186_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchRequest_t186_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchRequest_t186_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m899(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_name_m913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_set_name_m914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m922(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchResponse_t191_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchResponse_t191_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ListMatchResponse_t191_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo* DefaultValueAttribute_t408_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t192_il2cpp_TypeInfo_var;
void AppID_t192_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		AppID_t192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t408 * tmp;
		tmp = (DefaultValueAttribute_t408 *)il2cpp_codegen_object_new (DefaultValueAttribute_t408_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1374(tmp, Box(AppID_t192_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t408_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t193_il2cpp_TypeInfo_var;
void SourceID_t193_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		SourceID_t193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t408 * tmp;
		tmp = (DefaultValueAttribute_t408 *)il2cpp_codegen_object_new (DefaultValueAttribute_t408_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1374(tmp, Box(SourceID_t193_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t408_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t194_il2cpp_TypeInfo_var;
void NetworkID_t194_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		NetworkID_t194_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t408 * tmp;
		tmp = (DefaultValueAttribute_t408 *)il2cpp_codegen_object_new (DefaultValueAttribute_t408_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1374(tmp, Box(NetworkID_t194_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t408_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t195_il2cpp_TypeInfo_var;
void NodeID_t195_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		NodeID_t195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t408 * tmp;
		tmp = (DefaultValueAttribute_t408 *)il2cpp_codegen_object_new (DefaultValueAttribute_t408_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1374(tmp, Box(NodeID_t195_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t409_il2cpp_TypeInfo_var;
void NetworkMatch_t201_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t409 * tmp;
		tmp = (DebuggerHiddenAttribute_t409 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t409_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1376(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t411_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t409_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t411_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t409 * tmp;
		tmp = (DebuggerHiddenAttribute_t409 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t409_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1376(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t409_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t411_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t409 * tmp;
		tmp = (DebuggerHiddenAttribute_t409 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t409_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1376(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t409_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t411_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t409 * tmp;
		tmp = (DebuggerHiddenAttribute_t409 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t409_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1376(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t405_il2cpp_TypeInfo_var;
void JsonArray_t202_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		EditorBrowsableAttribute_t405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(253);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t412 * tmp;
		tmp = (GeneratedCodeAttribute_t412 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1386(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t405 * tmp;
		tmp = (EditorBrowsableAttribute_t405 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t405_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1368(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t405_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t402_il2cpp_TypeInfo_var;
void JsonObject_t205_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(253);
		GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		DefaultMemberAttribute_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t405 * tmp;
		tmp = (EditorBrowsableAttribute_t405 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t405_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1368(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t412 * tmp;
		tmp = (GeneratedCodeAttribute_t412 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1386(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t402 * tmp;
		tmp = (DefaultMemberAttribute_t402 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t402_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1364(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var;
void SimpleJson_t208_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t412 * tmp;
		tmp = (GeneratedCodeAttribute_t412 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1386(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t413_il2cpp_TypeInfo_var;
void SimpleJson_t208_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(258);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t413 * tmp;
		tmp = (SuppressMessageAttribute_t413 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t413_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1387(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1388(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t413_il2cpp_TypeInfo_var;
void SimpleJson_t208_CustomAttributesCacheGenerator_SimpleJson_NextToken_m986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(258);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t413 * tmp;
		tmp = (SuppressMessageAttribute_t413 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t413_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1387(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t405_il2cpp_TypeInfo_var;
void SimpleJson_t208_CustomAttributesCacheGenerator_SimpleJson_t208____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(253);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t405 * tmp;
		tmp = (EditorBrowsableAttribute_t405 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t405_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1368(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t206_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t412 * tmp;
		tmp = (GeneratedCodeAttribute_t412 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1386(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t413_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t206_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(258);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t413 * tmp;
		tmp = (SuppressMessageAttribute_t413 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t413_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1387(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1388(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t207_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t412 * tmp;
		tmp = (GeneratedCodeAttribute_t412 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1386(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t413_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t207_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1003(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(258);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t413 * tmp;
		tmp = (SuppressMessageAttribute_t413 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t413_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1387(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1388(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t413_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t207_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1004(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(258);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t413 * tmp;
		tmp = (SuppressMessageAttribute_t413 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t413_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1387(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1388(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var;
void ReflectionUtils_t224_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t412 * tmp;
		tmp = (GeneratedCodeAttribute_t412 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t412_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1386(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t399_il2cpp_TypeInfo_var;
void ReflectionUtils_t224_CustomAttributesCacheGenerator_ReflectionUtils_t224_ReflectionUtils_GetConstructorInfo_m1029_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t399 * tmp;
		tmp = (ParamArrayAttribute_t399 *)il2cpp_codegen_object_new (ParamArrayAttribute_t399_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t399_il2cpp_TypeInfo_var;
void ReflectionUtils_t224_CustomAttributesCacheGenerator_ReflectionUtils_t224_ReflectionUtils_GetContructor_m1034_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t399 * tmp;
		tmp = (ParamArrayAttribute_t399 *)il2cpp_codegen_object_new (ParamArrayAttribute_t399_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t399_il2cpp_TypeInfo_var;
void ReflectionUtils_t224_CustomAttributesCacheGenerator_ReflectionUtils_t224_ReflectionUtils_GetConstructorByReflection_m1036_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t399 * tmp;
		tmp = (ParamArrayAttribute_t399 *)il2cpp_codegen_object_new (ParamArrayAttribute_t399_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t402_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t414_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t402 * tmp;
		tmp = (DefaultMemberAttribute_t402 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t402_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1364(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t399_il2cpp_TypeInfo_var;
void ConstructorDelegate_t217_CustomAttributesCacheGenerator_ConstructorDelegate_t217_ConstructorDelegate_Invoke_m1014_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t399 * tmp;
		tmp = (ParamArrayAttribute_t399 *)il2cpp_codegen_object_new (ParamArrayAttribute_t399_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t399_il2cpp_TypeInfo_var;
void ConstructorDelegate_t217_CustomAttributesCacheGenerator_ConstructorDelegate_t217_ConstructorDelegate_BeginInvoke_m1015_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t399 * tmp;
		tmp = (ParamArrayAttribute_t399 *)il2cpp_codegen_object_new (ParamArrayAttribute_t399_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1360(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t219_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t220_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t221_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t222_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t223_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern TypeInfo* AttributeUsageAttribute_t416_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t226_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t416 * tmp;
		tmp = (AttributeUsageAttribute_t416 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t416_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1413(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t416_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t231_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t416 * tmp;
		tmp = (AttributeUsageAttribute_t416 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t416_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1413(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m1414(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t416_il2cpp_TypeInfo_var;
void RequireComponent_t232_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t416 * tmp;
		tmp = (AttributeUsageAttribute_t416 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t416_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1413(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1415(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t416_il2cpp_TypeInfo_var;
void WritableAttribute_t236_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t416 * tmp;
		tmp = (AttributeUsageAttribute_t416 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t416_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1413(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1415(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t416_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t237_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t416 * tmp;
		tmp = (AttributeUsageAttribute_t416 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t416_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1413(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Achievement_t249_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Achievement_t249_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Achievement_t249_CustomAttributesCacheGenerator_Achievement_get_id_m1089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Achievement_t249_CustomAttributesCacheGenerator_Achievement_set_id_m1090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Achievement_t249_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Achievement_t249_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void AchievementDescription_t250_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void AchievementDescription_t250_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1099(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void AchievementDescription_t250_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Score_t251_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Score_t251_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Score_t251_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1109(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Score_t251_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Score_t251_CustomAttributesCacheGenerator_Score_get_value_m1111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Score_t251_CustomAttributesCacheGenerator_Score_set_value_m1112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Leaderboard_t43_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Leaderboard_t43_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Leaderboard_t43_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Leaderboard_t43_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_get_id_m1120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_set_id_m1121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1122(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_get_range_m1124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_set_range_m1125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t400 * tmp;
		tmp = (CompilerGeneratedAttribute_t400 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t406_il2cpp_TypeInfo_var;
void StackTraceUtility_t263_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t406 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t406 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t406_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1370(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t406_il2cpp_TypeInfo_var;
void StackTraceUtility_t263_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t406 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t406 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t406_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1370(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t406_il2cpp_TypeInfo_var;
void StackTraceUtility_t263_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t406 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t406 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t406_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1370(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t416_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t265_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t416 * tmp;
		tmp = (AttributeUsageAttribute_t416 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t416_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1413(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1415(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void ArgumentCache_t271_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t284 * tmp;
		tmp = (FormerlySerializedAsAttribute_t284 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1188(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void PersistentCall_t274_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t284 * tmp;
		tmp = (FormerlySerializedAsAttribute_t284 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1188(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var;
void PersistentCall_t274_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t284 * tmp;
		tmp = (FormerlySerializedAsAttribute_t284 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1188(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t284 * tmp;
		tmp = (FormerlySerializedAsAttribute_t284 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1188(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var;
void PersistentCallGroup_t276_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t284 * tmp;
		tmp = (FormerlySerializedAsAttribute_t284 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1188(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void UnityEventBase_t279_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t284 * tmp;
		tmp = (FormerlySerializedAsAttribute_t284 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t284_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1188(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t111_il2cpp_TypeInfo_var;
void UnityEventBase_t279_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t111 * tmp;
		tmp = (SerializeField_t111 *)il2cpp_codegen_object_new (SerializeField_t111_il2cpp_TypeInfo_var);
		SerializeField__ctor_m515(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t233_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t281_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(261);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t233 * tmp;
		tmp = (AddComponentMenu_t233 *)il2cpp_codegen_object_new (AddComponentMenu_t233_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m1051(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t416_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t282_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t416 * tmp;
		tmp = (AttributeUsageAttribute_t416 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t416_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1413(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t416_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t283_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t416 * tmp;
		tmp = (AttributeUsageAttribute_t416 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t416_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1413(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t416_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t284_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t416 * tmp;
		tmp = (AttributeUsageAttribute_t416 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t416_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1413(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1415(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m1414(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t416_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t286_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t416 * tmp;
		tmp = (AttributeUsageAttribute_t416 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t416_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1413(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[449] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t19_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m35,
	AssetBundleCreateRequest_t19_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m36,
	AssetBundle_t21_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m40,
	AssetBundle_t21_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m41,
	AssetBundle_t21_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m42,
	LayerMask_t24_CustomAttributesCacheGenerator_LayerMask_LayerToName_m45,
	LayerMask_t24_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m46,
	LayerMask_t24_CustomAttributesCacheGenerator_LayerMask_t24_LayerMask_GetMask_m47_Arg0_ParameterInfo,
	SystemInfo_t26_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m50,
	Coroutine_t31_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m55,
	ScriptableObject_t32_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m58,
	ScriptableObject_t32_CustomAttributesCacheGenerator_ScriptableObject_t32_ScriptableObject_Internal_CreateScriptableObject_m58_Arg0_ParameterInfo,
	ScriptableObject_t32_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m59,
	ScriptableObject_t32_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m61,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m66,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m67,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m68,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m69,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m70,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m71,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m72,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m73,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m74,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m75,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m76,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m77,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m78,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m79,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m80,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m81,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m82,
	GameCenterPlatform_t42_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m86,
	GcLeaderboard_t44_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m130,
	GcLeaderboard_t44_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m131,
	GcLeaderboard_t44_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m132,
	GcLeaderboard_t44_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m133,
	Renderer_t12_CustomAttributesCacheGenerator_Renderer_get_material_m24,
	Screen_t46_CustomAttributesCacheGenerator_Screen_get_width_m154,
	Screen_t46_CustomAttributesCacheGenerator_Screen_get_height_m155,
	Texture2D_t48_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m158,
	Texture2D_t48_CustomAttributesCacheGenerator_Texture2D_t48_Texture2D_Internal_Create_m158_Arg0_ParameterInfo,
	GUILayer_t53_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m160,
	Gradient_t56_CustomAttributesCacheGenerator_Gradient_Init_m164,
	Gradient_t56_CustomAttributesCacheGenerator_Gradient_Cleanup_m165,
	GUI_t66_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t66_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t66_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m173,
	GUI_t66_CustomAttributesCacheGenerator_GUI_set_changed_m176,
	GUILayoutUtility_t73_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m189,
	GUILayoutUtility_t73_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m191,
	GUIUtility_t82_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m223,
	GUIUtility_t82_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m225,
	GUIUtility_t82_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m229,
	GUISettings_t83_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t83_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t83_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t83_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t83_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t64_CustomAttributesCacheGenerator,
	GUISkin_t64_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t64_CustomAttributesCacheGenerator_m_box,
	GUISkin_t64_CustomAttributesCacheGenerator_m_button,
	GUISkin_t64_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t64_CustomAttributesCacheGenerator_m_label,
	GUISkin_t64_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t64_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t64_CustomAttributesCacheGenerator_m_window,
	GUISkin_t64_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t64_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t64_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t64_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t64_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t64_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t64_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t64_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t64_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t64_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t64_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t64_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t64_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t64_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t64_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t88_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t88_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t88_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t89_CustomAttributesCacheGenerator_GUIStyleState_Init_m296,
	GUIStyleState_t89_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m297,
	GUIStyleState_t89_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m298,
	GUIStyleState_t89_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m299,
	RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_Init_m305,
	RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_Cleanup_m306,
	RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_get_left_m307,
	RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_set_left_m308,
	RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_get_right_m309,
	RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_set_right_m310,
	RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_get_top_m311,
	RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_set_top_m312,
	RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_get_bottom_m313,
	RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_set_bottom_m314,
	RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m315,
	RectOffset_t76_CustomAttributesCacheGenerator_RectOffset_get_vertical_m316,
	GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_Init_m321,
	GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m322,
	GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_get_name_m323,
	GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_set_name_m324,
	GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m326,
	GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m329,
	GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m330,
	GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m331,
	GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m332,
	GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m333,
	GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m334,
	GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m335,
	GUIStyle_t72_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m336,
	TouchScreenKeyboard_t91_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m339,
	Event_t92_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t92_CustomAttributesCacheGenerator_Event_Init_m342,
	Event_t92_CustomAttributesCacheGenerator_Event_Cleanup_m344,
	Event_t92_CustomAttributesCacheGenerator_Event_get_type_m345,
	Event_t92_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m347,
	Event_t92_CustomAttributesCacheGenerator_Event_get_modifiers_m348,
	Event_t92_CustomAttributesCacheGenerator_Event_get_character_m349,
	Event_t92_CustomAttributesCacheGenerator_Event_get_commandName_m350,
	Event_t92_CustomAttributesCacheGenerator_Event_get_keyCode_m351,
	Event_t92_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m353,
	EventModifiers_t96_CustomAttributesCacheGenerator,
	Vector2_t59_CustomAttributesCacheGenerator,
	Vector3_t7_CustomAttributesCacheGenerator,
	Color_t15_CustomAttributesCacheGenerator,
	Color32_t97_CustomAttributesCacheGenerator,
	Quaternion_t9_CustomAttributesCacheGenerator,
	Matrix4x4_t98_CustomAttributesCacheGenerator,
	Matrix4x4_t98_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m419,
	Matrix4x4_t98_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m421,
	Matrix4x4_t98_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m423,
	Matrix4x4_t98_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m426,
	Matrix4x4_t98_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m439,
	Matrix4x4_t98_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m442,
	Matrix4x4_t98_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m443,
	Bounds_t99_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m468,
	Bounds_t99_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m471,
	Bounds_t99_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m474,
	Bounds_t99_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m478,
	Vector4_t100_CustomAttributesCacheGenerator,
	Resources_t108_CustomAttributesCacheGenerator_Resources_Load_m513,
	SerializePrivateVariables_t109_CustomAttributesCacheGenerator,
	Shader_t112_CustomAttributesCacheGenerator_Shader_PropertyToID_m516,
	Material_t14_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m519,
	SphericalHarmonicsL2_t113_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t113_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m522,
	SphericalHarmonicsL2_t113_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m525,
	SphericalHarmonicsL2_t113_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m528,
	WWW_t114_CustomAttributesCacheGenerator_WWW_DestroyWWW_m541,
	WWW_t114_CustomAttributesCacheGenerator_WWW_InitWWW_m542,
	WWW_t114_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m544,
	WWW_t114_CustomAttributesCacheGenerator_WWW_get_bytes_m548,
	WWW_t114_CustomAttributesCacheGenerator_WWW_get_error_m549,
	WWW_t114_CustomAttributesCacheGenerator_WWW_get_isDone_m550,
	WWWForm_t118_CustomAttributesCacheGenerator_WWWForm_AddField_m554,
	WWWForm_t118_CustomAttributesCacheGenerator_WWWForm_t118_WWWForm_AddField_m555_Arg2_ParameterInfo,
	WWWTranscoder_t119_CustomAttributesCacheGenerator_WWWTranscoder_t119_WWWTranscoder_QPEncode_m562_Arg1_ParameterInfo,
	WWWTranscoder_t119_CustomAttributesCacheGenerator_WWWTranscoder_t119_WWWTranscoder_SevenBitClean_m565_Arg1_ParameterInfo,
	CacheIndex_t120_CustomAttributesCacheGenerator,
	UnityString_t121_CustomAttributesCacheGenerator_UnityString_t121_UnityString_Format_m567_Arg1_ParameterInfo,
	AsyncOperation_t20_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m569,
	Camera_t124_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m581,
	Camera_t124_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m582,
	Camera_t124_CustomAttributesCacheGenerator_Camera_get_cullingMask_m583,
	Camera_t124_CustomAttributesCacheGenerator_Camera_get_eventMask_m584,
	Camera_t124_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m585,
	Camera_t124_CustomAttributesCacheGenerator_Camera_get_targetTexture_m587,
	Camera_t124_CustomAttributesCacheGenerator_Camera_get_clearFlags_m588,
	Camera_t124_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m590,
	Camera_t124_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m591,
	Camera_t124_CustomAttributesCacheGenerator_Camera_GetAllCameras_m592,
	Camera_t124_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m597,
	Camera_t124_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m599,
	CameraCallback_t125_CustomAttributesCacheGenerator,
	Debug_t126_CustomAttributesCacheGenerator_Debug_Internal_Log_m600,
	Debug_t126_CustomAttributesCacheGenerator_Debug_t126_Debug_Internal_Log_m600_Arg2_ParameterInfo,
	Display_t129_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m627,
	Display_t129_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m628,
	Display_t129_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m629,
	Display_t129_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m630,
	Display_t129_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m631,
	Display_t129_CustomAttributesCacheGenerator_Display_SetParamsImpl_m632,
	Display_t129_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m633,
	Display_t129_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m634,
	MonoBehaviour_t4_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m636,
	Input_t13_CustomAttributesCacheGenerator_Input_GetMouseButton_m638,
	Input_t13_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m639,
	Input_t13_CustomAttributesCacheGenerator_Input_get_mousePosition_m640,
	Input_t13_CustomAttributesCacheGenerator_Input_get_acceleration_m17,
	Object_t10_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m643,
	Object_t10_CustomAttributesCacheGenerator_Object_get_name_m644,
	Object_t10_CustomAttributesCacheGenerator_Object_ToString_m33,
	Object_t10_CustomAttributesCacheGenerator_Object_Instantiate_m10,
	Component_t11_CustomAttributesCacheGenerator_Component_get_gameObject_m654,
	Component_t11_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m655,
	Component_t11_CustomAttributesCacheGenerator_Component_GetComponent_m1369,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m656,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_GetComponent_m1371,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_get_tag_m22,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_SendMessage_m657,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_t1_GameObject_SendMessage_m657_Arg1_ParameterInfo,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_t1_GameObject_SendMessage_m657_Arg2_ParameterInfo,
	Transform_t106_CustomAttributesCacheGenerator_Transform_get_childCount_m661,
	Transform_t106_CustomAttributesCacheGenerator_Transform_GetChild_m663,
	Time_t131_CustomAttributesCacheGenerator_Time_get_deltaTime_m18,
	Random_t132_CustomAttributesCacheGenerator_Random_RandomRangeInt_m665,
	PlayerPrefs_t133_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m667,
	PlayerPrefs_t133_CustomAttributesCacheGenerator_PlayerPrefs_t133_PlayerPrefs_GetString_m667_Arg1_ParameterInfo,
	PlayerPrefs_t133_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m668,
	Rigidbody_t5_CustomAttributesCacheGenerator_Rigidbody_AddForce_m20,
	Rigidbody_t5_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_AddForce_m685,
	AnimationEvent_t148_CustomAttributesCacheGenerator_AnimationEvent_t148____data_PropertyInfo,
	AnimationCurve_t152_CustomAttributesCacheGenerator,
	AnimationCurve_t152_CustomAttributesCacheGenerator_AnimationCurve_t152_AnimationCurve__ctor_m726_Arg0_ParameterInfo,
	AnimationCurve_t152_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m728,
	AnimationCurve_t152_CustomAttributesCacheGenerator_AnimationCurve_Init_m730,
	AnimatorStateInfo_t149_CustomAttributesCacheGenerator_AnimatorStateInfo_t149____nameHash_PropertyInfo,
	Animator_t155_CustomAttributesCacheGenerator_Animator_StringToHash_m749,
	CharacterInfo_t162_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t162_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t162_CustomAttributesCacheGenerator_width,
	CharacterInfo_t162_CustomAttributesCacheGenerator_flipped,
	Font_t85_CustomAttributesCacheGenerator_Font_get_dynamic_m775,
	FontTextureRebuildCallback_t163_CustomAttributesCacheGenerator,
	TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_Init_m779,
	TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m780,
	TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m783,
	TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m784,
	TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m785,
	TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m786,
	TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m787,
	TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m788,
	TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m790,
	TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m791,
	TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m792,
	TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m793,
	TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m794,
	TextGenerator_t170_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m795,
	Request_t175_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t175_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t175_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t175_CustomAttributesCacheGenerator_Request_get_sourceId_m816,
	Request_t175_CustomAttributesCacheGenerator_Request_get_appId_m817,
	Request_t175_CustomAttributesCacheGenerator_Request_get_domain_m818,
	Response_t177_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t177_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t177_CustomAttributesCacheGenerator_Response_get_success_m827,
	Response_t177_CustomAttributesCacheGenerator_Response_set_success_m828,
	Response_t177_CustomAttributesCacheGenerator_Response_get_extendedInfo_m829,
	Response_t177_CustomAttributesCacheGenerator_Response_set_extendedInfo_m830,
	CreateMatchRequest_t180_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t180_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t180_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t180_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t180_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m835,
	CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m836,
	CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m837,
	CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m838,
	CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m839,
	CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m840,
	CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m841,
	CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m842,
	CreateMatchRequest_t180_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m843,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m846,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m847,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m848,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m849,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m850,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m851,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m852,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m853,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m854,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m855,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m856,
	CreateMatchResponse_t181_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m857,
	JoinMatchRequest_t182_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t182_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t182_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m861,
	JoinMatchRequest_t182_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m862,
	JoinMatchRequest_t182_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m863,
	JoinMatchRequest_t182_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m864,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m867,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m868,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m869,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m870,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m871,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m872,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m873,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m874,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m875,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m876,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m877,
	JoinMatchResponse_t183_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m878,
	DestroyMatchRequest_t184_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t184_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m882,
	DestroyMatchRequest_t184_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m883,
	DropConnectionRequest_t185_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t185_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t185_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m886,
	DropConnectionRequest_t185_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m887,
	DropConnectionRequest_t185_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m888,
	DropConnectionRequest_t185_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m889,
	ListMatchRequest_t186_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t186_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t186_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t186_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t186_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m892,
	ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m893,
	ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m894,
	ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m895,
	ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m896,
	ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m897,
	ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m898,
	ListMatchRequest_t186_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m899,
	MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m902,
	MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m903,
	MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m904,
	MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m905,
	MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m906,
	MatchDirectConnectInfo_t187_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m907,
	MatchDesc_t189_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t189_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t189_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t189_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t189_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t189_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t189_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t189_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t189_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m911,
	MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m912,
	MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_name_m913,
	MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_set_name_m914,
	MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m915,
	MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m916,
	MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m917,
	MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m918,
	MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m919,
	MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m920,
	MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m921,
	MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m922,
	MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m923,
	MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m924,
	MatchDesc_t189_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m925,
	ListMatchResponse_t191_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t191_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m929,
	ListMatchResponse_t191_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m930,
	AppID_t192_CustomAttributesCacheGenerator,
	SourceID_t193_CustomAttributesCacheGenerator,
	NetworkID_t194_CustomAttributesCacheGenerator,
	NodeID_t195_CustomAttributesCacheGenerator,
	NetworkMatch_t201_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1375,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t411_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t411_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1382,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t411_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1383,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t411_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1385,
	JsonArray_t202_CustomAttributesCacheGenerator,
	JsonObject_t205_CustomAttributesCacheGenerator,
	SimpleJson_t208_CustomAttributesCacheGenerator,
	SimpleJson_t208_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m974,
	SimpleJson_t208_CustomAttributesCacheGenerator_SimpleJson_NextToken_m986,
	SimpleJson_t208_CustomAttributesCacheGenerator_SimpleJson_t208____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t206_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t206_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1389,
	PocoJsonSerializerStrategy_t207_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t207_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1003,
	PocoJsonSerializerStrategy_t207_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1004,
	ReflectionUtils_t224_CustomAttributesCacheGenerator,
	ReflectionUtils_t224_CustomAttributesCacheGenerator_ReflectionUtils_t224_ReflectionUtils_GetConstructorInfo_m1029_Arg1_ParameterInfo,
	ReflectionUtils_t224_CustomAttributesCacheGenerator_ReflectionUtils_t224_ReflectionUtils_GetContructor_m1034_Arg1_ParameterInfo,
	ReflectionUtils_t224_CustomAttributesCacheGenerator_ReflectionUtils_t224_ReflectionUtils_GetConstructorByReflection_m1036_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t414_CustomAttributesCacheGenerator,
	ConstructorDelegate_t217_CustomAttributesCacheGenerator_ConstructorDelegate_t217_ConstructorDelegate_Invoke_m1014_Arg0_ParameterInfo,
	ConstructorDelegate_t217_CustomAttributesCacheGenerator_ConstructorDelegate_t217_ConstructorDelegate_BeginInvoke_m1015_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t219_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t220_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t221_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t222_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t223_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t226_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t231_CustomAttributesCacheGenerator,
	RequireComponent_t232_CustomAttributesCacheGenerator,
	WritableAttribute_t236_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t237_CustomAttributesCacheGenerator,
	Achievement_t249_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t249_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t249_CustomAttributesCacheGenerator_Achievement_get_id_m1089,
	Achievement_t249_CustomAttributesCacheGenerator_Achievement_set_id_m1090,
	Achievement_t249_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1091,
	Achievement_t249_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1092,
	AchievementDescription_t250_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t250_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1099,
	AchievementDescription_t250_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1100,
	Score_t251_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t251_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t251_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1109,
	Score_t251_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1110,
	Score_t251_CustomAttributesCacheGenerator_Score_get_value_m1111,
	Score_t251_CustomAttributesCacheGenerator_Score_set_value_m1112,
	Leaderboard_t43_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t43_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t43_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t43_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_get_id_m1120,
	Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_set_id_m1121,
	Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1122,
	Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1123,
	Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_get_range_m1124,
	Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_set_range_m1125,
	Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1126,
	Leaderboard_t43_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1127,
	StackTraceUtility_t263_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1139,
	StackTraceUtility_t263_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1142,
	StackTraceUtility_t263_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1144,
	SharedBetweenAnimatorsAttribute_t265_CustomAttributesCacheGenerator,
	ArgumentCache_t271_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	PersistentCall_t274_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t274_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t276_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t279_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t279_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t281_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t282_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t283_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t284_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t286_CustomAttributesCacheGenerator,
};

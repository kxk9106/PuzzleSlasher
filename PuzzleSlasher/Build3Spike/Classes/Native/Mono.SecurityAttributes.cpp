﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"
extern TypeInfo* AssemblyCopyrightAttribute_t711_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t715_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t712_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t717_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t708_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t713_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t716_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t17_il2cpp_TypeInfo_var;
extern TypeInfo* InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t721_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t720_il2cpp_TypeInfo_var;
extern TypeInfo* NeutralResourcesLanguageAttribute_t707_il2cpp_TypeInfo_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyCopyrightAttribute_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		AssemblyDescriptionAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		AssemblyProductAttribute_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1117);
		AssemblyTitleAttribute_t717_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		CLSCompliantAttribute_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		AssemblyCompanyAttribute_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1118);
		ComVisibleAttribute_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		RuntimeCompatibilityAttribute_t17_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(240);
		AssemblyKeyFileAttribute_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1126);
		AssemblyDelaySignAttribute_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1125);
		NeutralResourcesLanguageAttribute_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1112);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t711 * tmp;
		tmp = (AssemblyCopyrightAttribute_t711 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t711_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m2592(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t715 * tmp;
		tmp = (AssemblyDescriptionAttribute_t715 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t715_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m2596(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t712 * tmp;
		tmp = (AssemblyProductAttribute_t712 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t712_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m2593(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t717 * tmp;
		tmp = (AssemblyTitleAttribute_t717 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t717_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m2598(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t708 * tmp;
		tmp = (CLSCompliantAttribute_t708 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t708_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2589(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t713 * tmp;
		tmp = (AssemblyCompanyAttribute_t713 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t713_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m2594(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t716 * tmp;
		tmp = (ComVisibleAttribute_t716 *)il2cpp_codegen_object_new (ComVisibleAttribute_t716_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m2597(tmp, false, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t17 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t17 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t17_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m30(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m31(tmp, true, NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t397 * tmp;
		tmp = (InternalsVisibleToAttribute_t397 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t397_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1361(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t721 * tmp;
		tmp = (AssemblyKeyFileAttribute_t721 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t721_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m2602(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t720 * tmp;
		tmp = (AssemblyDelaySignAttribute_t720 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t720_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m2601(tmp, true, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t707 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t707 *)il2cpp_codegen_object_new (NeutralResourcesLanguageAttribute_t707_il2cpp_TypeInfo_var);
		NeutralResourcesLanguageAttribute__ctor_m2588(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t708_il2cpp_TypeInfo_var;
void BigInteger_t751_CustomAttributesCacheGenerator_BigInteger__ctor_m2732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t708 * tmp;
		tmp = (CLSCompliantAttribute_t708 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t708_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2589(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t708_il2cpp_TypeInfo_var;
void BigInteger_t751_CustomAttributesCacheGenerator_BigInteger__ctor_m2734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t708 * tmp;
		tmp = (CLSCompliantAttribute_t708 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t708_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2589(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t708_il2cpp_TypeInfo_var;
void BigInteger_t751_CustomAttributesCacheGenerator_BigInteger__ctor_m2736(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t708 * tmp;
		tmp = (CLSCompliantAttribute_t708 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t708_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2589(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t708_il2cpp_TypeInfo_var;
void BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_SetBit_m2743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t708 * tmp;
		tmp = (CLSCompliantAttribute_t708 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t708_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2589(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t708_il2cpp_TypeInfo_var;
void BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_SetBit_m2744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t708 * tmp;
		tmp = (CLSCompliantAttribute_t708 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t708_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2589(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t708_il2cpp_TypeInfo_var;
void BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_ToString_m2747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t708 * tmp;
		tmp = (CLSCompliantAttribute_t708 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t708_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2589(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t708_il2cpp_TypeInfo_var;
void BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_ToString_m2748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t708 * tmp;
		tmp = (CLSCompliantAttribute_t708 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t708_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2589(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t708_il2cpp_TypeInfo_var;
void BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m2758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t708 * tmp;
		tmp = (CLSCompliantAttribute_t708 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t708_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2589(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t708_il2cpp_TypeInfo_var;
void BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m2762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t708 * tmp;
		tmp = (CLSCompliantAttribute_t708 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t708_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2589(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t708_il2cpp_TypeInfo_var;
void BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_op_Equality_m2768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t708 * tmp;
		tmp = (CLSCompliantAttribute_t708 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t708_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2589(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t708_il2cpp_TypeInfo_var;
void BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m2769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t708 * tmp;
		tmp = (CLSCompliantAttribute_t708 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t708_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2589(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t708_il2cpp_TypeInfo_var;
void ModulusRing_t752_CustomAttributesCacheGenerator_ModulusRing_Pow_m2716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t708 * tmp;
		tmp = (CLSCompliantAttribute_t708 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t708_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2589(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t402_il2cpp_TypeInfo_var;
void ASN1_t671_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		DefaultMemberAttribute__ctor_m1367(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void PKCS12_t695_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void PKCS12_t695_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void PKCS12_t695_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void PKCS12_t695_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void X509Certificate_t556_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void X509Certificate_t556_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void X509Certificate_t556_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t402_il2cpp_TypeInfo_var;
void X509CertificateCollection_t696_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		DefaultMemberAttribute__ctor_m1367(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t401_il2cpp_TypeInfo_var;
void X509ChainStatusFlags_t783_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		FlagsAttribute__ctor_m1366(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t402_il2cpp_TypeInfo_var;
void X509Crl_t673_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		DefaultMemberAttribute__ctor_m1367(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void X509Crl_t673_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t402_il2cpp_TypeInfo_var;
void X509ExtensionCollection_t699_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		DefaultMemberAttribute__ctor_m1367(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void ExtendedKeyUsageExtension_t786_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t401_il2cpp_TypeInfo_var;
void KeyUsages_t788_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		FlagsAttribute__ctor_m1366(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t401_il2cpp_TypeInfo_var;
void CertTypes_t790_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		FlagsAttribute__ctor_m1366(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t402_il2cpp_TypeInfo_var;
void CipherSuiteCollection_t803_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		DefaultMemberAttribute__ctor_m1367(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void HttpsClientStream_t821_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void HttpsClientStream_t821_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void HttpsClientStream_t821_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3196(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void HttpsClientStream_t821_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3197(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void RSASslSignatureDeformatter_t827_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void RSASslSignatureFormatter_t829_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t401_il2cpp_TypeInfo_var;
void SecurityProtocolType_t832_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		FlagsAttribute__ctor_m1366(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t400_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3E_t867_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		CompilerGeneratedAttribute__ctor_m1365(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_Mono_Security_Assembly_AttributeGenerators[39] = 
{
	NULL,
	g_Mono_Security_Assembly_CustomAttributesCacheGenerator,
	BigInteger_t751_CustomAttributesCacheGenerator_BigInteger__ctor_m2732,
	BigInteger_t751_CustomAttributesCacheGenerator_BigInteger__ctor_m2734,
	BigInteger_t751_CustomAttributesCacheGenerator_BigInteger__ctor_m2736,
	BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_SetBit_m2743,
	BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_SetBit_m2744,
	BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_ToString_m2747,
	BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_ToString_m2748,
	BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m2758,
	BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m2762,
	BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_op_Equality_m2768,
	BigInteger_t751_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m2769,
	ModulusRing_t752_CustomAttributesCacheGenerator_ModulusRing_Pow_m2716,
	ASN1_t671_CustomAttributesCacheGenerator,
	PKCS12_t695_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	PKCS12_t695_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	PKCS12_t695_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	PKCS12_t695_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	X509Certificate_t556_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	X509Certificate_t556_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	X509Certificate_t556_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	X509CertificateCollection_t696_CustomAttributesCacheGenerator,
	X509ChainStatusFlags_t783_CustomAttributesCacheGenerator,
	X509Crl_t673_CustomAttributesCacheGenerator,
	X509Crl_t673_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	X509ExtensionCollection_t699_CustomAttributesCacheGenerator,
	ExtendedKeyUsageExtension_t786_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	KeyUsages_t788_CustomAttributesCacheGenerator,
	CertTypes_t790_CustomAttributesCacheGenerator,
	CipherSuiteCollection_t803_CustomAttributesCacheGenerator,
	HttpsClientStream_t821_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	HttpsClientStream_t821_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	HttpsClientStream_t821_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3196,
	HttpsClientStream_t821_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3197,
	RSASslSignatureDeformatter_t827_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	RSASslSignatureFormatter_t829_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	SecurityProtocolType_t832_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t867_CustomAttributesCacheGenerator,
};

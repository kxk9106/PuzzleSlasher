#include "il2cpp-config.h"
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
extern TypeInfo* AssemblyCopyrightAttribute_t701_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t705_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t702_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t707_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t698_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t703_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t706_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t7_il2cpp_TypeInfo_var;
extern TypeInfo* InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t711_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t710_il2cpp_TypeInfo_var;
extern TypeInfo* NeutralResourcesLanguageAttribute_t697_il2cpp_TypeInfo_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyCopyrightAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1095);
		AssemblyDescriptionAttribute_t705_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1099);
		AssemblyProductAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1096);
		AssemblyTitleAttribute_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1101);
		CLSCompliantAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		AssemblyCompanyAttribute_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1097);
		ComVisibleAttribute_t706_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1100);
		RuntimeCompatibilityAttribute_t7_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		AssemblyKeyFileAttribute_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1105);
		AssemblyDelaySignAttribute_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1104);
		NeutralResourcesLanguageAttribute_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t701 * tmp;
		tmp = (AssemblyCopyrightAttribute_t701 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t701_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m2570(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t705 * tmp;
		tmp = (AssemblyDescriptionAttribute_t705 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t705_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m2574(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t702 * tmp;
		tmp = (AssemblyProductAttribute_t702 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t702_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m2571(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t707 * tmp;
		tmp = (AssemblyTitleAttribute_t707 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t707_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m2576(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t698 * tmp;
		tmp = (CLSCompliantAttribute_t698 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t698_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2567(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t703 * tmp;
		tmp = (AssemblyCompanyAttribute_t703 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t703_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m2572(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t706 * tmp;
		tmp = (ComVisibleAttribute_t706 *)il2cpp_codegen_object_new (ComVisibleAttribute_t706_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m2575(tmp, false, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t7 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t7 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t7_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m13(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m14(tmp, true, NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t388 * tmp;
		tmp = (InternalsVisibleToAttribute_t388 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t388_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1340(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t711 * tmp;
		tmp = (AssemblyKeyFileAttribute_t711 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t711_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m2580(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t710 * tmp;
		tmp = (AssemblyDelaySignAttribute_t710 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t710_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m2579(tmp, true, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t697 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t697 *)il2cpp_codegen_object_new (NeutralResourcesLanguageAttribute_t697_il2cpp_TypeInfo_var);
		NeutralResourcesLanguageAttribute__ctor_m2566(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t698_il2cpp_TypeInfo_var;
void BigInteger_t741_CustomAttributesCacheGenerator_BigInteger__ctor_m2710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t698 * tmp;
		tmp = (CLSCompliantAttribute_t698 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t698_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2567(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t698_il2cpp_TypeInfo_var;
void BigInteger_t741_CustomAttributesCacheGenerator_BigInteger__ctor_m2712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t698 * tmp;
		tmp = (CLSCompliantAttribute_t698 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t698_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2567(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t698_il2cpp_TypeInfo_var;
void BigInteger_t741_CustomAttributesCacheGenerator_BigInteger__ctor_m2714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t698 * tmp;
		tmp = (CLSCompliantAttribute_t698 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t698_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2567(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t698_il2cpp_TypeInfo_var;
void BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_SetBit_m2721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t698 * tmp;
		tmp = (CLSCompliantAttribute_t698 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t698_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2567(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t698_il2cpp_TypeInfo_var;
void BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_SetBit_m2722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t698 * tmp;
		tmp = (CLSCompliantAttribute_t698 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t698_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2567(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t698_il2cpp_TypeInfo_var;
void BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_ToString_m2725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t698 * tmp;
		tmp = (CLSCompliantAttribute_t698 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t698_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2567(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t698_il2cpp_TypeInfo_var;
void BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_ToString_m2726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t698 * tmp;
		tmp = (CLSCompliantAttribute_t698 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t698_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2567(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t698_il2cpp_TypeInfo_var;
void BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m2736(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t698 * tmp;
		tmp = (CLSCompliantAttribute_t698 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t698_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2567(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t698_il2cpp_TypeInfo_var;
void BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m2740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t698 * tmp;
		tmp = (CLSCompliantAttribute_t698 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t698_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2567(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t698_il2cpp_TypeInfo_var;
void BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_op_Equality_m2746(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t698 * tmp;
		tmp = (CLSCompliantAttribute_t698 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t698_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2567(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t698_il2cpp_TypeInfo_var;
void BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m2747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t698 * tmp;
		tmp = (CLSCompliantAttribute_t698 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t698_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2567(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t698_il2cpp_TypeInfo_var;
void ModulusRing_t742_CustomAttributesCacheGenerator_ModulusRing_Pow_m2694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t698 * tmp;
		tmp = (CLSCompliantAttribute_t698 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t698_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2567(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t393_il2cpp_TypeInfo_var;
void ASN1_t661_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void PKCS12_t685_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
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
void PKCS12_t685_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
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
void PKCS12_t685_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
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
void PKCS12_t685_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
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
void X509Certificate_t546_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
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
void X509Certificate_t546_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
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
void X509Certificate_t546_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t393_il2cpp_TypeInfo_var;
void X509CertificateCollection_t686_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t392_il2cpp_TypeInfo_var;
void X509ChainStatusFlags_t773_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t393_il2cpp_TypeInfo_var;
void X509Crl_t663_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void X509Crl_t663_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t393_il2cpp_TypeInfo_var;
void X509ExtensionCollection_t689_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void ExtendedKeyUsageExtension_t776_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t392_il2cpp_TypeInfo_var;
void KeyUsages_t778_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t392_il2cpp_TypeInfo_var;
void CertTypes_t780_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t393_il2cpp_TypeInfo_var;
void CipherSuiteCollection_t793_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void HttpsClientStream_t811_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
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
void HttpsClientStream_t811_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
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
void HttpsClientStream_t811_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3174(CustomAttributesCache* cache)
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
void HttpsClientStream_t811_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3175(CustomAttributesCache* cache)
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
void RSASslSignatureDeformatter_t817_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
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
void RSASslSignatureFormatter_t819_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t392_il2cpp_TypeInfo_var;
void SecurityProtocolType_t822_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t391_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3E_t857_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern const CustomAttributesCacheGenerator g_Mono_Security_Assembly_AttributeGenerators[39] = 
{
	NULL,
	g_Mono_Security_Assembly_CustomAttributesCacheGenerator,
	BigInteger_t741_CustomAttributesCacheGenerator_BigInteger__ctor_m2710,
	BigInteger_t741_CustomAttributesCacheGenerator_BigInteger__ctor_m2712,
	BigInteger_t741_CustomAttributesCacheGenerator_BigInteger__ctor_m2714,
	BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_SetBit_m2721,
	BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_SetBit_m2722,
	BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_ToString_m2725,
	BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_ToString_m2726,
	BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m2736,
	BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m2740,
	BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_op_Equality_m2746,
	BigInteger_t741_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m2747,
	ModulusRing_t742_CustomAttributesCacheGenerator_ModulusRing_Pow_m2694,
	ASN1_t661_CustomAttributesCacheGenerator,
	PKCS12_t685_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	PKCS12_t685_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	PKCS12_t685_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	PKCS12_t685_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	X509Certificate_t546_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	X509Certificate_t546_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	X509Certificate_t546_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	X509CertificateCollection_t686_CustomAttributesCacheGenerator,
	X509ChainStatusFlags_t773_CustomAttributesCacheGenerator,
	X509Crl_t663_CustomAttributesCacheGenerator,
	X509Crl_t663_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	X509ExtensionCollection_t689_CustomAttributesCacheGenerator,
	ExtendedKeyUsageExtension_t776_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	KeyUsages_t778_CustomAttributesCacheGenerator,
	CertTypes_t780_CustomAttributesCacheGenerator,
	CipherSuiteCollection_t793_CustomAttributesCacheGenerator,
	HttpsClientStream_t811_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	HttpsClientStream_t811_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	HttpsClientStream_t811_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3174,
	HttpsClientStream_t811_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3175,
	RSASslSignatureDeformatter_t817_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	RSASslSignatureFormatter_t819_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	SecurityProtocolType_t822_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t857_CustomAttributesCacheGenerator,
};

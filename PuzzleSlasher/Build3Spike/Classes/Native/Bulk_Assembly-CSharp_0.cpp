#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// Ground
#include "AssemblyU2DCSharp_Ground.h"
#ifndef _MSC_VER
#else
#endif
// Ground
#include "AssemblyU2DCSharp_GroundMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"


// System.Void Ground::.ctor()
extern "C" void Ground__ctor_m0 (Ground_t3 * __this, const MethodInfo* method)
{
	{
		Vector3_t5  L_0 = {0};
		Vector3__ctor_m7(&L_0, (1.3f), (0.3f), (1.0f), /*hidden argument*/NULL);
		__this->___start_4 = L_0;
		MonoBehaviour__ctor_m8(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ground::Start()
extern TypeInfo* GameObject_t1_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t2_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m11_MethodInfo_var;
extern "C" void Ground_Start_m1 (Ground_t3 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		List_1_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		List_1__ctor_m11_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t5  V_0 = {0};
	GameObject_t1 * V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t5  V_4 = {0};
	GameObject_t1 * V_5 = {0};
	{
		Vector3_t5  L_0 = (__this->___start_4);
		V_0 = L_0;
		GameObject_t1 * L_1 = (__this->___ball_3);
		Vector3_t5  L_2 = V_0;
		Quaternion_t9  L_3 = Quaternion_get_identity_m9(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t10 * L_4 = Object_Instantiate_m10(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = ((GameObject_t1 *)Castclass(L_4, GameObject_t1_il2cpp_TypeInfo_var));
		List_1_t2 * L_5 = (List_1_t2 *)il2cpp_codegen_object_new (List_1_t2_il2cpp_TypeInfo_var);
		List_1__ctor_m11(L_5, /*hidden argument*/List_1__ctor_m11_MethodInfo_var);
		__this->___tiles_5 = L_5;
		V_2 = (-2.09f);
		goto IL_008e;
	}

IL_0034:
	{
		V_3 = (-3.8f);
		goto IL_007b;
	}

IL_003f:
	{
		float L_6 = V_2;
		float L_7 = V_3;
		Vector3__ctor_m7((&V_4), L_6, (0.0f), L_7, /*hidden argument*/NULL);
		GameObject_t1 * L_8 = (__this->___tilePrefab_2);
		Vector3_t5  L_9 = V_4;
		Quaternion_t9  L_10 = Quaternion_get_identity_m9(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t10 * L_11 = Object_Instantiate_m10(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_5 = ((GameObject_t1 *)Castclass(L_11, GameObject_t1_il2cpp_TypeInfo_var));
		List_1_t2 * L_12 = (__this->___tiles_5);
		GameObject_t1 * L_13 = V_5;
		NullCheck(L_12);
		VirtActionInvoker1< GameObject_t1 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0) */, L_12, L_13);
		float L_14 = V_3;
		V_3 = ((float)((float)L_14+(float)(0.5375f)));
	}

IL_007b:
	{
		float L_15 = V_3;
		if ((((float)L_15) < ((float)(3.8f))))
		{
			goto IL_003f;
		}
	}
	{
		float L_16 = V_2;
		V_2 = ((float)((float)L_16+(float)(0.5375f)));
	}

IL_008e:
	{
		float L_17 = V_2;
		if ((((float)L_17) < ((float)(2.22f))))
		{
			goto IL_0034;
		}
	}
	{
		return;
	}
}
// System.Void Ground::Update()
extern "C" void Ground_Update_m2 (Ground_t3 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// Move
#include "AssemblyU2DCSharp_Move.h"
#ifndef _MSC_VER
#else
#endif
// Move
#include "AssemblyU2DCSharp_MoveMethodDeclarations.h"

// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_Collision.h"
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_CollisionMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
struct Component_t11;
struct Rigidbody_t6;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t11;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m13_gshared (Component_t11 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m13(__this, method) (( Object_t * (*) (Component_t11 *, const MethodInfo*))Component_GetComponent_TisObject_t_m13_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t6_m12(__this, method) (( Rigidbody_t6 * (*) (Component_t11 *, const MethodInfo*))Component_GetComponent_TisObject_t_m13_gshared)(__this, method)
struct GameObject_t1;
struct Renderer_t12;
struct GameObject_t1;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m15_gshared (GameObject_t1 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m15(__this, method) (( Object_t * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m15_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t12_m14(__this, method) (( Renderer_t12 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m15_gshared)(__this, method)


// System.Void Move::.ctor()
extern "C" void Move__ctor_m3 (Move_t7 * __this, const MethodInfo* method)
{
	{
		Vector3_t5  L_0 = Vector3_get_zero_m16(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___dir_2 = L_0;
		__this->___speed_3 = (300.0f);
		Vector3_t5  L_1 = {0};
		Vector3__ctor_m7(&L_1, (1.3f), (0.3f), (1.0f), /*hidden argument*/NULL);
		__this->___start_5 = L_1;
		MonoBehaviour__ctor_m8(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Move::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t6_m12_MethodInfo_var;
extern "C" void Move_Start_m4 (Move_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRigidbody_t6_m12_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t6 * L_0 = Component_GetComponent_TisRigidbody_t6_m12(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t6_m12_MethodInfo_var);
		__this->___rb_4 = L_0;
		return;
	}
}
// System.Void Move::Update()
extern TypeInfo* Input_t13_il2cpp_TypeInfo_var;
extern "C" void Move_Update_m5 (Move_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t5  V_0 = {0};
	Vector3_t5  V_1 = {0};
	{
		Vector3_t5 * L_0 = &(__this->___dir_2);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t13_il2cpp_TypeInfo_var);
		Vector3_t5  L_1 = Input_get_acceleration_m17(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ((&V_0)->___x_1);
		L_0->___x_1 = ((float)((float)L_2*(float)(6.0f)));
		Vector3_t5 * L_3 = &(__this->___dir_2);
		Vector3_t5  L_4 = Input_get_acceleration_m17(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = ((&V_1)->___y_2);
		L_3->___z_3 = ((float)((float)L_5*(float)(6.0f)));
		Vector3_t5  L_6 = (__this->___dir_2);
		float L_7 = Time_get_deltaTime_m18(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t5  L_8 = Vector3_op_Multiply_m19(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		__this->___dir_2 = L_8;
		Rigidbody_t6 * L_9 = (__this->___rb_4);
		Vector3_t5  L_10 = (__this->___dir_2);
		float L_11 = (__this->___speed_3);
		Vector3_t5  L_12 = Vector3_op_Multiply_m19(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody_AddForce_m20(L_9, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Move::OnCollisionEnter(UnityEngine.Collision)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRenderer_t12_m14_MethodInfo_var;
extern "C" void Move_OnCollisionEnter_m6 (Move_t7 * __this, Collision_t8 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		GameObject_GetComponent_TisRenderer_t12_m14_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision_t8 * L_0 = ___other;
		NullCheck(L_0);
		GameObject_t1 * L_1 = Collision_get_gameObject_m21(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m22(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m23(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral1, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		Collision_t8 * L_4 = ___other;
		NullCheck(L_4);
		GameObject_t1 * L_5 = Collision_get_gameObject_m21(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Renderer_t12 * L_6 = GameObject_GetComponent_TisRenderer_t12_m14(L_5, /*hidden argument*/GameObject_GetComponent_TisRenderer_t12_m14_MethodInfo_var);
		NullCheck(L_6);
		Material_t14 * L_7 = Renderer_get_material_m24(L_6, /*hidden argument*/NULL);
		Color_t15  L_8 = Color_get_green_m25(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		Material_set_color_m26(L_7, L_8, /*hidden argument*/NULL);
		Debug_Log_m27(NULL /*static, unused*/, (String_t*) &_stringLiteral2, /*hidden argument*/NULL);
	}

IL_003e:
	{
		Collision_t8 * L_9 = ___other;
		NullCheck(L_9);
		GameObject_t1 * L_10 = Collision_get_gameObject_m21(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = GameObject_get_tag_m22(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m23(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral3, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		Transform_t16 * L_13 = Component_get_transform_m28(__this, /*hidden argument*/NULL);
		Vector3_t5  L_14 = (__this->___start_5);
		NullCheck(L_13);
		Transform_set_position_m29(L_13, L_14, /*hidden argument*/NULL);
		Debug_Log_m27(NULL /*static, unused*/, (String_t*) &_stringLiteral4, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

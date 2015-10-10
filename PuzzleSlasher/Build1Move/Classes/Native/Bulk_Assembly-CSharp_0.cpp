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

// Move
#include "AssemblyU2DCSharp_Move.h"
#ifndef _MSC_VER
#else
#endif
// Move
#include "AssemblyU2DCSharp_MoveMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
struct Component_t5;
struct Rigidbody_t1;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t5;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m4_gshared (Component_t5 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m4(__this, method) (( Object_t * (*) (Component_t5 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t1_m3(__this, method) (( Rigidbody_t1 * (*) (Component_t5 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4_gshared)(__this, method)


// System.Void Move::.ctor()
extern "C" void Move__ctor_m0 (Move_t2 * __this, const MethodInfo* method)
{
	{
		Vector3_t4  L_0 = Vector3_get_zero_m5(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___dir_2 = L_0;
		__this->___speed_3 = (300.0f);
		MonoBehaviour__ctor_m6(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Move::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t1_m3_MethodInfo_var;
extern "C" void Move_Start_m1 (Move_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRigidbody_t1_m3_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t1 * L_0 = Component_GetComponent_TisRigidbody_t1_m3(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t1_m3_MethodInfo_var);
		__this->___rb_4 = L_0;
		return;
	}
}
// System.Void Move::Update()
extern TypeInfo* Input_t6_il2cpp_TypeInfo_var;
extern "C" void Move_Update_m2 (Move_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t4  V_0 = {0};
	Vector3_t4  V_1 = {0};
	{
		Vector3_t4 * L_0 = &(__this->___dir_2);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t6_il2cpp_TypeInfo_var);
		Vector3_t4  L_1 = Input_get_acceleration_m7(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ((&V_0)->___x_1);
		L_0->___x_1 = ((float)((float)L_2*(float)(4.0f)));
		Vector3_t4 * L_3 = &(__this->___dir_2);
		Vector3_t4  L_4 = Input_get_acceleration_m7(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = ((&V_1)->___y_2);
		L_3->___z_3 = ((float)((float)L_5*(float)(4.0f)));
		Vector3_t4 * L_6 = &(__this->___dir_2);
		float L_7 = Vector3_get_sqrMagnitude_m8(L_6, /*hidden argument*/NULL);
		if ((!(((float)L_7) > ((float)(1.0f)))))
		{
			goto IL_005c;
		}
	}
	{
		Vector3_t4 * L_8 = &(__this->___dir_2);
		Vector3_Normalize_m9(L_8, /*hidden argument*/NULL);
	}

IL_005c:
	{
		Vector3_t4  L_9 = (__this->___dir_2);
		float L_10 = Time_get_deltaTime_m10(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4  L_11 = Vector3_op_Multiply_m11(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->___dir_2 = L_11;
		Rigidbody_t1 * L_12 = (__this->___rb_4);
		Vector3_t4  L_13 = (__this->___dir_2);
		float L_14 = (__this->___speed_3);
		Vector3_t4  L_15 = Vector3_op_Multiply_m11(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody_AddForce_m12(L_12, L_15, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

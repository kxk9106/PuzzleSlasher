#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t1;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Move
struct  Move_t2  : public MonoBehaviour_t3
{
	// UnityEngine.Vector3 Move::dir
	Vector3_t4  ___dir_2;
	// System.Single Move::speed
	float ___speed_3;
	// UnityEngine.Rigidbody Move::rb
	Rigidbody_t1 * ___rb_4;
};

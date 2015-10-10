#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t6;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Move
struct  Move_t7  : public MonoBehaviour_t4
{
	// UnityEngine.Vector3 Move::dir
	Vector3_t5  ___dir_2;
	// System.Single Move::speed
	float ___speed_3;
	// UnityEngine.Rigidbody Move::rb
	Rigidbody_t6 * ___rb_4;
	// UnityEngine.Vector3 Move::start
	Vector3_t5  ___start_5;
};

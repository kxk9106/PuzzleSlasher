#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t1;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Ground
struct  Ground_t3  : public MonoBehaviour_t4
{
	// UnityEngine.GameObject Ground::tilePrefab
	GameObject_t1 * ___tilePrefab_2;
	// UnityEngine.GameObject Ground::ball
	GameObject_t1 * ___ball_3;
	// UnityEngine.Vector3 Ground::start
	Vector3_t5  ___start_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Ground::tiles
	List_1_t2 * ___tiles_5;
};

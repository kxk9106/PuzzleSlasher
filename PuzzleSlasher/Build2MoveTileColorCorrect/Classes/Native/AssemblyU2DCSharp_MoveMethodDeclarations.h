#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Move
struct Move_t6;
// UnityEngine.Collision
struct Collision_t8;

// System.Void Move::.ctor()
extern "C" void Move__ctor_m3 (Move_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Move::Start()
extern "C" void Move_Start_m4 (Move_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Move::Update()
extern "C" void Move_Update_m5 (Move_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Move::OnCollisionEnter(UnityEngine.Collision)
extern "C" void Move_OnCollisionEnter_m6 (Move_t6 * __this, Collision_t8 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;

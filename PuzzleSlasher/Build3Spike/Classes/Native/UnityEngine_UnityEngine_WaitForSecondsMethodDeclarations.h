#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t28;
struct WaitForSeconds_t28_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m53 (WaitForSeconds_t28 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t28_marshal(const WaitForSeconds_t28& unmarshaled, WaitForSeconds_t28_marshaled& marshaled);
void WaitForSeconds_t28_marshal_back(const WaitForSeconds_t28_marshaled& marshaled, WaitForSeconds_t28& unmarshaled);
void WaitForSeconds_t28_marshal_cleanup(WaitForSeconds_t28_marshaled& marshaled);

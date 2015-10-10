#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t27;
struct WaitForSeconds_t27_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m51 (WaitForSeconds_t27 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t27_marshal(const WaitForSeconds_t27& unmarshaled, WaitForSeconds_t27_marshaled& marshaled);
void WaitForSeconds_t27_marshal_back(const WaitForSeconds_t27_marshaled& marshaled, WaitForSeconds_t27& unmarshaled);
void WaitForSeconds_t27_marshal_cleanup(WaitForSeconds_t27_marshaled& marshaled);

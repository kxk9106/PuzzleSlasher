#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t120;
struct CacheIndex_t120_marshaled;

void CacheIndex_t120_marshal(const CacheIndex_t120& unmarshaled, CacheIndex_t120_marshaled& marshaled);
void CacheIndex_t120_marshal_back(const CacheIndex_t120_marshaled& marshaled, CacheIndex_t120& unmarshaled);
void CacheIndex_t120_marshal_cleanup(CacheIndex_t120_marshaled& marshaled);

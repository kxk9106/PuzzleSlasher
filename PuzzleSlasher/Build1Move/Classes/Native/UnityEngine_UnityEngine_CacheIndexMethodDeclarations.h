#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t113;
struct CacheIndex_t113_marshaled;

void CacheIndex_t113_marshal(const CacheIndex_t113& unmarshaled, CacheIndex_t113_marshaled& marshaled);
void CacheIndex_t113_marshal_back(const CacheIndex_t113_marshaled& marshaled, CacheIndex_t113& unmarshaled);
void CacheIndex_t113_marshal_cleanup(CacheIndex_t113_marshaled& marshaled);

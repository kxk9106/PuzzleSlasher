#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t156;
struct SkeletonBone_t156_marshaled;

void SkeletonBone_t156_marshal(const SkeletonBone_t156& unmarshaled, SkeletonBone_t156_marshaled& marshaled);
void SkeletonBone_t156_marshal_back(const SkeletonBone_t156_marshaled& marshaled, SkeletonBone_t156& unmarshaled);
void SkeletonBone_t156_marshal_cleanup(SkeletonBone_t156_marshaled& marshaled);

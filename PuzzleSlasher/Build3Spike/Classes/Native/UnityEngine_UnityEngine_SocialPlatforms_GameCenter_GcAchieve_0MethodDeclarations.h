﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t240;
struct GcAchievementData_t240_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t249;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t249 * GcAchievementData_ToAchievement_m1064 (GcAchievementData_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t240_marshal(const GcAchievementData_t240& unmarshaled, GcAchievementData_t240_marshaled& marshaled);
void GcAchievementData_t240_marshal_back(const GcAchievementData_t240_marshaled& marshaled, GcAchievementData_t240& unmarshaled);
void GcAchievementData_t240_marshal_cleanup(GcAchievementData_t240_marshaled& marshaled);

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t241;
struct GcScoreData_t241_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t251;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t251 * GcScoreData_ToScore_m1062 (GcScoreData_t241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t241_marshal(const GcScoreData_t241& unmarshaled, GcScoreData_t241_marshaled& marshaled);
void GcScoreData_t241_marshal_back(const GcScoreData_t241_marshaled& marshaled, GcScoreData_t241& unmarshaled);
void GcScoreData_t241_marshal_cleanup(GcScoreData_t241_marshaled& marshaled);

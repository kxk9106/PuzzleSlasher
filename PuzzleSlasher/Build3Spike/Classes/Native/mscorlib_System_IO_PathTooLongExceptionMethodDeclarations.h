﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.PathTooLongException
struct PathTooLongException_t1055;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t326;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.PathTooLongException::.ctor()
extern "C" void PathTooLongException__ctor_m5555 (PathTooLongException_t1055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.PathTooLongException::.ctor(System.String)
extern "C" void PathTooLongException__ctor_m5556 (PathTooLongException_t1055 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.PathTooLongException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void PathTooLongException__ctor_m5557 (PathTooLongException_t1055 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;

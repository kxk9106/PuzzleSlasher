﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
struct ResponseDelegate_1_t309;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.BasicResponse
struct BasicResponse_t178;
// System.IAsyncResult
struct IAsyncResult_t61;
// System.AsyncCallback
struct AsyncCallback_t62;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m10829(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t309 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m10813_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m10830(__this, ___response, method) (( void (*) (ResponseDelegate_1_t309 *, BasicResponse_t178 *, const MethodInfo*))ResponseDelegate_1_Invoke_m10815_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m10831(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t309 *, BasicResponse_t178 *, AsyncCallback_t62 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m10817_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m10832(__this, ___result, method) (( void (*) (ResponseDelegate_1_t309 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m10819_gshared)(__this, ___result, method)

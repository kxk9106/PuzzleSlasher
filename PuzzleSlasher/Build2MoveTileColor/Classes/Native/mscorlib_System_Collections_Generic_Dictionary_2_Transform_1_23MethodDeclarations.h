﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>
struct Transform_1_t2096;
// System.Object
struct Object_t;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t196;
// System.IAsyncResult
struct IAsyncResult_t60;
// System.AsyncCallback
struct AsyncCallback_t61;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_21MethodDeclarations.h"
#define Transform_1__ctor_m10761(__this, ___object, ___method, method) (( void (*) (Transform_1_t2096 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m10736_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m10762(__this, ___key, ___value, method) (( DictionaryEntry_t668  (*) (Transform_1_t2096 *, uint64_t, NetworkAccessToken_t196 *, const MethodInfo*))Transform_1_Invoke_m10737_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m10763(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2096 *, uint64_t, NetworkAccessToken_t196 *, AsyncCallback_t61 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m10738_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m10764(__this, ___result, method) (( DictionaryEntry_t668  (*) (Transform_1_t2096 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m10739_gshared)(__this, ___result, method)

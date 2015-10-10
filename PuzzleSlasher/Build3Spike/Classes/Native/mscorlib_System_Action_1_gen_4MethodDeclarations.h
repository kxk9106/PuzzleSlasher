#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.Font>
struct Action_1_t164;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t86;
// System.IAsyncResult
struct IAsyncResult_t61;
// System.AsyncCallback
struct AsyncCallback_t62;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.Font>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_6MethodDeclarations.h"
#define Action_1__ctor_m10092(__this, ___object, ___method, method) (( void (*) (Action_1_t164 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m9029_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Font>::Invoke(T)
#define Action_1_Invoke_m10093(__this, ___obj, method) (( void (*) (Action_1_t164 *, Font_t86 *, const MethodInfo*))Action_1_Invoke_m9031_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Font>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m10094(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t164 *, Font_t86 *, AsyncCallback_t62 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m9033_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Font>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m10095(__this, ___result, method) (( void (*) (Action_1_t164 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m9035_gshared)(__this, ___result, method)

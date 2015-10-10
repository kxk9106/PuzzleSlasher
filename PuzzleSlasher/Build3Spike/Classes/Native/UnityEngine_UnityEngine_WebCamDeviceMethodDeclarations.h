#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t145;
struct WebCamDevice_t145_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m704 (WebCamDevice_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m705 (WebCamDevice_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t145_marshal(const WebCamDevice_t145& unmarshaled, WebCamDevice_t145_marshaled& marshaled);
void WebCamDevice_t145_marshal_back(const WebCamDevice_t145_marshaled& marshaled, WebCamDevice_t145& unmarshaled);
void WebCamDevice_t145_marshal_cleanup(WebCamDevice_t145_marshaled& marshaled);

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t526;
// System.Net.WebRequest
struct WebRequest_t520;
// System.Uri
struct Uri_t200;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m1624 (HttpRequestCreator_t526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t520 * HttpRequestCreator_Create_m1625 (HttpRequestCreator_t526 * __this, Uri_t200 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;

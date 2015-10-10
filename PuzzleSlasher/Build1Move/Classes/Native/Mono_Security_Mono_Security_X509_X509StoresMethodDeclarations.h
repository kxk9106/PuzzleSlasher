﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Stores
struct X509Stores_t666;
// Mono.Security.X509.X509Store
struct X509Store_t572;
// System.String
struct String_t;

// System.Void Mono.Security.X509.X509Stores::.ctor(System.String)
extern "C" void X509Stores__ctor_m2969 (X509Stores_t666 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
extern "C" X509Store_t572 * X509Stores_get_TrustedRoot_m2970 (X509Stores_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::Open(System.String,System.Boolean)
extern "C" X509Store_t572 * X509Stores_Open_m2524 (X509Stores_t666 * __this, String_t* ___storeName, bool ___create, const MethodInfo* method) IL2CPP_METHOD_ATTR;

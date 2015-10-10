﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t1278;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t791;
// System.Byte[]
struct ByteU5BU5D_t110;

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
extern "C" void TripleDESCryptoServiceProvider__ctor_m6901 (TripleDESCryptoServiceProvider_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
extern "C" void TripleDESCryptoServiceProvider_GenerateIV_m6902 (TripleDESCryptoServiceProvider_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
extern "C" void TripleDESCryptoServiceProvider_GenerateKey_m6903 (TripleDESCryptoServiceProvider_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m6904 (TripleDESCryptoServiceProvider_t1278 * __this, ByteU5BU5D_t110* ___rgbKey, ByteU5BU5D_t110* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m6905 (TripleDESCryptoServiceProvider_t1278 * __this, ByteU5BU5D_t110* ___rgbKey, ByteU5BU5D_t110* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t1288;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t801;
// System.Byte[]
struct ByteU5BU5D_t117;

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
extern "C" void TripleDESCryptoServiceProvider__ctor_m6923 (TripleDESCryptoServiceProvider_t1288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
extern "C" void TripleDESCryptoServiceProvider_GenerateIV_m6924 (TripleDESCryptoServiceProvider_t1288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
extern "C" void TripleDESCryptoServiceProvider_GenerateKey_m6925 (TripleDESCryptoServiceProvider_t1288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m6926 (TripleDESCryptoServiceProvider_t1288 * __this, ByteU5BU5D_t117* ___rgbKey, ByteU5BU5D_t117* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m6927 (TripleDESCryptoServiceProvider_t1288 * __this, ByteU5BU5D_t117* ___rgbKey, ByteU5BU5D_t117* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;

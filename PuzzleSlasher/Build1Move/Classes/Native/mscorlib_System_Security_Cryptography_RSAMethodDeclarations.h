﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSA
struct RSA_t660;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t110;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSA::.ctor()
extern "C" void RSA__ctor_m3525 (RSA_t660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create()
extern "C" RSA_t660 * RSA_Create_m2442 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create(System.String)
extern "C" RSA_t660 * RSA_Create_m6766 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSA::EncryptValue(System.Byte[])
// System.Byte[] System.Security.Cryptography.RSA::DecryptValue(System.Byte[])
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean)
// System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters)
// System.Void System.Security.Cryptography.RSA::ZeroizePrivateKey(System.Security.Cryptography.RSAParameters)
extern "C" void RSA_ZeroizePrivateKey_m6767 (RSA_t660 * __this, RSAParameters_t680  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSA::FromXmlString(System.String)
extern "C" void RSA_FromXmlString_m3623 (RSA_t660 * __this, String_t* ___xmlString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSA::ToXmlString(System.Boolean)
extern "C" String_t* RSA_ToXmlString_m6768 (RSA_t660 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;

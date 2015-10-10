﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t879;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t545;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t117;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m6801 (RSAPKCS1SignatureDeformatter_t879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m3562 (RSAPKCS1SignatureDeformatter_t879 * __this, AsymmetricAlgorithm_t545 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m6802 (RSAPKCS1SignatureDeformatter_t879 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter_SetKey_m6803 (RSAPKCS1SignatureDeformatter_t879 * __this, AsymmetricAlgorithm_t545 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSAPKCS1SignatureDeformatter_VerifySignature_m6804 (RSAPKCS1SignatureDeformatter_t879 * __this, ByteU5BU5D_t117* ___rgbHash, ByteU5BU5D_t117* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;

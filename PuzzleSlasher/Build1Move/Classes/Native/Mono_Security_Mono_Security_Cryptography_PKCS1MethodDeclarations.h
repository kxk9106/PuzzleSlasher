﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t762;
// System.Byte[]
struct ByteU5BU5D_t110;
// System.Security.Cryptography.RSA
struct RSA_t660;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t760;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m2814 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m2815 (Object_t * __this /* static, unused */, ByteU5BU5D_t110* ___array1, ByteU5BU5D_t110* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t110* PKCS1_I2OSP_m2816 (Object_t * __this /* static, unused */, ByteU5BU5D_t110* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t110* PKCS1_OS2IP_m2817 (Object_t * __this /* static, unused */, ByteU5BU5D_t110* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t110* PKCS1_RSASP1_m2818 (Object_t * __this /* static, unused */, RSA_t660 * ___rsa, ByteU5BU5D_t110* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t110* PKCS1_RSAVP1_m2819 (Object_t * __this /* static, unused */, RSA_t660 * ___rsa, ByteU5BU5D_t110* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t110* PKCS1_Sign_v15_m2820 (Object_t * __this /* static, unused */, RSA_t660 * ___rsa, HashAlgorithm_t760 * ___hash, ByteU5BU5D_t110* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m2821 (Object_t * __this /* static, unused */, RSA_t660 * ___rsa, HashAlgorithm_t760 * ___hash, ByteU5BU5D_t110* ___hashValue, ByteU5BU5D_t110* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m2822 (Object_t * __this /* static, unused */, RSA_t660 * ___rsa, HashAlgorithm_t760 * ___hash, ByteU5BU5D_t110* ___hashValue, ByteU5BU5D_t110* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t110* PKCS1_Encode_v15_m2823 (Object_t * __this /* static, unused */, HashAlgorithm_t760 * ___hash, ByteU5BU5D_t110* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;

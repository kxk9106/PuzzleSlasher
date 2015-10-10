#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t959;
// System.Byte[]
struct ByteU5BU5D_t117;
// System.Security.Cryptography.RSA
struct RSA_t670;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t755;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t770;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m4728 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m4729 (Object_t * __this /* static, unused */, ByteU5BU5D_t117* ___array1, ByteU5BU5D_t117* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t117* PKCS1_I2OSP_m4730 (Object_t * __this /* static, unused */, ByteU5BU5D_t117* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t117* PKCS1_OS2IP_m4731 (Object_t * __this /* static, unused */, ByteU5BU5D_t117* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t117* PKCS1_RSAEP_m4732 (Object_t * __this /* static, unused */, RSA_t670 * ___rsa, ByteU5BU5D_t117* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t117* PKCS1_RSASP1_m4733 (Object_t * __this /* static, unused */, RSA_t670 * ___rsa, ByteU5BU5D_t117* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t117* PKCS1_RSAVP1_m4734 (Object_t * __this /* static, unused */, RSA_t670 * ___rsa, ByteU5BU5D_t117* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
extern "C" ByteU5BU5D_t117* PKCS1_Encrypt_v15_m4735 (Object_t * __this /* static, unused */, RSA_t670 * ___rsa, RandomNumberGenerator_t755 * ___rng, ByteU5BU5D_t117* ___M, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t117* PKCS1_Sign_v15_m4736 (Object_t * __this /* static, unused */, RSA_t670 * ___rsa, HashAlgorithm_t770 * ___hash, ByteU5BU5D_t117* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m4737 (Object_t * __this /* static, unused */, RSA_t670 * ___rsa, HashAlgorithm_t770 * ___hash, ByteU5BU5D_t117* ___hashValue, ByteU5BU5D_t117* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m4738 (Object_t * __this /* static, unused */, RSA_t670 * ___rsa, HashAlgorithm_t770 * ___hash, ByteU5BU5D_t117* ___hashValue, ByteU5BU5D_t117* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t117* PKCS1_Encode_v15_m4739 (Object_t * __this /* static, unused */, HashAlgorithm_t770 * ___hash, ByteU5BU5D_t117* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;

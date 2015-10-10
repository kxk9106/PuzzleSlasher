#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t548;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t546;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t545;
// System.Security.Cryptography.Oid
struct Oid_t547;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t556;
// System.Byte[]
struct ByteU5BU5D_t117;
// System.Security.Cryptography.DSA
struct DSA_t669;
// System.Security.Cryptography.RSA
struct RSA_t670;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m1733 (PublicKey_t548 * __this, X509Certificate_t556 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t546 * PublicKey_get_EncodedKeyValue_m1734 (PublicKey_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t546 * PublicKey_get_EncodedParameters_m1735 (PublicKey_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t545 * PublicKey_get_Key_m1736 (PublicKey_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t547 * PublicKey_get_Oid_m1737 (PublicKey_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t117* PublicKey_GetUnsignedBigInteger_m1738 (Object_t * __this /* static, unused */, ByteU5BU5D_t117* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t669 * PublicKey_DecodeDSA_m1739 (Object_t * __this /* static, unused */, ByteU5BU5D_t117* ___rawPublicKey, ByteU5BU5D_t117* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t670 * PublicKey_DecodeRSA_m1740 (Object_t * __this /* static, unused */, ByteU5BU5D_t117* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;

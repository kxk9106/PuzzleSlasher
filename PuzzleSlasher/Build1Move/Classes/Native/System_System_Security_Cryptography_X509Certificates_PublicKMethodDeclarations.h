#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t538;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t536;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t535;
// System.Security.Cryptography.Oid
struct Oid_t537;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t546;
// System.Byte[]
struct ByteU5BU5D_t110;
// System.Security.Cryptography.DSA
struct DSA_t659;
// System.Security.Cryptography.RSA
struct RSA_t660;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m1711 (PublicKey_t538 * __this, X509Certificate_t546 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t536 * PublicKey_get_EncodedKeyValue_m1712 (PublicKey_t538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t536 * PublicKey_get_EncodedParameters_m1713 (PublicKey_t538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t535 * PublicKey_get_Key_m1714 (PublicKey_t538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t537 * PublicKey_get_Oid_m1715 (PublicKey_t538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t110* PublicKey_GetUnsignedBigInteger_m1716 (Object_t * __this /* static, unused */, ByteU5BU5D_t110* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t659 * PublicKey_DecodeDSA_m1717 (Object_t * __this /* static, unused */, ByteU5BU5D_t110* ___rawPublicKey, ByteU5BU5D_t110* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t660 * PublicKey_DecodeRSA_m1718 (Object_t * __this /* static, unused */, ByteU5BU5D_t110* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;

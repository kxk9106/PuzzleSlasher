#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t979;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t978;
// System.Byte[]
struct ByteU5BU5D_t117;
// Mono.Security.ASN1
struct ASN1_t966;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m4897 (EncryptedData_t979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m4898 (EncryptedData_t979 * __this, ASN1_t966 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t978 * EncryptedData_get_EncryptionAlgorithm_m4899 (EncryptedData_t979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t117* EncryptedData_get_EncryptedContent_m4900 (EncryptedData_t979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

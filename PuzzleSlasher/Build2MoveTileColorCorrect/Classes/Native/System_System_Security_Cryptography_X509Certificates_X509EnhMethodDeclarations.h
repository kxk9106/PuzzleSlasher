﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t574;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t546;
// System.Byte[]
struct ByteU5BU5D_t117;
// System.String
struct String_t;
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C" void X509EnhancedKeyUsageExtension__ctor_m1866 (X509EnhancedKeyUsageExtension_t574 * __this, AsnEncodedData_t546 * ___encodedEnhancedKeyUsages, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509EnhancedKeyUsageExtension_CopyFrom_m1867 (X509EnhancedKeyUsageExtension_t574 * __this, AsnEncodedData_t546 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
extern "C" int32_t X509EnhancedKeyUsageExtension_Decode_m1868 (X509EnhancedKeyUsageExtension_t574 * __this, ByteU5BU5D_t117* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
extern "C" String_t* X509EnhancedKeyUsageExtension_ToString_m1869 (X509EnhancedKeyUsageExtension_t574 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;

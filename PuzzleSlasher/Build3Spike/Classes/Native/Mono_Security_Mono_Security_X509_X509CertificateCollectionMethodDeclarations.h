﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t696;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t556;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t701;
// System.Byte[]
struct ByteU5BU5D_t117;

// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
extern "C" void X509CertificateCollection__ctor_m2941 (X509CertificateCollection_t696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" void X509CertificateCollection__ctor_m2942 (X509CertificateCollection_t696 * __this, X509CertificateCollection_t696 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m2943 (X509CertificateCollection_t696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
extern "C" X509Certificate_t556 * X509CertificateCollection_get_Item_m2505 (X509CertificateCollection_t696 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
extern "C" int32_t X509CertificateCollection_Add_m2944 (X509CertificateCollection_t696 * __this, X509Certificate_t556 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509CertificateCollection)
extern "C" void X509CertificateCollection_AddRange_m2945 (X509CertificateCollection_t696 * __this, X509CertificateCollection_t696 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Contains(Mono.Security.X509.X509Certificate)
extern "C" bool X509CertificateCollection_Contains_m2946 (X509CertificateCollection_t696 * __this, X509Certificate_t556 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
extern "C" X509CertificateEnumerator_t701 * X509CertificateCollection_GetEnumerator_m2548 (X509CertificateCollection_t696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
extern "C" int32_t X509CertificateCollection_GetHashCode_m2947 (X509CertificateCollection_t696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::IndexOf(Mono.Security.X509.X509Certificate)
extern "C" int32_t X509CertificateCollection_IndexOf_m2948 (X509CertificateCollection_t696 * __this, X509Certificate_t556 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::Remove(Mono.Security.X509.X509Certificate)
extern "C" void X509CertificateCollection_Remove_m2949 (X509CertificateCollection_t696 * __this, X509Certificate_t556 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Compare(System.Byte[],System.Byte[])
extern "C" bool X509CertificateCollection_Compare_m2950 (X509CertificateCollection_t696 * __this, ByteU5BU5D_t117* ___array1, ByteU5BU5D_t117* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

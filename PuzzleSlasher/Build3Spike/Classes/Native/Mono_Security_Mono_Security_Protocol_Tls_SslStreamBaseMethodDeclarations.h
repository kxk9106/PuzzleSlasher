﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t837;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t558;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t696;
// System.IO.Stream
struct Stream_t823;
// System.IAsyncResult
struct IAsyncResult_t61;
// System.AsyncCallback
struct AsyncCallback_t62;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t529;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t603;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t834;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t545;
// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t840;
// System.Byte[]
struct ByteU5BU5D_t117;
// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.ctor(System.IO.Stream,System.Boolean)
extern "C" void SslStreamBase__ctor_m3331 (SslStreamBase_t837 * __this, Stream_t823 * ___stream, bool ___ownsStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.cctor()
extern "C" void SslStreamBase__cctor_m3332 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::AsyncHandshakeCallback(System.IAsyncResult)
extern "C" void SslStreamBase_AsyncHandshakeCallback_m3333 (SslStreamBase_t837 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_MightNeedHandshake()
extern "C" bool SslStreamBase_get_MightNeedHandshake_m3334 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::NegotiateHandshake()
extern "C" void SslStreamBase_NegotiateHandshake_m3335 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::OnNegotiateHandshakeCallback(System.IAsyncResult)
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslStreamBase::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_HaveRemoteValidation2Callback()
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslStreamBase::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t558 * SslStreamBase_RaiseLocalCertificateSelection_m3336 (SslStreamBase_t837 * __this, X509CertificateCollection_t529 * ___certificates, X509Certificate_t558 * ___remoteCertificate, String_t* ___targetHost, X509CertificateCollection_t529 * ___requestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslStreamBase_RaiseRemoteCertificateValidation_m3337 (SslStreamBase_t837 * __this, X509Certificate_t558 * ___certificate, Int32U5BU5D_t603* ___errors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t834 * SslStreamBase_RaiseRemoteCertificateValidation2_m3338 (SslStreamBase_t837 * __this, X509CertificateCollection_t696 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t545 * SslStreamBase_RaiseLocalPrivateKeySelection_m3339 (SslStreamBase_t837 * __this, X509Certificate_t558 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CheckCertRevocationStatus()
extern "C" bool SslStreamBase_get_CheckCertRevocationStatus_m3340 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_CheckCertRevocationStatus(System.Boolean)
extern "C" void SslStreamBase_set_CheckCertRevocationStatus_m3341 (SslStreamBase_t837 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_CipherAlgorithm()
extern "C" int32_t SslStreamBase_get_CipherAlgorithm_m3342 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_CipherStrength()
extern "C" int32_t SslStreamBase_get_CipherStrength_m3343 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_HashAlgorithm()
extern "C" int32_t SslStreamBase_get_HashAlgorithm_m3344 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_HashStrength()
extern "C" int32_t SslStreamBase_get_HashStrength_m3345 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeStrength()
extern "C" int32_t SslStreamBase_get_KeyExchangeStrength_m3346 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeAlgorithm()
extern "C" int32_t SslStreamBase_get_KeyExchangeAlgorithm_m3347 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.SslStreamBase::get_SecurityProtocol()
extern "C" int32_t SslStreamBase_get_SecurityProtocol_m3348 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificate()
extern "C" X509Certificate_t558 * SslStreamBase_get_ServerCertificate_m3349 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificates()
extern "C" X509CertificateCollection_t696 * SslStreamBase_get_ServerCertificates_m3350 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::BeginNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C" bool SslStreamBase_BeginNegotiateHandshake_m3351 (SslStreamBase_t837 * __this, InternalAsyncResult_t840 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C" void SslStreamBase_EndNegotiateHandshake_m3352 (SslStreamBase_t837 * __this, InternalAsyncResult_t840 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStreamBase_BeginRead_m3353 (SslStreamBase_t837 * __this, ByteU5BU5D_t117* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t62 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginRead(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C" void SslStreamBase_InternalBeginRead_m3354 (SslStreamBase_t837 * __this, InternalAsyncResult_t840 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalReadCallback(System.IAsyncResult)
extern "C" void SslStreamBase_InternalReadCallback_m3355 (SslStreamBase_t837 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginWrite(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C" void SslStreamBase_InternalBeginWrite_m3356 (SslStreamBase_t837 * __this, InternalAsyncResult_t840 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalWriteCallback(System.IAsyncResult)
extern "C" void SslStreamBase_InternalWriteCallback_m3357 (SslStreamBase_t837 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStreamBase_BeginWrite_m3358 (SslStreamBase_t837 * __this, ByteU5BU5D_t117* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t62 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::EndRead(System.IAsyncResult)
extern "C" int32_t SslStreamBase_EndRead_m3359 (SslStreamBase_t837 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndWrite(System.IAsyncResult)
extern "C" void SslStreamBase_EndWrite_m3360 (SslStreamBase_t837 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Close()
extern "C" void SslStreamBase_Close_m3361 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Flush()
extern "C" void SslStreamBase_Flush_m3362 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[])
extern "C" int32_t SslStreamBase_Read_m3363 (SslStreamBase_t837 * __this, ByteU5BU5D_t117* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t SslStreamBase_Read_m3364 (SslStreamBase_t837 * __this, ByteU5BU5D_t117* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t SslStreamBase_Seek_m3365 (SslStreamBase_t837 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::SetLength(System.Int64)
extern "C" void SslStreamBase_SetLength_m3366 (SslStreamBase_t837 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[])
extern "C" void SslStreamBase_Write_m3367 (SslStreamBase_t837 * __this, ByteU5BU5D_t117* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void SslStreamBase_Write_m3368 (SslStreamBase_t837 * __this, ByteU5BU5D_t117* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanRead()
extern "C" bool SslStreamBase_get_CanRead_m3369 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanSeek()
extern "C" bool SslStreamBase_get_CanSeek_m3370 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanWrite()
extern "C" bool SslStreamBase_get_CanWrite_m3371 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Length()
extern "C" int64_t SslStreamBase_get_Length_m3372 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Position()
extern "C" int64_t SslStreamBase_get_Position_m3373 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_Position(System.Int64)
extern "C" void SslStreamBase_set_Position_m3374 (SslStreamBase_t837 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Finalize()
extern "C" void SslStreamBase_Finalize_m3375 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Dispose(System.Boolean)
extern "C" void SslStreamBase_Dispose_m3376 (SslStreamBase_t837 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::resetBuffer()
extern "C" void SslStreamBase_resetBuffer_m3377 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::checkDisposed()
extern "C" void SslStreamBase_checkDisposed_m3378 (SslStreamBase_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

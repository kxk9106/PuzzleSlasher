﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t523;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t558;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t569;
// System.IAsyncResult
struct IAsyncResult_t61;
// System.AsyncCallback
struct AsyncCallback_t62;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C" void RemoteCertificateValidationCallback__ctor_m2401 (RemoteCertificateValidationCallback_t523 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C" bool RemoteCertificateValidationCallback_Invoke_m2402 (RemoteCertificateValidationCallback_t523 * __this, Object_t * ___sender, X509Certificate_t558 * ___certificate, X509Chain_t569 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t523(Il2CppObject* delegate, Object_t * ___sender, X509Certificate_t558 * ___certificate, X509Chain_t569 * ___chain, int32_t ___sslPolicyErrors);
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern "C" Object_t * RemoteCertificateValidationCallback_BeginInvoke_m2403 (RemoteCertificateValidationCallback_t523 * __this, Object_t * ___sender, X509Certificate_t558 * ___certificate, X509Chain_t569 * ___chain, int32_t ___sslPolicyErrors, AsyncCallback_t62 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C" bool RemoteCertificateValidationCallback_EndInvoke_m2404 (RemoteCertificateValidationCallback_t523 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

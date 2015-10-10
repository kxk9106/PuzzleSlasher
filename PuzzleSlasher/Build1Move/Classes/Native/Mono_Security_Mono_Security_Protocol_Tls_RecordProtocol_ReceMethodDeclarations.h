﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t814;
// System.IO.Stream
struct Stream_t813;
// System.Byte[]
struct ByteU5BU5D_t110;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t74;
// System.Threading.WaitHandle
struct WaitHandle_t859;
// System.AsyncCallback
struct AsyncCallback_t54;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3176 (ReceiveRecordAsyncResult_t814 * __this, AsyncCallback_t54 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t110* ___initialBuffer, Stream_t813 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t813 * ReceiveRecordAsyncResult_get_Record_m3177 (ReceiveRecordAsyncResult_t814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t110* ReceiveRecordAsyncResult_get_ResultingBuffer_m3178 (ReceiveRecordAsyncResult_t814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t110* ReceiveRecordAsyncResult_get_InitialBuffer_m3179 (ReceiveRecordAsyncResult_t814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3180 (ReceiveRecordAsyncResult_t814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t74 * ReceiveRecordAsyncResult_get_AsyncException_m3181 (ReceiveRecordAsyncResult_t814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3182 (ReceiveRecordAsyncResult_t814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t859 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3183 (ReceiveRecordAsyncResult_t814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3184 (ReceiveRecordAsyncResult_t814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3185 (ReceiveRecordAsyncResult_t814 * __this, Exception_t74 * ___ex, ByteU5BU5D_t110* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3186 (ReceiveRecordAsyncResult_t814 * __this, Exception_t74 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3187 (ReceiveRecordAsyncResult_t814 * __this, ByteU5BU5D_t110* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;

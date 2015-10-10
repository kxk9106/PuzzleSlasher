#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t824;
// System.IO.Stream
struct Stream_t823;
// System.Byte[]
struct ByteU5BU5D_t117;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t82;
// System.Threading.WaitHandle
struct WaitHandle_t869;
// System.AsyncCallback
struct AsyncCallback_t62;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3198 (ReceiveRecordAsyncResult_t824 * __this, AsyncCallback_t62 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t117* ___initialBuffer, Stream_t823 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t823 * ReceiveRecordAsyncResult_get_Record_m3199 (ReceiveRecordAsyncResult_t824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t117* ReceiveRecordAsyncResult_get_ResultingBuffer_m3200 (ReceiveRecordAsyncResult_t824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t117* ReceiveRecordAsyncResult_get_InitialBuffer_m3201 (ReceiveRecordAsyncResult_t824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3202 (ReceiveRecordAsyncResult_t824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t82 * ReceiveRecordAsyncResult_get_AsyncException_m3203 (ReceiveRecordAsyncResult_t824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3204 (ReceiveRecordAsyncResult_t824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t869 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3205 (ReceiveRecordAsyncResult_t824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3206 (ReceiveRecordAsyncResult_t824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3207 (ReceiveRecordAsyncResult_t824 * __this, Exception_t82 * ___ex, ByteU5BU5D_t117* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3208 (ReceiveRecordAsyncResult_t824 * __this, Exception_t82 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3209 (ReceiveRecordAsyncResult_t824 * __this, ByteU5BU5D_t117* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;

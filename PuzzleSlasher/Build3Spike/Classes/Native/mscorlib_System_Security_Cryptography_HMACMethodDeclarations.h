﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.HMAC
struct HMAC_t875;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t117;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t954;

// System.Void System.Security.Cryptography.HMAC::.ctor()
extern "C" void HMAC__ctor_m6683 (HMAC_t875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HMAC::get_BlockSizeValue()
extern "C" int32_t HMAC_get_BlockSizeValue_m6684 (HMAC_t875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_BlockSizeValue(System.Int32)
extern "C" void HMAC_set_BlockSizeValue_m6685 (HMAC_t875 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_HashName(System.String)
extern "C" void HMAC_set_HashName_m6686 (HMAC_t875 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::get_Key()
extern "C" ByteU5BU5D_t117* HMAC_get_Key_m6687 (HMAC_t875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_Key(System.Byte[])
extern "C" void HMAC_set_Key_m6688 (HMAC_t875 * __this, ByteU5BU5D_t117* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::get_Block()
extern "C" BlockProcessor_t954 * HMAC_get_Block_m6689 (HMAC_t875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::KeySetup(System.Byte[],System.Byte)
extern "C" ByteU5BU5D_t117* HMAC_KeySetup_m6690 (HMAC_t875 * __this, ByteU5BU5D_t117* ___key, uint8_t ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Dispose(System.Boolean)
extern "C" void HMAC_Dispose_m6691 (HMAC_t875 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void HMAC_HashCore_m6692 (HMAC_t875 * __this, ByteU5BU5D_t117* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::HashFinal()
extern "C" ByteU5BU5D_t117* HMAC_HashFinal_m6693 (HMAC_t875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Initialize()
extern "C" void HMAC_Initialize_m6694 (HMAC_t875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create()
extern "C" HMAC_t875 * HMAC_Create_m3557 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create(System.String)
extern "C" HMAC_t875 * HMAC_Create_m6695 (Object_t * __this /* static, unused */, String_t* ___algorithmName, const MethodInfo* method) IL2CPP_METHOD_ATTR;

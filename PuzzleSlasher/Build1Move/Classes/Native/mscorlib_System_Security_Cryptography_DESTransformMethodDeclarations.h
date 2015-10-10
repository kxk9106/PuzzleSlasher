﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESTransform
struct DESTransform_t1244;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t767;
// System.Byte[]
struct ByteU5BU5D_t110;
// System.UInt32[]
struct UInt32U5BU5D_t744;

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
extern "C" void DESTransform__ctor_m6623 (DESTransform_t1244 * __this, SymmetricAlgorithm_t767 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t110* ___key, ByteU5BU5D_t110* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
extern "C" void DESTransform__cctor_m6624 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
extern "C" uint32_t DESTransform_CipherFunct_m6625 (DESTransform_t1244 * __this, uint32_t ___r, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
extern "C" void DESTransform_Permutation_m6626 (Object_t * __this /* static, unused */, ByteU5BU5D_t110* ___input, ByteU5BU5D_t110* ___output, UInt32U5BU5D_t744* ___permTab, bool ___preSwap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
extern "C" void DESTransform_BSwap_m6627 (Object_t * __this /* static, unused */, ByteU5BU5D_t110* ___byteBuff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
extern "C" void DESTransform_SetKey_m6628 (DESTransform_t1244 * __this, ByteU5BU5D_t110* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
extern "C" void DESTransform_ProcessBlock_m6629 (DESTransform_t1244 * __this, ByteU5BU5D_t110* ___input, ByteU5BU5D_t110* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void DESTransform_ECB_m6630 (DESTransform_t1244 * __this, ByteU5BU5D_t110* ___input, ByteU5BU5D_t110* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t110* DESTransform_GetStrongKey_m6631 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

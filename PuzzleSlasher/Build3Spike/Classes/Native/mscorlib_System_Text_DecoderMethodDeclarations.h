#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t1035;
// System.Text.DecoderFallback
struct DecoderFallback_t1303;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1304;
// System.Byte[]
struct ByteU5BU5D_t117;
// System.Char[]
struct CharU5BU5D_t316;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m7009 (Decoder_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m7010 (Decoder_t1035 * __this, DecoderFallback_t1303 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1304 * Decoder_get_FallbackBuffer_m7011 (Decoder_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)

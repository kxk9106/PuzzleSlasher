#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t950;
// Mono.Math.BigInteger
struct BigInteger_t949;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m4584 (ModulusRing_t950 * __this, BigInteger_t949 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m4585 (ModulusRing_t950 * __this, BigInteger_t949 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t949 * ModulusRing_Multiply_m4586 (ModulusRing_t950 * __this, BigInteger_t949 * ___a, BigInteger_t949 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t949 * ModulusRing_Difference_m4587 (ModulusRing_t950 * __this, BigInteger_t949 * ___a, BigInteger_t949 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t949 * ModulusRing_Pow_m4588 (ModulusRing_t950 * __this, BigInteger_t949 * ___a, BigInteger_t949 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t949 * ModulusRing_Pow_m4589 (ModulusRing_t950 * __this, uint32_t ___b, BigInteger_t949 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;

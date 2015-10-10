#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t742;
// Mono.Math.BigInteger
struct BigInteger_t741;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m2689 (ModulusRing_t742 * __this, BigInteger_t741 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m2690 (ModulusRing_t742 * __this, BigInteger_t741 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t741 * ModulusRing_Multiply_m2691 (ModulusRing_t742 * __this, BigInteger_t741 * ___a, BigInteger_t741 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t741 * ModulusRing_Difference_m2692 (ModulusRing_t742 * __this, BigInteger_t741 * ___a, BigInteger_t741 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t741 * ModulusRing_Pow_m2693 (ModulusRing_t742 * __this, BigInteger_t741 * ___a, BigInteger_t741 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t741 * ModulusRing_Pow_m2694 (ModulusRing_t742 * __this, uint32_t ___b, BigInteger_t741 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;

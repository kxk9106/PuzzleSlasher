﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct PrimeGeneratorBase_t934;
// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t1406;
// Mono.Math.BigInteger
struct BigInteger_t939;
// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"

// System.Void Mono.Math.Prime.Generator.PrimeGeneratorBase::.ctor()
extern "C" void PrimeGeneratorBase__ctor_m4552 (PrimeGeneratorBase_t934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.ConfidenceFactor Mono.Math.Prime.Generator.PrimeGeneratorBase::get_Confidence()
extern "C" int32_t PrimeGeneratorBase_get_Confidence_m4553 (PrimeGeneratorBase_t934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.PrimalityTest Mono.Math.Prime.Generator.PrimeGeneratorBase::get_PrimalityTest()
extern "C" PrimalityTest_t1406 * PrimeGeneratorBase_get_PrimalityTest_m4554 (PrimeGeneratorBase_t934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.Prime.Generator.PrimeGeneratorBase::get_TrialDivisionBounds()
extern "C" int32_t PrimeGeneratorBase_get_TrialDivisionBounds_m4555 (PrimeGeneratorBase_t934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.PrimeGeneratorBase::GenerateNewPrime(System.Int32)

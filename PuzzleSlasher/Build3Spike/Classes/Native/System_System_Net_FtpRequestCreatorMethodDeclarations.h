#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t522;
// System.Net.WebRequest
struct WebRequest_t520;
// System.Uri
struct Uri_t200;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m1618 (FtpRequestCreator_t522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t520 * FtpRequestCreator_Create_m1619 (FtpRequestCreator_t522 * __this, Uri_t200 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;

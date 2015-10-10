#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t521;
// System.Net.WebRequest
struct WebRequest_t520;
// System.Uri
struct Uri_t200;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m1613 (FileWebRequestCreator_t521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t520 * FileWebRequestCreator_Create_m1614 (FileWebRequestCreator_t521 * __this, Uri_t200 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;

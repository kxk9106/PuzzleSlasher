#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Uri/UriScheme
struct UriScheme_t646;
struct UriScheme_t646_marshaled;
// System.String
struct String_t;

// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern "C" void UriScheme__ctor_m2316 (UriScheme_t646 * __this, String_t* ___s, String_t* ___d, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void UriScheme_t646_marshal(const UriScheme_t646& unmarshaled, UriScheme_t646_marshaled& marshaled);
void UriScheme_t646_marshal_back(const UriScheme_t646_marshaled& marshaled, UriScheme_t646& unmarshaled);
void UriScheme_t646_marshal_cleanup(UriScheme_t646_marshaled& marshaled);

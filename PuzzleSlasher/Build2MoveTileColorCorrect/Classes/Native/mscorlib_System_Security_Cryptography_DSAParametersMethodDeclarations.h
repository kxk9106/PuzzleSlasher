#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t692;
struct DSAParameters_t692_marshaled;

void DSAParameters_t692_marshal(const DSAParameters_t692& unmarshaled, DSAParameters_t692_marshaled& marshaled);
void DSAParameters_t692_marshal_back(const DSAParameters_t692_marshaled& marshaled, DSAParameters_t692& unmarshaled);
void DSAParameters_t692_marshal_cleanup(DSAParameters_t692_marshaled& marshaled);

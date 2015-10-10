#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t682;
struct DSAParameters_t682_marshaled;

void DSAParameters_t682_marshal(const DSAParameters_t682& unmarshaled, DSAParameters_t682_marshaled& marshaled);
void DSAParameters_t682_marshal_back(const DSAParameters_t682_marshaled& marshaled, DSAParameters_t682& unmarshaled);
void DSAParameters_t682_marshal_cleanup(DSAParameters_t682_marshaled& marshaled);

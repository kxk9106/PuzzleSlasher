#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t690;
struct RSAParameters_t690_marshaled;

void RSAParameters_t690_marshal(const RSAParameters_t690& unmarshaled, RSAParameters_t690_marshaled& marshaled);
void RSAParameters_t690_marshal_back(const RSAParameters_t690_marshaled& marshaled, RSAParameters_t690& unmarshaled);
void RSAParameters_t690_marshal_cleanup(RSAParameters_t690_marshaled& marshaled);

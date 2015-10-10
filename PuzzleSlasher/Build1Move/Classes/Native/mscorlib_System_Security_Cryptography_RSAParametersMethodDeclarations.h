#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t680;
struct RSAParameters_t680_marshaled;

void RSAParameters_t680_marshal(const RSAParameters_t680& unmarshaled, RSAParameters_t680_marshaled& marshaled);
void RSAParameters_t680_marshal_back(const RSAParameters_t680_marshaled& marshaled, RSAParameters_t680& unmarshaled);
void RSAParameters_t680_marshal_cleanup(RSAParameters_t680_marshaled& marshaled);

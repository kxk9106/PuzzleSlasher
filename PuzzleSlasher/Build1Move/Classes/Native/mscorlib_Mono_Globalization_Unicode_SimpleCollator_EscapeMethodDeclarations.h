#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/Escape
struct Escape_t926;
struct Escape_t926_marshaled;

void Escape_t926_marshal(const Escape_t926& unmarshaled, Escape_t926_marshaled& marshaled);
void Escape_t926_marshal_back(const Escape_t926_marshaled& marshaled, Escape_t926& unmarshaled);
void Escape_t926_marshal_cleanup(Escape_t926_marshaled& marshaled);

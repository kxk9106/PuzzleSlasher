﻿#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t695;
// System.IO.TextReader
struct TextReader_t977;
// System.Text.Encoding
struct Encoding_t288;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t694  : public Object_t
{
};
struct Console_t694_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t695 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t695 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t977 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t288 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t288 * ___outputEncoding_4;
};

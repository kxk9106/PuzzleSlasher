#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t705;
// System.IO.TextReader
struct TextReader_t987;
// System.Text.Encoding
struct Encoding_t297;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t704  : public Object_t
{
};
struct Console_t704_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t705 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t705 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t987 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t297 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t297 * ___outputEncoding_4;
};

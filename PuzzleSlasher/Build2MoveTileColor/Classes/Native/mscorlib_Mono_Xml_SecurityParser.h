#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t982;
// System.Collections.Stack
struct Stack_t287;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t983  : public SmallXmlParser_t984
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t982 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t982 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t287 * ___stack_15;
};

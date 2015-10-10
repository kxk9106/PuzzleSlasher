#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t972;
// System.Collections.Stack
struct Stack_t278;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t973  : public SmallXmlParser_t974
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t972 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t972 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t278 * ___stack_15;
};

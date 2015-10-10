#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t191;
// System.Collections.ArrayList
struct ArrayList_t496;
// System.Net.ICredentials
struct ICredentials_t531;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebProxy
struct  WebProxy_t532  : public Object_t
{
	// System.Uri System.Net.WebProxy::address
	Uri_t191 * ___address_0;
	// System.Boolean System.Net.WebProxy::bypassOnLocal
	bool ___bypassOnLocal_1;
	// System.Collections.ArrayList System.Net.WebProxy::bypassList
	ArrayList_t496 * ___bypassList_2;
	// System.Net.ICredentials System.Net.WebProxy::credentials
	Object_t * ___credentials_3;
	// System.Boolean System.Net.WebProxy::useDefaultCredentials
	bool ___useDefaultCredentials_4;
};

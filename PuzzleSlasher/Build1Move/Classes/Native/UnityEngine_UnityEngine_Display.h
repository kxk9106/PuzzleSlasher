#pragma once
#include <stdint.h>
// UnityEngine.Display[]
struct DisplayU5BU5D_t121;
// UnityEngine.Display
struct Display_t122;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t120;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Display
struct  Display_t122  : public Object_t
{
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;
};
struct Display_t122_StaticFields{
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t121* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t122 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t120 * ___onDisplaysUpdated_3;
};

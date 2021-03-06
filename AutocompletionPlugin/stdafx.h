// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <codecvt>

#include "TChar.h"

using stringT = std::basic_string<TCHAR, std::char_traits<TCHAR>, std::allocator<TCHAR>>;

#define TOWSTRING(ansistring) std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(ansistring)

// TODO: reference additional headers your program requires here

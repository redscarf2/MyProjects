// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include <stdio.h>

#ifdef WIN32

#include "targetver.h"
#include <tchar.h>

#else

#define _tmain main
#define _TCHAR char

#endif


// TODO: reference additional headers your program requires here
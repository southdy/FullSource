// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
#include "KGStdAfx.h"

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows XP or later.                   
#define _WIN32_WINNT 0x0501	// Change this to the appropriate value to target other versions of Windows.
#endif	

#pragma   warning( disable: 4996)// localtime strncpy
#pragma   warning( disable: 4512)
#pragma   warning( disable: 4100)
#pragma   warning( disable: 4201)
#pragma   warning( disable: 4127)// disable KGLOG_PROCESS_ERROR warning

#include <stdio.h>
#include <tchar.h>

#define	_USE_32BIT_TIME_T

#include "locale.h"
#include "KGPublic.h"
#include "Engine/KGLog.h"
#include "Engine/File.h"
#include "Engine/FileType.h"
#include "Engine/KThread.h"
#include "Common/KG_Memory.h"
#include "KG_SO3RoleDBUpdaterDef.h"
#include "Common/CRC32.h"

#include "KGStdAfx.h"
// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER				// Allow use of features specific to Windows XP or later.
#define WINVER 0x0501		// Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows XP or later.                   
#define _WIN32_WINNT 0x0501	// Change this to the appropriate value to target other versions of Windows.
#endif						

#ifndef _WIN32_WINDOWS		// Allow use of features specific to Windows 98 or later.
#define _WIN32_WINDOWS 0x0410 // Change this to the appropriate value to target Windows Me or later.
#endif

#ifndef _WIN32_IE			// Allow use of features specific to IE 6.0 or later.
#define _WIN32_IE 0x0600	// Change this to the appropriate value to target other versions of IE.
#endif

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

#include <stdio.h>
#include <tchar.h>
// TODO: reference additional headers your program requires here
#pragma once

#ifdef  AM_PLATFORM_WINDOWS
    #ifdef AM_BUILD_DLL
        #define AUTOMATICA_API __declspec(dllexport)
    #else
        #define AUTOMATICA_API __declspec(dllimport)
    #endif
#else
    #error Automatica only support Windows!
#endif
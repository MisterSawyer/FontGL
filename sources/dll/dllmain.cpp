// dllmain.cpp : Definiuje punkt wejścia dla aplikacji DLL.
#include <pch.h>
#include <fontgl/fontgl.h>

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    fgl::FontGL fontGlProcess;

    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH: fontGlProcess.OnProcessAttach(); break;
    case DLL_THREAD_ATTACH: fontGlProcess.OnThreadAttach(); break;
    case DLL_THREAD_DETACH: fontGlProcess.OnThreadDetach(); break;
    case DLL_PROCESS_DETACH: fontGlProcess.OnProcessDetach(); break;
    }

    return TRUE;
}


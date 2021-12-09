#pragma once
#ifdef __BuildInExecutable
#define TEXCONVLIBRARYAPI   
#else
#ifdef TEXCONVLIBRARY_EXPORTS
#define TEXCONVLIBRARYAPI __declspec(dllexport)
#else
#define TEXCONVLIBRARYAPI __declspec(dllimport)
#endif
#endif

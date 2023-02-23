#pragma once

#ifdef ENGINECORE_EXPORTS
#define ENGINECORE_API __declspec(dllexport)
#else
#define ENGINECORE_API __declspec(dllimport)
#endif

extern "C" ENGINECORE_API void enginecore_init();
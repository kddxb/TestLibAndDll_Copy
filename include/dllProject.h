#pragma once

#ifdef DLL_PROJECT_HOME
#define DLL_PROJECT_EXPORT __declspec(dllexport)
#else
#define DLL_PROJECT_EXPORT __declspec(dllimport)
#endif

void DLL_PROJECT_EXPORT fun_dll();
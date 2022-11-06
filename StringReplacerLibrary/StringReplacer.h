#pragma once

#ifdef STRINGREPLACERDLL_EXPORTS
#define STRINGREPLACERDLL_API __declspec(dllexport)
#else
#define STRINGREPLACERDLL_API __declspec(dllimport)
#endif 


extern "C" STRINGREPLACERDLL_API void ReplaceString(const char* source, const char* target);

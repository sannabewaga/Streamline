#pragma once
#ifdef SL_PLATFORM_WINDOWS
	#ifdef SL_BUILD_DLL
		#define STREAMLINE_API __declspec(dllexport)
	#else
		#define STREAMLINE_API __declspec(dllimport)
#endif

#else
	#error streamline only support windows
#endif


#pragma once

#ifdef KM_PLATFORM_WINDOWS
	#ifdef KM_BUILD_DLL
		#define KAMI_API __declspec(dllexport)
	#else
		#define KAMI_API __declspec(dllimport)
	#endif
#else
	#error Kami only supports Windows
#endif

#ifdef KM_ENABLE_ASSERTS
	#define KM_ASSERT(x, ...) { if(!(x)) { KM_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define KM_CORE_ASSERT(x, ...) { if(!(x)) { KM_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define KM_ASSERT(x, ...)
	#define KM_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)
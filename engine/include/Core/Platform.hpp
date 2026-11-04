/** Header file used to define the Platform-specific Macros and Definitions */

#if defined(_WIN32) 
	#if defined(_WIN64)
		#define PLATFORM_WINDOWS_64
	#else
		#define PLATFORM_WINDOWS_32
	#endif
#endif
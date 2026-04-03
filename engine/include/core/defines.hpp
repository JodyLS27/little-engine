//
// Created by Jody Stocks on 4/2/26.
// Description: This file is used to house all Global Macros for the Engine.
//

#pragma once

#ifdef RELEASE
// ------- LOGGING -------
// Only trigger a crash and error reporting
    #define LL_LOG_FATAL(msg) do{ engine::core::Logger::ll_log_fatal(msg, __FILE__, __LINE__); } while(0)
    #define LL_LOG_ERROR(msg) do{ engine::core::Logger::ll_log_error(msg, __FILE__, __LINE__); } while(0)
    #define LL_LOG_WARNING(msg)
    #define LL_LOG_INFO(msg)
// ------- LOGGING -------
#else
// ------- LOGGING -------
// Do all kinds of logging
    #define LL_LOG_FATAL(msg) do{ engine::core::Logger::ll_log_fatal(msg, __FILE__, __LINE__); } while(0)
    #define LL_LOG_ERROR(msg) do{ engine::core::Logger::ll_log_error(msg, __FILE__, __LINE__); } while(0)
    #define LL_LOG_WARNING(msg) do{ engine::core::Logger::ll_log_warning(msg, __FILE__, __LINE__); } while(0)
    #define LL_LOG_INFO(msg) do{ engine::core::Logger::ll_log_info(msg, __FILE__, __LINE__); } while(0)
// ------- LOGGING -------
#endif

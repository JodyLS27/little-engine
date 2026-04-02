//
// Created by jodystocks on 4/2/26.
// Description: This file is used to house all Global Macros for the Engine.
//

#pragma once

#ifdef RELEASE
// ------- LOGGING -------
// Only trigger a crash and error reporting
    #define LL_LOG_FATAL(msg) do{ engine::core::Logger::ll_log_fatal(msgm __FILE__, __LINE__); } while(0)
    #define LL_LOG_ERROR(msg) do{ engine::core::Logger::ll_log_error(msgm __FILE__, __LINE__); } while(0)
    LL_LOG_WARNING (msg)
    LL_LOG_INFO (msg)
// ------- LOGGING -------
#else
// ------- LOGGING -------
// Do all kinds of logging
    #define LL_LOG_FATAL(msg) do{ engine::core::Logger::ll_log_fatal(msgm __FILE__, __LINE__); } while(0)
    #define LL_LOG_ERROR(msg) do{ engine::core::Logger::ll_log_error(msgm __FILE__, __LINE__); } while(0)
    #define LL_LOG_WARNING(msg) do{ engine::core::Logger::ll_log_warning(msgm __FILE__, __LINE__); } while(0)
    #define LL_LOG_INFO(msg) do{ engine::core::Logger::ll_log_info(msgm __FILE__, __LINE__); } while(0)
// ------- LOGGING -------
#endif

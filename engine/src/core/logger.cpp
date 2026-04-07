#include <iostream>
#include "core/logger.hpp"

void engine::core::Logger::ll_log_fatal(const std::string_view message, const char* file, const int line_no)
{
    ll_log(LogLevel::FATAL, message, file, line_no);
}

void engine::core::Logger::ll_log_error(const std::string_view message, const char* file, const int line_no)
{
    ll_log(LogLevel::ERROR, message, file, line_no);
}

void engine::core::Logger::ll_log_warning(const std::string_view message, const char* file, const int line_no)
{
    ll_log(LogLevel::WARNING, message, file, line_no);
}

void engine::core::Logger::ll_log_info(const std::string_view message, const char* file, const int line_no)
{
    ll_log(LogLevel::INFO, message, file, line_no);
}

void engine::core::Logger::ll_log(const LogLevel log_level, const std::string_view message, const char* file,
                                  const int line_no)
{
    // Variables for the output log based on the logLevel
    std::string_view log_colour{};
    std::string_view log_level_display{};

    switch (log_level)
    {
    case LogLevel::FATAL:   log_colour = RED;       log_level_display = "FATAL"; break;
    case LogLevel::ERROR:   log_colour = RED;       log_level_display = "ERROR"; break;
    case LogLevel::WARNING: log_colour = YELLOW;    log_level_display = "WARNING"; break;
    case LogLevel::INFO:    log_colour = BLUE;      log_level_display = "INFO"; break;
    default:                log_colour = RESET;     log_level_display = "MSG"; break;
    }

    std::cout << log_colour << "[" << log_level_display << "]" << " - [" << file << " - L:" << line_no << "]"
        << RESET << "\n\t :: " << message << "\n";
}

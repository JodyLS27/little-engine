#pragma once

#include <string_view>

namespace engine::core
{
    enum class LogLevel
    {
        FATAL = 0,
        ERROR = 1,
        WARNING = 2,
        INFO = 3,
    };

    class Logger
    {
    public:
        Logger() = delete; // No one can create an instance, only implement static methods

        static void ll_log_fatal(std::string_view message);
        static void ll_log_error(std::string_view message);
        static void ll_log_warning(std::string_view message);
        static void ll_log_info(std::string_view message);

    private:
        void ll_log(LogLevel log_level, std::string_view message);

        // Colours for logging
        static constexpr std::string_view RED {"\033[1;31m"};
        static constexpr std::string_view YELLOW {"\033[1;33m"};
        static constexpr std::string_view BLUE {"\033[1;34m"};
        static constexpr std::string_view GREEN {"\033[1;32m"};

    };
}
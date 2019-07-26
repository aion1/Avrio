// Copyright (c) 2019, The Currency Devs

#pragma once

#include <functional>
#include <string>
#include <vector>

namespace Logger
{
    enum LogLevel
 
        DEV = 5,
		    DEBUG = 4,
        INFO = 3,
        WARNING = 2,
        FATAL = 1,
        DISABLED = 0,
    };

    enum Category {
        SYNC,
        TRANSACTIONS,
        FILESYSTEM,
        SAVE,
        DAEMON,
    };

    class Logger {
        public:
            Logger() {};

            void printLog(
                const std::string message,
                const LogLevel level,
                const std::vector<LogCategory> categories) const;

            void setLogLevel(const LogLevel level);

            void setLogCB(
                std::function<void(
                    const std::string prettyMessage,
                    const std::string message,
                    const LogLevel level,
                    const std::vector<LogCategory> categories)> callback);

        private:
            /* Logging is disabled by default */
            LogLevel m_logLevel = DISABLED;

            std::function<void(
                const std::string prettyMessage,
                const std::string message,
                const LogLevel level,
                const std::vector<LogCategory> categories)> m_callback;
    };

    /* Global logger */
    extern Logger logger;
}

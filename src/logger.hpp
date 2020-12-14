#ifndef CCL_LOGGER_H_
#define CCL_LOGGER_H_

#include "string.hpp"

namespace ovr {
    class logger {
        private:
        String name;

        public:
        logger(String name): name(name) {}
        void info(String msg);
        void warn(String msg);
        void error(String msg);
        void fatal(String msg);
        void debug(String msg);
        String getName() {
            return name;
        }
    };
}

#endif
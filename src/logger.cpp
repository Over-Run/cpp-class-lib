#include <iostream>
#include <ctime>
#include "logger.hpp"

using namespace std;
using namespace ovr;

void log(logger *logger, String msg, String level) {
    time_t t;
    time(&t);
    struct tm *tt = localtime(&t);
    cerr << "[" << tt -> tm_hour << ":" << tt -> tm_min << ":" << tt -> tm_sec << "] ["
    << level << "] (" << logger -> getName() << ") " << msg << endl;
    delete &t;
    delete tt;
}
void logger::debug(String msg) {
    log(this, msg, "DEBUG");
}
void logger::info(String msg) {
    log(this, msg, "INFO");
}
void logger::warn(String msg) {
    log(this, msg, "WARN");
}
void logger::error(String msg) {
    log(this, msg, "ERROR");
}
void logger::fatal(String msg) {
    log(this, msg, "FATAL");
}
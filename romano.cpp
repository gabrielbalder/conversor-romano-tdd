#include "romano.hpp"
#include <string>

int romano_para_inteiro(std::string romano) {
    if (romano == "I") {
        return 1;
    }
    if (romano == "V") {
        return 5;
    }
    if (romano == "X") {
        return 10;
    }
    return -1;
}


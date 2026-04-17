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
    if (romano == "L") {
        return 50;
    }
    if (romano == "C") {
        return 100;
    }
    if (romano == "D") {
        return 500;
    }
    if (romano == "M") {
        return 1000;
    }
    return -1;
}

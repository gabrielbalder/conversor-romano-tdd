#include "romano.hpp"
#include <string>

int romano_para_inteiro(std::string romano) {
    if (romano == "I") {
        return 1;
    }
    return -1;
}

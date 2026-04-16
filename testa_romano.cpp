#include <gtest/gtest.h>
#include "romano.hpp"

// Teste 1: O caso mais simples
TEST(RomanoTest, ConverteI) {
    EXPECT_EQ(romano_para_inteiro("I"), 1);
}
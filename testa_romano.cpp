#include <gtest/gtest.h>
#include "romano.hpp"

// Teste 1: O caso mais simples
TEST(RomanoTest, ConverteI) {
    EXPECT_EQ(romano_para_inteiro("I"), 1);
}

// Teste 2: Símbulo V
TEST(RomanoTest, ConvertV) {
    EXPECT_EQ(romano_para_inteiro("V"), 5);
}

// Teste 3: Símbulo X
TEST(RomanoTest, ConvertX) {
    EXPECT_EQ(romano_para_inteiro("X"), 10);
}

// Teste 4: Símbulo L
TEST(RomanoTest, ConvertL) {
    EXPECT_EQ(romano_para_inteiro("L"), 50);
}

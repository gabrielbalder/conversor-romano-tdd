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

// Teste 5: Símbulo C
TEST(RomanoTest, ConvertC) {
    EXPECT_EQ(romano_para_inteiro("C"), 100);
}

// Teste 6: Símbulo D
TEST(RomanoTest, ConvertD) {
    EXPECT_EQ(romano_para_inteiro("D"), 500);
}

// Teste 6: Símbulo M
TEST(RomanoTest, ConvertM) {
    EXPECT_EQ(romano_para_inteiro("M"), 1000);
}

// Teste 8: Soma simples
TEST(RomanoTest, ConverteII) {
    EXPECT_EQ(romano_para_inteiro("II"), 2);
}

// Teste 9: Caso de subtração
TEST(RomanoTest, ConverteIV) {
    EXPECT_EQ(romano_para_inteiro("IV"), 4);
}

// Teste 10: Limite máximo
TEST(RomanoTest, ConverteMMM) {
    EXPECT_EQ(romano_para_inteiro("MMM"), 3000);
}


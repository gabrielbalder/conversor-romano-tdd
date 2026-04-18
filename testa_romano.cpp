#include <gtest/gtest.h>
#include "romano.hpp"

// Teste 1: O caso mais simples
TEST(RomanoTest, ConverteI) {
    EXPECT_EQ(romano_para_inteiro("I"), 1);
}

// Teste 2: Símbolo V
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

// Teste 7: Símbulo M
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

// Teste 11: Caso invalido por repeticao excessiva
TEST(RomanoTest, ConverteIIII) {
    EXPECT_EQ(romano_para_inteiro("IIII"), -1);
}

// Teste 12: Letras de base 5 nao podem repetir
TEST(RomanoTest, InvalidoRepeticaoVLD) {
    EXPECT_EQ(romano_para_inteiro("VV"), -1);
    EXPECT_EQ(romano_para_inteiro("LL"), -1);
    EXPECT_EQ(romano_para_inteiro("DD"), -1);
}

// Teste 13: Letras de base 5 nao podem ser subtraidas
TEST(RomanoTest, InvalidoSubtracaoVLD) {
    EXPECT_EQ(romano_para_inteiro("VX"), -1);
    EXPECT_EQ(romano_para_inteiro("LC"), -1);
    EXPECT_EQ(romano_para_inteiro("DM"), -1);
}

// Teste 14: Subtracao com saltos invalidos
TEST(RomanoTest, InvalidoSubtracaoDistante) {
    EXPECT_EQ(romano_para_inteiro("IL"), -1);
    EXPECT_EQ(romano_para_inteiro("IC"), -1);
    EXPECT_EQ(romano_para_inteiro("XM"), -1);
}


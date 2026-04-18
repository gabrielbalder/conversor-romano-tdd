#include "romano.hpp"
#include <string>

// Função auxiliar para converter um caractere individual
int valor_letra(char letra) {
    switch (letra) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return -1;
    }
}

int romano_para_inteiro(std::string romano) {
    int soma = 0;

    for (size_t i = 0; i < romano.length(); i++) {
        int valor_atual = valor_letra(romano[i]);

        if (valor_atual == -1) {
            return -1;
        }

        soma = soma + valor_atual;
    }

    return soma;
}

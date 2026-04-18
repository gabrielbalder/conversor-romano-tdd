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
    int n = romano.length();

    for (int i = 0; i < n; i++) {
        int atual = valor_letra(romano[i]);

        if (atual == -1) return -1;

        // Se houver uma próxima letra e ela for maior que a atual
        if (i + 1 < n && valor_letra(romano[i + 1]) > atual) {
            // Subtrai
            soma -= atual;
        } else {
            // Soma normal
            soma += atual;
        }
    }
    return soma;
}


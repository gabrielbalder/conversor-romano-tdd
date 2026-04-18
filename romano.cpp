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
    int repeticoes = 1;

    for (int i = 0; i < n; i++) {
        int atual = valor_letra(romano[i]);
        if (atual == -1) return -1;

        // Verifica repeticoes seguidas
        if (i > 0 && romano[i] == romano[i-1]) {
            repeticoes++;
            if (repeticoes > 3) return -1; // Erro: IIII, XXXX, etc
        } else {
            repeticoes = 1;
        }

        if (i + 1 < n && valor_letra(romano[i + 1]) > atual) {
            soma -= atual;
        } else {
            soma += atual;
        }
    }
    return soma;
}


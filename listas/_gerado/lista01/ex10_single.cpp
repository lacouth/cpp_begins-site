// ex10 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX10_H
#define EX10_H

// Retorna a soma dos algarismos de n (n >= 0).
int soma_digitos(int n);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int soma_digitos(int n) {
    // TODO: enquanto n for maior que zero, some o ultimo algarismo
    // (n % 10) e descarte-o (n = n / 10).
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(soma_digitos(253) == 10);
    assert(soma_digitos(7) == 7);
    assert(soma_digitos(1000) == 1);
    assert(soma_digitos(0) == 0);
    assert(soma_digitos(999) == 27);
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

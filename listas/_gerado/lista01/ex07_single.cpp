// ex07 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX07_H
#define EX07_H

// Retorna a soma dos quadrados de a e b.
int soma_quadrados(int a, int b);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int soma_quadrados(int a, int b) {
    // TODO: retorne a*a + b*b.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(soma_quadrados(3, 4) == 25);
    assert(soma_quadrados(0, 5) == 25);
    assert(soma_quadrados(-2, 2) == 8);
    assert(soma_quadrados(0, 0) == 0);
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

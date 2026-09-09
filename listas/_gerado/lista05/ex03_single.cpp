// ex03 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <vector>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX03_H
#define EX03_H

// Retorna quantos elementos de v sao pares.
int conta_pares(const std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int conta_pares(const std::vector<int>& v) {
    // TODO: declare o contador ANTES do laco, percorra v e some 1
    // para cada elemento par (x % 2 == 0).
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(conta_pares({1, 2, 3, 4}) == 2);
    assert(conta_pares({1, 3, 5}) == 0);
    assert(conta_pares({2, 4, 6}) == 3);
    assert(conta_pares({}) == 0);

    // zero e par; negativos pares tambem contam
    assert(conta_pares({0, -2, -3}) == 2);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

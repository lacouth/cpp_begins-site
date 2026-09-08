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

// Retorna um novo vector so com os elementos pares de v, na mesma ordem.
std::vector<int> filtra_pares(const std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::vector<int> filtra_pares(const std::vector<int>& v) {
    // TODO: monte um novo vector so com os elementos pares de v (use push_back).
    return {};
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<int> esperado1 = {2, 4, 6};
    assert(filtra_pares({1, 2, 3, 4, 5, 6}) == esperado1);

    std::vector<int> esperado2 = {};
    assert(filtra_pares({1, 3, 5}) == esperado2);

    std::vector<int> esperado3 = {2, 4};
    assert(filtra_pares({2, 4}) == esperado3);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

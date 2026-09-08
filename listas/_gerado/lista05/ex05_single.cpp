// ex05 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <vector>
#include <numeric>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX05_H
#define EX05_H

// Retorna a soma dos quadrados dos elementos de v (use std::accumulate).
int soma_quadrados(const std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int soma_quadrados(const std::vector<int>& v) {
    // TODO: use std::accumulate(v.begin(), v.end(), 0, lambda(acumulador, x)).
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(soma_quadrados({1, 2, 3}) == 14);
    assert(soma_quadrados({}) == 0);
    assert(soma_quadrados({5}) == 25);
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

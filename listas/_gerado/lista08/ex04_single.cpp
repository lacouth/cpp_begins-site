// ex04 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <vector>
#include <algorithm>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX04_H
#define EX04_H

// Retorna um novo vector com cada elemento de v dobrado (use std::transform).
std::vector<int> dobra_valores(const std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::vector<int> dobra_valores(const std::vector<int>& v) {
    // TODO: crie um vector "resultado" do mesmo tamanho de v e use
    // std::transform(v.begin(), v.end(), resultado.begin(), lambda).
    return {};
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<int> esperado1 = {2, 4, 6};
    assert(dobra_valores({1, 2, 3}) == esperado1);

    std::vector<int> esperado2 = {};
    assert(dobra_valores({}) == esperado2);

    std::vector<int> esperado3 = {-2, 0, 2};
    assert(dobra_valores({-1, 0, 1}) == esperado3);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

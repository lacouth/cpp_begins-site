// ex09 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX09_H
#define EX09_H

// A MESMA mediana do ex07 da Lista 05 -- agora usando std::sort.
// Recebe por valor porque precisa ordenar uma copia.
double mediana(std::vector<int> v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double mediana(std::vector<int> v) {
    // TODO: trate o vector vazio, ordene com std::sort(v.begin(), v.end())
    // e devolva o elemento do meio (ou a media dos dois centrais, se a
    // quantidade for par -- lembre do / 2.0).
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(std::abs((mediana({3, 1, 2})) - (2.0)) <= (0.0001));
    assert(std::abs((mediana({1, 2})) - (1.5)) <= (0.0001));
    assert(std::abs((mediana({4, 1, 3, 2})) - (2.5)) <= (0.0001));
    assert(std::abs((mediana({5})) - (5.0)) <= (0.0001));
    assert(std::abs((mediana({})) - (0.0)) <= (0.0001));

    std::vector<int> original = {3, 1, 2};
    mediana(original);
    assert((original == std::vector<int>{3, 1, 2}));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

// ex03 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <algorithm>
#include <optional>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX03_H
#define EX03_H

#include <utility>

// Retorna {menor, maior} entre os tres valores.
std::pair<int, int> min_max(int a, int b, int c);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::pair<int, int> min_max(int a, int b, int c) {
    // TODO: monte um pair {menor, maior} entre a, b e c.
    return {0, 0};
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    auto r1 = min_max(3, 9, 5);
    assert(r1.first == 3);
    assert(r1.second == 9);

    auto r2 = min_max(-1, -5, 0);
    assert(r2.first == -5);
    assert(r2.second == 0);

    auto r3 = min_max(4, 4, 4);
    assert(r3.first == 4);
    assert(r3.second == 4);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

// ex04 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX04_H
#define EX04_H

#include <set>

// Retorna um set com os valores que aparecem em a e em b ao mesmo tempo.
std::set<int> interseccao(const std::set<int>& a, const std::set<int>& b);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::set<int> interseccao(const std::set<int>& a, const std::set<int>& b) {
    // TODO: percorra a; para cada elemento, se ele tambem estiver em b
    // (use b.count(elemento)), insira no resultado.
    std::set<int> resultado;
    return resultado;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    std::set<int> esperado1 = {2, 3};
    assert(interseccao({1, 2, 3}, {2, 3, 4}) == esperado1);

    std::set<int> esperado2 = {};
    assert(interseccao({1, 2}, {3, 4}) == esperado2);

    std::set<int> esperado3 = {1, 2};
    assert(interseccao({1, 2}, {1, 2}) == esperado3);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

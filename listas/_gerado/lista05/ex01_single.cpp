// ex01 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX01_H
#define EX01_H

#include <vector>

// Ordena v em ordem crescente (use std::sort).
void ordena_crescente(std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
#include <algorithm>

void ordena_crescente(std::vector<int>& v) {
    // TODO: chame std::sort(v.begin(), v.end());
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    std::vector<int> a = {5, 1, 4, 2};
    ordena_crescente(a);
    std::vector<int> esperado_a = {1, 2, 4, 5};
    assert(a == esperado_a);

    std::vector<int> b = {1};
    ordena_crescente(b);
    std::vector<int> esperado_b = {1};
    assert(b == esperado_b);

    std::vector<int> c = {};
    ordena_crescente(c);
    assert(c.empty());

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

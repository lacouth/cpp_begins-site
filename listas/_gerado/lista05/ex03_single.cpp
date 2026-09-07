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

#include <vector>

// Retorna true se algum elemento de v for negativo (use std::any_of).
bool existe_negativo(const std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
#include <algorithm>

bool existe_negativo(const std::vector<int>& v) {
    // TODO: use std::any_of(v.begin(), v.end(), lambda).
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    assert(existe_negativo({1, -2, 3}));
    assert(!(existe_negativo({1, 2, 3})));
    assert(!(existe_negativo({})));
    assert(existe_negativo({-1}));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

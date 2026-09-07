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

#include <vector>

// Inverte a ordem dos elementos de v, alterando o proprio vector do chamador.
void inverte_vector(std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void inverte_vector(std::vector<int>& v) {
    // TODO: troque v[i] com v[v.size()-1-i] para i indo do inicio ate o meio.
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    std::vector<int> a = {1, 2, 3, 4};
    inverte_vector(a);
    std::vector<int> esperado_a = {4, 3, 2, 1};
    assert(a == esperado_a);

    std::vector<int> b = {1, 2, 3};
    inverte_vector(b);
    std::vector<int> esperado_b = {3, 2, 1};
    assert(b == esperado_b);

    std::vector<int> c = {};
    inverte_vector(c);
    assert(c.empty());

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

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

// Retorna a soma de todos os elementos do vector.
int soma_vector(const std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int soma_vector(const std::vector<int>& v) {
    // TODO: percorra v somando os elementos.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    assert(soma_vector({1, 2, 3}) == 6);
    assert(soma_vector({}) == 0);
    assert(soma_vector({-5, 5}) == 0);
    assert(soma_vector({10}) == 10);
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

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

// Reduz cada preco de "precos" pelo percentual informado (in-place).
void aplica_desconto(std::vector<double>& precos, double percentual = 10.0);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void aplica_desconto(std::vector<double>& precos, double percentual) {
    // TODO: para cada preco p em "precos", atualize p para p * (1 - percentual/100).
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>
#include <cmath>

int main() {
    std::vector<double> precos = {100.0, 50.0};
    aplica_desconto(precos);
    assert(std::abs((precos[0]) - (90.0)) <= (0.0001));
    assert(std::abs((precos[1]) - (45.0)) <= (0.0001));

    aplica_desconto(precos, 50.0);
    assert(std::abs((precos[0]) - (45.0)) <= (0.0001));
    assert(std::abs((precos[1]) - (22.5)) <= (0.0001));

    std::vector<double> zero = {10.0};
    aplica_desconto(zero, 0.0);
    assert(std::abs((zero[0]) - (10.0)) <= (0.0001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

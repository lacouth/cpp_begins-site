// ex04 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <vector>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX04_H
#define EX04_H

// Retorna a media aritmetica dos valores de v, ou 0.0 se v estiver vazio.
double media(const std::vector<double>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double media(const std::vector<double>& v) {
    // TODO: trate primeiro o vector vazio (devolva 0.0, senao ha divisao
    // por zero). Depois acumule a soma num double e divida por v.size().
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(std::abs((media({8.0, 7.0, 10.0})) - (8.3333333)) <= (0.0001));
    assert(std::abs((media({5.0})) - (5.0)) <= (0.0001));
    assert(std::abs((media({2.0, 3.0})) - (2.5)) <= (0.0001));

    // vector vazio nao pode dividir por zero
    assert(std::abs((media({})) - (0.0)) <= (0.0001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

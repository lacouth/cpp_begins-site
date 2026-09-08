// ex03 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX03_H
#define EX03_H

// Retorna preco * taxa. Se taxa nao for informada, usa 1.1 (10% de acrescimo).
double preco_final(double preco, double taxa = 1.1);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double preco_final(double preco, double taxa) {
    // TODO: retorne preco * taxa.
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(std::abs((preco_final(100.0)) - (110.0)) <= (0.0001));
    assert(std::abs((preco_final(100.0, 1.0)) - (100.0)) <= (0.0001));
    assert(std::abs((preco_final(200.0, 1.5)) - (300.0)) <= (0.0001));
    assert(std::abs((preco_final(0.0)) - (0.0)) <= (0.0001));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

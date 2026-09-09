// ex08 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX08_H
#define EX08_H

// Retorna a media geometrica de a e b: a raiz quadrada de (a * b).
double media_geometrica(double a, double b);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double media_geometrica(double a, double b) {
    // TODO: multiplique a por b e devolva a raiz quadrada (std::sqrt) do produto.
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(std::abs((media_geometrica(4.0, 9.0)) - (6.0)) <= (0.0001));
    assert(std::abs((media_geometrica(2.0, 8.0)) - (4.0)) <= (0.0001));
    assert(std::abs((media_geometrica(5.0, 5.0)) - (5.0)) <= (0.0001));
    assert(std::abs((media_geometrica(1.0, 0.0)) - (0.0)) <= (0.0001));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

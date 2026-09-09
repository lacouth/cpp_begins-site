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

// Calcula a raiz quadrada de numero e guarda no endereco apontado por resultado.
// Se numero for negativo, guarda -1.0 (nao ha raiz quadrada real).
void raiz_quadrada(double numero, double* resultado);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void raiz_quadrada(double numero, double* resultado) {
    // TODO: se numero for negativo, guarde -1.0 em *resultado.
    // Caso contrario, guarde std::sqrt(numero).
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    double r = 0.0;

    raiz_quadrada(9.0, &r);
    assert(std::abs((r) - (3.0)) <= (0.0001));

    raiz_quadrada(0.0, &r);
    assert(std::abs((r) - (0.0)) <= (0.0001));

    raiz_quadrada(2.0, &r);
    assert(std::abs((r) - (1.41421356)) <= (0.0001));

    raiz_quadrada(-4.0, &r);
    assert(std::abs((r) - (-1.0)) <= (0.0001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

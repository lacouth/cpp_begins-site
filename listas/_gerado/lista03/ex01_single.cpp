// ex01 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX01_H
#define EX01_H

struct Intervalo {
    double inicio;
    double fim;

    double duracao() const;
    bool contem(double valor) const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double Intervalo::duracao() const {
    // TODO: retorne fim - inicio.
    return 0.0;
}

bool Intervalo::contem(double valor) const {
    // TODO: retorne true se valor estiver entre inicio e fim,
    // incluindo as duas pontas. Sao DUAS comparacoes, ligadas por &&.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    Intervalo aula{8.0, 10.0};
    assert(std::abs(aula.duracao() - 2.0) <= 0.0001);

    assert(aula.contem(9.0));
    assert(aula.contem(8.0));    // a ponta de baixo conta
    assert(aula.contem(10.0));   // a ponta de cima tambem
    assert(!aula.contem(7.9));
    assert(!aula.contem(11.0));

    // intervalo com inicio negativo
    Intervalo temperatura{-5.0, 5.0};
    assert(std::abs(temperatura.duracao() - 10.0) <= 0.0001);
    assert(temperatura.contem(0.0));
    assert(temperatura.contem(-5.0));
    assert(!temperatura.contem(-6.0));

    // intervalo de duracao zero: contem apenas o proprio ponto
    Intervalo instante{3.0, 3.0};
    assert(std::abs(instante.duracao() - 0.0) <= 0.0001);
    assert(instante.contem(3.0));
    assert(!instante.contem(3.1));

    // os metodos sao const: precisam funcionar sobre uma referencia const
    const Intervalo& constante = aula;
    assert(constante.contem(9.0));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

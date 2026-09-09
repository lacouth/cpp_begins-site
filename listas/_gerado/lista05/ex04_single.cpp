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

// Retorna a media dos valores maiores que zero em v,
// ou 0.0 se nao houver nenhum positivo.
double media_dos_positivos(const std::vector<double>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double media_dos_positivos(const std::vector<double>& v) {
    // TODO: declare a soma (double) e o contador (int) antes do laco.
    // Percorra v: para cada valor > 0, some ao acumulador e incremente
    // o contador. No fim, se o contador for 0, devolva 0.0;
    // senao devolva soma / contador.
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
static bool perto(double a, double b) {
    return std::fabs(a - b) < 1e-9;
}

int main() {
    assert(perto(media_dos_positivos({8.0, -3.0, 10.0}), 9.0));

    // todos positivos: a media e a do vector inteiro
    assert(perto(media_dos_positivos({2.0, 4.0}), 3.0));

    // nenhum positivo: 0.0, e nao uma divisao por zero
    assert(perto(media_dos_positivos({-1.0, -2.0}), 0.0));

    // o zero NAO conta como positivo
    assert(perto(media_dos_positivos({0.0, 6.0}), 6.0));
    assert(perto(media_dos_positivos({0.0, 0.0}), 0.0));

    // vector vazio
    std::vector<double> vazio;
    assert(perto(media_dos_positivos(vazio), 0.0));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

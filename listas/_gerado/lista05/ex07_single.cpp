// ex07 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <vector>
#include <algorithm>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX07_H
#define EX07_H

// Remove do proprio vector todas as leituras fora da faixa [minimo, maximo],
// preservando a ordem das que permanecem.
void filtra_faixa(std::vector<double>& leituras, double minimo, double maximo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void filtra_faixa(std::vector<double>& leituras, double minimo, double maximo) {
    // TODO: use std::remove_if com uma lambda que devolve true para as leituras
    // fora da faixa, e depois leituras.erase(...) ate leituras.end().
    // A lambda precisa capturar minimo e maximo: [minimo, maximo](double x) { ... }
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<double> tensoes = {5.0, 127.0, 250.0, 220.0};
    filtra_faixa(tensoes, 10.0, 240.0);
    assert(tensoes.size() == 2);
    assert(tensoes[0] == 127.0);
    assert(tensoes[1] == 220.0);

    // Os limites entram: a faixa e fechada.
    std::vector<double> limites = {10.0, 240.0};
    filtra_faixa(limites, 10.0, 240.0);
    assert(limites.size() == 2);

    std::vector<double> nenhuma_valida = {1.0, 2.0, 999.0};
    filtra_faixa(nenhuma_valida, 10.0, 240.0);
    assert(nenhuma_valida.empty());

    std::vector<double> vazio;
    filtra_faixa(vazio, 10.0, 240.0);
    assert(vazio.empty());

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

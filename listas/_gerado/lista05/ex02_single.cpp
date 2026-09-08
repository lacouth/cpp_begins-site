// ex02 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX02_H
#define EX02_H

// Retorna quantos elementos de v sao maiores que "limite" (use std::count_if).
int conta_maiores_que(const std::vector<int>& v, int limite);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int conta_maiores_que(const std::vector<int>& v, int limite) {
    // TODO: use std::count_if(v.begin(), v.end(), lambda) e retorne o resultado
    // (o retorno de count_if e um inteiro grande o suficiente; converta para int).
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(conta_maiores_que({1, 5, 8, 3, 9}, 4) == 3);
    assert(conta_maiores_que({1, 2, 3}, 10) == 0);
    assert(conta_maiores_que({}, 0) == 0);
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

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

// Retorna true se todas as notas forem >= 6.0 (use std::all_of).
bool todos_aprovados(const std::vector<double>& notas);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool todos_aprovados(const std::vector<double>& notas) {
    // TODO: use std::all_of(notas.begin(), notas.end(), lambda).
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(todos_aprovados({7.0, 8.5, 6.0}));
    assert(!(todos_aprovados({7.0, 5.9})));
    assert(todos_aprovados({}));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

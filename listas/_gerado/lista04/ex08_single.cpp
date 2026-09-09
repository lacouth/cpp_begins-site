// ex08 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <vector>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX08_H
#define EX08_H

// Retorna a soma dos elementos da diagonal principal de uma matriz quadrada
// (os elementos em que linha == coluna).
int soma_diagonal(const std::vector<std::vector<int>>& matriz);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int soma_diagonal(const std::vector<std::vector<int>>& matriz) {
    // TODO: percorra i de 0 ate matriz.size() - 1 e acumule matriz[i][i].
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(soma_diagonal({{1, 2}, {3, 4}}) == 5);
    assert(soma_diagonal({{1, 0, 0}, {0, 2, 0}, {0, 0, 3}}) == 6);
    assert(soma_diagonal({{7}}) == 7);
    assert(soma_diagonal({{-1, 5}, {5, -2}}) == -3);
    assert(soma_diagonal({}) == 0);
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

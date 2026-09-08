// ex05 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX05_H
#define EX05_H

// Retorna a soma de todos os elementos da matriz (vector de vector).
int soma_matriz(const std::vector<std::vector<int>>& matriz);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int soma_matriz(const std::vector<std::vector<int>>& matriz) {
    // TODO: percorra cada linha e, dentro dela, cada elemento, somando tudo.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(soma_matriz({{1, 2}, {3, 4}}) == 10);
    assert(soma_matriz({{5}}) == 5);
    assert(soma_matriz({}) == 0);
    assert(soma_matriz({{1, 1, 1}, {1, 1, 1}}) == 6);
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

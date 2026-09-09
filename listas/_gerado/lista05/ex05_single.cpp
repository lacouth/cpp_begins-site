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

// Ordena v em ordem crescente, no proprio vector, usando bubble sort
// (comparar vizinhos e trocar). Nao use std::sort.
void bubble_sort(std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void bubble_sort(std::vector<int>& v) {
    // TODO: guarde o tamanho num int n antes do laco.
    // Repita passadas comparando v[i] com v[i + 1] e trocando quando
    // estiverem fora de ordem. Voce vai precisar de uma variavel
    // temporaria para a troca.
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<int> a = {3, 1, 2};
    bubble_sort(a);
    assert((a == std::vector<int>{1, 2, 3}));

    std::vector<int> b = {5, 4, 3, 2, 1};
    bubble_sort(b);
    assert((b == std::vector<int>{1, 2, 3, 4, 5}));

    // ja ordenado continua ordenado
    std::vector<int> c = {1, 2, 3};
    bubble_sort(c);
    assert((c == std::vector<int>{1, 2, 3}));

    // repetidos e negativos
    std::vector<int> d = {2, -1, 2, 0};
    bubble_sort(d);
    assert((d == std::vector<int>{-1, 0, 2, 2}));

    // um elemento e vazio nao podem estourar
    std::vector<int> e = {7};
    bubble_sort(e);
    assert((e == std::vector<int>{7}));

    std::vector<int> vazio;
    bubble_sort(vazio);
    assert(vazio.empty());

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

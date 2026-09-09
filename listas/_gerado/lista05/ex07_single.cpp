// ex07 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX07_H
#define EX07_H

// Insere valor em v (que ja esta ordenado de forma crescente),
// mantendo v ordenado.
void insere_ordenado(std::vector<int>& v, int valor);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void insere_ordenado(std::vector<int>& v, int valor) {
    // TODO:
    // 1. v.push_back(valor) -- so para abrir uma posicao no fim.
    // 2. guarde em i o indice da ultima posicao (tamanho - 1, num int).
    // 3. enquanto i > 0 e v[i - 1] > valor: v[i] = v[i - 1]; i--;
    // 4. v[i] = valor;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    // no meio
    std::vector<int> v = {1, 3, 7};
    insere_ordenado(v, 5);
    assert((v == std::vector<int>{1, 3, 5, 7}));

    // no comeco: o laco tem que andar ate o indice 0
    insere_ordenado(v, 0);
    assert((v == std::vector<int>{0, 1, 3, 5, 7}));

    // no fim: o laco nao anda nenhuma vez
    insere_ordenado(v, 9);
    assert((v == std::vector<int>{0, 1, 3, 5, 7, 9}));

    // vector vazio
    std::vector<int> vazio;
    insere_ordenado(vazio, 42);
    assert((vazio == std::vector<int>{42}));

    // valor repetido: o vector continua ordenado e cresce de tamanho
    std::vector<int> repetidos = {2, 2, 5};
    insere_ordenado(repetidos, 2);
    assert((repetidos == std::vector<int>{2, 2, 2, 5}));

    // negativos
    std::vector<int> negativos = {-5, -1, 4};
    insere_ordenado(negativos, -3);
    assert((negativos == std::vector<int>{-5, -3, -1, 4}));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

// ex09 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX09_H
#define EX09_H

// Escreve em "valor" o k-esimo menor elemento de "v". k comeca em 1.
// Devolve true se k estiver em [1, v.size()]; devolve false e nao mexe em
// "valor" caso contrario.
// Recebe o vector por valor porque precisa ordenar uma copia.
bool k_esimo_menor(std::vector<int> v, int k, int& valor);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool k_esimo_menor(std::vector<int> v, int k, int& valor) {
    // TODO:
    // 1. se k < 1 ou k > v.size(), devolva false.
    // 2. cole aqui o bubble sort do ex05 como funcao auxiliar e ordene "v"
    //    (que e a sua copia, nao o vector do chamador).
    // 3. escreva v[k - 1] em "valor" e devolva true.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<int> v = {7, 3, 9, 1};
    int r = 0;

    assert(k_esimo_menor(v, 1, r));
    assert(r == 1);
    assert(k_esimo_menor(v, 2, r));
    assert(r == 3);
    assert(k_esimo_menor(v, 3, r));
    assert(r == 7);
    assert(k_esimo_menor(v, 4, r));
    assert(r == 9);

    // k fora do intervalo: devolve false e nao mexe no parametro de saida
    r = 99;
    assert(!k_esimo_menor(v, 0, r));
    assert(!k_esimo_menor(v, 5, r));
    assert(!k_esimo_menor(v, -1, r));
    assert(r == 99);

    // o vector de quem chamou NAO pode ter sido ordenado
    assert((v == std::vector<int>{7, 3, 9, 1}));

    // repetidos ocupam posicoes proprias
    assert(k_esimo_menor({5, 1, 5}, 2, r));
    assert(r == 5);
    assert(k_esimo_menor({5, 1, 5}, 3, r));
    assert(r == 5);

    // negativos
    assert(k_esimo_menor({-2, -9, 0}, 1, r));
    assert(r == -9);

    // um elemento so
    assert(k_esimo_menor({42}, 1, r));
    assert(r == 42);

    // vector vazio: qualquer k esta fora do intervalo
    std::vector<int> vazio;
    assert(!k_esimo_menor(vazio, 1, r));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

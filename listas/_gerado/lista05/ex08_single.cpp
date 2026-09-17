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

// Escreve em "valor" o elemento mais frequente de "v" (o primeiro, em caso de
// empate). Devolve true se havia o que responder; devolve false e nao mexe em
// "valor" se o vector estiver vazio.
bool moda(const std::vector<int>& v, int& valor);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool moda(const std::vector<int>& v, int& valor) {
    // TODO:
    // 1. vector vazio -> devolva false.
    // 2. para cada i, conte quantas vezes v[i] aparece no vector inteiro
    //    (laco interno, com o contador zerado a cada i).
    // 3. guarde o melhor até agora; use > , e nao >= , para o empate
    //    ficar com o valor que aparece primeiro.
    // 4. escreva o melhor em "valor" e devolva true.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    int m = 0;

    assert(moda({1, 2, 2, 3}, m));
    assert(m == 2);

    // empate: vale o que aparece PRIMEIRO (quem usou >= devolve 2)
    assert(moda({1, 1, 2, 2}, m));
    assert(m == 1);

    // todos distintos: todos empatam com 1, vence o primeiro
    assert(moda({4, 7, 9}, m));
    assert(m == 4);

    // um elemento so
    assert(moda({7}, m));
    assert(m == 7);

    // negativos e a moda no fim do vector
    assert(moda({-1, 3, 3, -1, 3}, m));
    assert(m == 3);

    // valores repetidos espalhados, nao contiguos
    assert(moda({5, 8, 5, 8, 5}, m));
    assert(m == 5);

    // vazio: devolve false e nao mexe no parametro de saida
    m = 99;
    std::vector<int> vazio;
    assert(!moda(vazio, m));
    assert(m == 99);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

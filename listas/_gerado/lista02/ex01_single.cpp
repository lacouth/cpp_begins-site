// ex01 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX01_H
#define EX01_H

// Dobra o valor de x, alterando a variavel do chamador (passagem por referencia).
void dobra_valor(int& x);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void dobra_valor(int& x) {
    // TODO: dobre o valor de x (ex: x = x * 2;)
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    int a = 5;
    dobra_valor(a);
    assert(a == 10);

    int b = 0;
    dobra_valor(b);
    assert(b == 0);

    int c = -3;
    dobra_valor(c);
    assert(c == -6);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

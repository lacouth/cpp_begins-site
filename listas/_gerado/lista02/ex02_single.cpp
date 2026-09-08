// ex02 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX02_H
#define EX02_H

// Troca os valores de a e b entre si.
void troca(int& a, int& b);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void troca(int& a, int& b) {
    // TODO: troque os valores de a e b (voce vai precisar de uma variavel auxiliar).
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    int a = 1, b = 2;
    troca(a, b);
    assert(a == 2);
    assert(b == 1);

    int c = -5, d = 5;
    troca(c, d);
    assert(c == 5);
    assert(d == -5);

    int e = 7, f = 7;
    troca(e, f);
    assert(e == 7);
    assert(f == 7);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

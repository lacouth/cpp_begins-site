// ex09 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX09_H
#define EX09_H

// Calcula a divisao inteira de a por b, devolvendo os DOIS resultados
// pelos parametros de referencia. Assume b diferente de zero.
void divide(int a, int b, int& quociente, int& resto);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void divide(int a, int b, int& quociente, int& resto) {
    // TODO: quociente recebe a / b, resto recebe a % b.
    // Como sao referencias, atribuir aqui altera as variaveis do chamador.
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    int q = 0, r = 0;

    divide(17, 5, q, r);
    assert(q == 3);
    assert(r == 2);

    divide(20, 4, q, r);
    assert(q == 5);
    assert(r == 0);

    divide(3, 10, q, r);
    assert(q == 0);
    assert(r == 3);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

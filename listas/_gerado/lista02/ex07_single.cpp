// ex07 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX07_H
#define EX07_H

// Incrementa o valor apontado por sobe e decrementa o valor apontado por desce.
void ajusta_valor(int* sobe, int* desce);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void ajusta_valor(int* sobe, int* desce) {
    // TODO: some 1 ao valor apontado por sobe e subtraia 1 do valor
    // apontado por desce (lembre do * antes do nome do ponteiro).
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    int a = 10, b = 10;
    ajusta_valor(&a, &b);
    assert(a == 11);
    assert(b == 9);

    int c = 0, d = 0;
    ajusta_valor(&c, &d);
    assert(c == 1);
    assert(d == -1);

    int e = -5, f = -5;
    ajusta_valor(&e, &f);
    assert(e == -4);
    assert(f == -6);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

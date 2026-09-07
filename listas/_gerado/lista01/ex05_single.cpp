// ex05 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <algorithm>
#include <optional>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX05_H
#define EX05_H

// Retorna o maior entre tres inteiros.
int maior_de_tres(int a, int b, int c);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int maior_de_tres(int a, int b, int c) {
    // TODO: retorne o maior dos tres valores.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    assert(maior_de_tres(3, 9, 5) == 9);
    assert(maior_de_tres(-1, -5, -2) == -1);
    assert(maior_de_tres(4, 4, 4) == 4);
    assert(maior_de_tres(0, 0, 1) == 1);
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

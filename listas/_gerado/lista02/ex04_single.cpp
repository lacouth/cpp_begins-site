// ex04 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX04_H
#define EX04_H

// Duas versoes sobrecarregadas: cada uma retorna o dobro do valor recebido.
int dobro(int x);
double dobro(double x);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int dobro(int x) {
    // TODO: retorne o dobro de x (versao int).
    return 0;
}

double dobro(double x) {
    // TODO: retorne o dobro de x (versao double).
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>
#include <cmath>

int main() {
    assert(dobro(5) == 10);
    assert(dobro(0) == 0);
    assert(dobro(-3) == -6);
    assert(std::abs((dobro(2.5)) - (5.0)) <= (0.0001));
    assert(std::abs((dobro(0.0)) - (0.0)) <= (0.0001));
    assert(std::abs((dobro(-1.5)) - (-3.0)) <= (0.0001));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

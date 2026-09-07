// ex02 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX02_H
#define EX02_H

// Retorna a media aritmetica de tres notas.
double media(double a, double b, double c);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double media(double a, double b, double c) {
    // TODO: use "auto" para a variavel de resultado e retorne a media.
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>
#include <cmath>

int main() {
    assert(std::abs((media(10.0, 10.0, 10.0)) - (10.0)) <= (0.0001));
    assert(std::abs((media(0.0, 0.0, 0.0)) - (0.0)) <= (0.0001));
    assert(std::abs((media(10.0, 7.0, 4.0)) - (7.0)) <= (0.0001));
    assert(std::abs((media(5.0, 6.0, 7.0)) - (6.0)) <= (0.0001));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

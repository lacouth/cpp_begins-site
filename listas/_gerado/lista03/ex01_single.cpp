// ex01 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX01_H
#define EX01_H

struct Retangulo {
    double largura;
    double altura;

    double area() const;
    double perimetro() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double Retangulo::area() const {
    // TODO: retorne largura * altura.
    return 0.0;
}

double Retangulo::perimetro() const {
    // TODO: retorne 2 * (largura + altura).
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>
#include <cmath>

int main() {
    Retangulo r1{4.0, 3.0};
    assert(std::abs((r1.area()) - (12.0)) <= (0.0001));
    assert(std::abs((r1.perimetro()) - (14.0)) <= (0.0001));

    Retangulo r2{5.0, 5.0};
    assert(std::abs((r2.area()) - (25.0)) <= (0.0001));
    assert(std::abs((r2.perimetro()) - (20.0)) <= (0.0001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

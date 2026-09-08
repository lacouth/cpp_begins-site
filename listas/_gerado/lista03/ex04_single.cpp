// ex04 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <optional>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX04_H
#define EX04_H

// Retorna a / b, ou nullopt se b for zero.
std::optional<double> divide_seguro(double a, double b);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::optional<double> divide_seguro(double a, double b) {
    // TODO: se b for 0, retorne std::nullopt. Senao, retorne a / b.
    return std::nullopt;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    auto r1 = divide_seguro(10.0, 2.0);
    assert(r1.has_value());
    assert(std::abs((r1.value()) - (5.0)) <= (0.0001));

    auto r2 = divide_seguro(5.0, 0.0);
    assert(!r2.has_value());

    auto r3 = divide_seguro(9.0, 3.0);
    assert(r3.has_value());
    assert(std::abs((r3.value()) - (3.0)) <= (0.0001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

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

class RetanguloValidado {
private:
    double largura_;
    double altura_;

public:
    RetanguloValidado(double largura, double altura);

    double area() const;
    double perimetro() const;
    bool eh_quadrado() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
RetanguloValidado::RetanguloValidado(double largura, double altura)
    // TODO: use a lista de inicializacao para definir largura_ e altura_,
    // trocando valores negativos por 0 (ex: largura >= 0 ? largura : 0.0).
    : largura_(0.0), altura_(0.0) {
}

double RetanguloValidado::area() const {
    // TODO: retorne largura_ * altura_.
    return 0.0;
}

double RetanguloValidado::perimetro() const {
    // TODO: retorne 2 * (largura_ + altura_).
    return 0.0;
}

bool RetanguloValidado::eh_quadrado() const {
    // TODO: retorne true se largura_ == altura_.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>
#include <cmath>

int main() {
    RetanguloValidado r1(4.0, 3.0);
    assert(std::abs((r1.area()) - (12.0)) <= (0.0001));
    assert(!(r1.eh_quadrado()));

    RetanguloValidado r2(-5.0, 5.0);
    assert(std::abs((r2.area()) - (0.0)) <= (0.0001));

    RetanguloValidado r3(5.0, 5.0);
    assert(r3.eh_quadrado());
    assert(std::abs((r3.perimetro()) - (20.0)) <= (0.0001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

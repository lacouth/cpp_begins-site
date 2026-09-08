// ex03 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX03_H
#define EX03_H

class Vetor2D {
private:
    double x_;
    double y_;

public:
    Vetor2D(double x, double y) : x_(x), y_(y) {}

    double x() const { return x_; }
    double y() const { return y_; }

    Vetor2D operator+(const Vetor2D& outro) const;
    bool operator==(const Vetor2D& outro) const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
Vetor2D Vetor2D::operator+(const Vetor2D& outro) const {
    // TODO: retorne um novo Vetor2D com x_+outro.x_ e y_+outro.y_.
    return Vetor2D(0.0, 0.0);
}

bool Vetor2D::operator==(const Vetor2D& outro) const {
    // TODO: retorne true se x_ == outro.x_ e y_ == outro.y_.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    Vetor2D a(1.0, 2.0);
    Vetor2D b(3.0, 4.0);
    Vetor2D c = a + b;
    assert(std::abs((c.x()) - (4.0)) <= (0.0001));
    assert(std::abs((c.y()) - (6.0)) <= (0.0001));

    assert(!(a == b));
    Vetor2D d(1.0, 2.0);
    assert(a == d);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

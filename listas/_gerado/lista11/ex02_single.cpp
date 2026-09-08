// ex02 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX02_H
#define EX02_H

class Forma {
public:
    virtual double area() const = 0;
    virtual ~Forma() {}
};

class Circulo : public Forma {
private:
    double raio_;

public:
    explicit Circulo(double raio) : raio_(raio) {}
    double area() const override;
};

class Retangulo : public Forma {
private:
    double largura_;
    double altura_;

public:
    Retangulo(double largura, double altura) : largura_(largura), altura_(altura) {}
    double area() const override;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double Circulo::area() const {
    // TODO: retorne 3.14159 * raio_ * raio_.
    return 0.0;
}

double Retangulo::area() const {
    // TODO: retorne largura_ * altura_.
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    Circulo c(2.0);
    assert(std::abs((c.area()) - (12.56636)) <= (0.001));

    Retangulo r(4.0, 5.0);
    assert(std::abs((r.area()) - (20.0)) <= (0.0001));

    Forma& f = c;
    assert(std::abs((f.area()) - (12.56636)) <= (0.001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

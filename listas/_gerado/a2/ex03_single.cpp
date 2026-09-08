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

class Funcionario {
public:
    virtual double salario() const = 0;
    virtual ~Funcionario() {}
};

class Vendedor : public Funcionario {
private:
    int vendas_;

public:
    explicit Vendedor(int vendas) : vendas_(vendas) {}
    double salario() const override;
};

class Gerente : public Funcionario {
public:
    double salario() const override;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double Vendedor::salario() const {
    // TODO: retorne 1500.0 + 100.0 * vendas_.
    return 0.0;
}

double Gerente::salario() const {
    // TODO: retorne 4000.0.
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    Vendedor v(3);
    assert(std::abs((v.salario()) - (1800.0)) <= (0.0001));

    Gerente g;
    assert(std::abs((g.salario()) - (4000.0)) <= (0.0001));

    Funcionario& f = v;
    assert(std::abs((f.salario()) - (1800.0)) <= (0.0001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

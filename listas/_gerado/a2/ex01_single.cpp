// ex01 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX01_H
#define EX01_H

class Ingresso {
private:
    double preco_;
    bool usado_;

public:
    explicit Ingresso(double preco);

    double preco() const;
    void usa();
    bool esta_usado() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
Ingresso::Ingresso(double preco)
    // TODO: use a lista de inicializacao para definir preco_ (trocando
    // negativo por 0.0) e usado_ (comeca false).
    : preco_(0.0), usado_(false) {
}

double Ingresso::preco() const {
    // TODO: retorne preco_.
    return 0.0;
}

void Ingresso::usa() {
    // TODO: marque usado_ como true.
}

bool Ingresso::esta_usado() const {
    // TODO: retorne usado_.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    Ingresso i(50.0);
    assert(std::abs((i.preco()) - (50.0)) <= (0.0001));
    assert(!(i.esta_usado()));
    i.usa();
    assert(i.esta_usado());

    Ingresso invalido(-10.0);
    assert(std::abs((invalido.preco()) - (0.0)) <= (0.0001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

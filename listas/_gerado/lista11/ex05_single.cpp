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

class Base {
public:
    static inline int destruicoes = 0;

    virtual ~Base();
};

class Derivada : public Base {
public:
    static inline int destruicoes = 0;

    ~Derivada() override;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
Base::~Base() {
    // TODO: incremente Base::destruicoes.
}

Derivada::~Derivada() {
    // TODO: incremente Derivada::destruicoes.
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    Base::destruicoes = 0;
    Derivada::destruicoes = 0;

    Base* b = new Derivada();
    delete b;

    assert(Base::destruicoes == 1);
    assert(Derivada::destruicoes == 1);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

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

class Contador {
private:
    int valor_;

public:
    Contador() : valor_(0) {}

    void incrementa();
    void decrementa();
    int valor() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void Contador::incrementa() {
    // TODO: some 1 a valor_.
}

void Contador::decrementa() {
    // TODO: subtraia 1 de valor_, mas so se valor_ for maior que 0.
}

int Contador::valor() const {
    // TODO: retorne valor_.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    Contador c;
    c.incrementa();
    c.incrementa();
    c.decrementa();
    assert(c.valor() == 1);

    Contador c2;
    c2.decrementa();
    assert(c2.valor() == 0);

    Contador c3;
    c3.incrementa();
    c3.incrementa();
    c3.incrementa();
    assert(c3.valor() == 3);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

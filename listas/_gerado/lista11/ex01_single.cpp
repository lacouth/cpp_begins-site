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

#include <string>

class Ave {
public:
    virtual std::string som() const = 0;
    virtual ~Ave() {}
};

class Papagaio : public Ave {
public:
    std::string som() const override;
};

class Coruja : public Ave {
public:
    std::string som() const override;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::string Papagaio::som() const {
    // TODO: retorne "Ola!"
    return "";
}

std::string Coruja::som() const {
    // TODO: retorne "Uhu!"
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    Papagaio p;
    Coruja c;
    Ave& a1 = p;
    Ave& a2 = c;
    assert(a1.som() == std::string("Ola!"));
    assert(a2.som() == std::string("Uhu!"));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

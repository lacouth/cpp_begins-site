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

#include <vector>

class PilhaComVector {
private:
    std::vector<int> dados_;

public:
    void empilha(int valor);
    int desempilha();
    int topo() const;
    bool vazia() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void PilhaComVector::empilha(int valor) {
    // TODO: adicione "valor" ao final de dados_.
}

int PilhaComVector::desempilha() {
    // TODO: guarde dados_.back(), remova com pop_back(), retorne o valor guardado.
    return 0;
}

int PilhaComVector::topo() const {
    // TODO: retorne dados_.back().
    return 0;
}

bool PilhaComVector::vazia() const {
    // TODO: retorne dados_.empty().
    return true;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    PilhaComVector p;
    assert(p.vazia());
    p.empilha(1);
    p.empilha(2);
    p.empilha(3);
    assert(!(p.vazia()));
    assert(p.desempilha() == 3);
    assert(p.topo() == 2);
    assert(p.desempilha() == 2);
    assert(p.desempilha() == 1);
    assert(p.vazia());

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

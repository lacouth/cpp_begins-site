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

struct No {
    static inline int total_vivos = 0;

    int valor;
    No* proximo;

    No(int v) : valor(v), proximo(nullptr) { total_vivos++; }
    ~No() { total_vivos--; }
};

class PilhaEficiente {
private:
    No* cabeca_;

public:
    PilhaEficiente() : cabeca_(nullptr) {}
    ~PilhaEficiente();

    void empilha(int valor);
    int desempilha();
    bool vazia() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
PilhaEficiente::~PilhaEficiente() {
    // TODO: percorra a partir de cabeca_, guardando o proximo no ANTES de
    // dar delete no atual, ate atual virar nullptr.
}

void PilhaEficiente::empilha(int valor) {
    // TODO: crie um No(valor) com "new", conecte o proximo dele a cabeca_
    // atual, e atualize cabeca_ para o novo no.
}

int PilhaEficiente::desempilha() {
    // TODO: guarde cabeca_->valor, avance cabeca_ para cabeca_->proximo,
    // de delete no no antigo, e retorne o valor guardado.
    return 0;
}

bool PilhaEficiente::vazia() const {
    // TODO: retorne true se cabeca_ for nullptr.
    return true;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    No::total_vivos = 0;
    {
        PilhaEficiente p;
        assert(p.vazia());
        p.empilha(1);
        p.empilha(2);
        p.empilha(3);
        assert(!(p.vazia()));
        assert(p.desempilha() == 3);
        assert(p.desempilha() == 2);
        assert(No::total_vivos == 1);
        assert(p.desempilha() == 1);
        assert(p.vazia());
    }
    assert(No::total_vivos == 0);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

// ex03 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX03_H
#define EX03_H

struct No {
    static inline int total_vivos = 0;

    int valor;
    No* proximo;

    No(int v) : valor(v), proximo(nullptr) { total_vivos++; }
    ~No() { total_vivos--; }
};

class ListaEncadeada {
private:
    No* cabeca_;

public:
    ListaEncadeada() : cabeca_(nullptr) {}
    ~ListaEncadeada();

    void insere_inicio(int valor);

    int tamanho() const {
        int contagem = 0;
        No* atual = cabeca_;
        while (atual != nullptr) {
            contagem++;
            atual = atual->proximo;
        }
        return contagem;
    }
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
ListaEncadeada::~ListaEncadeada() {
    // TODO: percorra a lista a partir de cabeca_, guardando o proximo no
    // ANTES de dar delete no atual, ate atual virar nullptr.
}

void ListaEncadeada::insere_inicio(int valor) {
    // TODO: crie um novo No(valor) com "new", faca o proximo dele apontar
    // para cabeca_, e atualize cabeca_ para o novo no.
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    No::total_vivos = 0;
    {
        ListaEncadeada l;
        l.insere_inicio(1);
        l.insere_inicio(2);
        l.insere_inicio(3);
        assert(l.tamanho() == 3);
        assert(No::total_vivos == 3);
    }
    assert(No::total_vivos == 0);

    {
        ListaEncadeada l2;
        assert(l2.tamanho() == 0);
    }
    assert(No::total_vivos == 0);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

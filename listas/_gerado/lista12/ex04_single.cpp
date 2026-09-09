// ex04 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX04_H
#define EX04_H

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

    ~ListaEncadeada() {
        No* atual = cabeca_;
        while (atual != nullptr) {
            No* proximo = atual->proximo;
            delete atual;
            atual = proximo;
        }
    }

    void insere_fim(int valor) {
        No* novo = new No(valor);
        if (cabeca_ == nullptr) {
            cabeca_ = novo;
            return;
        }
        No* ultimo = cabeca_;
        while (ultimo->proximo != nullptr) {
            ultimo = ultimo->proximo;
        }
        ultimo->proximo = novo;
    }

    int tamanho() const {
        int contagem = 0;
        No* atual = cabeca_;
        while (atual != nullptr) {
            contagem++;
            atual = atual->proximo;
        }
        return contagem;
    }

    int em(int indice) const {
        No* atual = cabeca_;
        for (int i = 0; i < indice; i++) {
            atual = atual->proximo;
        }
        return atual->valor;
    }

    // O exercicio e este.
    bool remove(int valor);
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool ListaEncadeada::remove(int valor) {
    // TODO:
    // 1. lista vazia (cabeca_ == nullptr): nao ha o que remover, devolva false.
    // 2. o valor esta na cabeca: guarde o no antigo numa variavel, avance
    //    cabeca_ para cabeca_->proximo, de delete no no antigo, devolva true.
    // 3. senao, ande com "anterior" enquanto anterior->proximo nao for nullptr:
    //    se anterior->proximo->valor for o alvo, guarde esse no, religue
    //    anterior->proximo para no->proximo, de delete no no e devolva true.
    // 4. chegou ao fim sem achar: devolva false.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    No::total_vivos = 0;
    {
        ListaEncadeada l;

        // remover de uma lista vazia nao estoura e devolve false
        assert(!(l.remove(1)));

        l.insere_fim(1);
        l.insere_fim(2);
        l.insere_fim(3);
        assert(No::total_vivos == 3);

        // do meio: religa o proximo do anterior
        assert(l.remove(2));
        assert(l.tamanho() == 2);
        assert(l.em(0) == 1);
        assert(l.em(1) == 3);
        assert(No::total_vivos == 2);   // pega o no perdido sem delete

        // valor que nao existe: nada muda
        assert(!(l.remove(99)));
        assert(l.tamanho() == 2);
        assert(No::total_vivos == 2);

        // da cabeca: quem muda e cabeca_, nao o proximo de ninguem
        assert(l.remove(1));
        assert(l.tamanho() == 1);
        assert(l.em(0) == 3);

        // o ultimo elemento, que deixa a lista vazia
        assert(l.remove(3));
        assert(l.tamanho() == 0);
        assert(No::total_vivos == 0);
        assert(!(l.remove(3)));
    }
    assert(No::total_vivos == 0);

    // apenas a PRIMEIRA ocorrencia sai
    No::total_vivos = 0;
    {
        ListaEncadeada l;
        l.insere_fim(7);
        l.insere_fim(4);
        l.insere_fim(7);
        assert(l.remove(7));
        assert(l.tamanho() == 2);
        assert(l.em(0) == 4);
        assert(l.em(1) == 7);
    }
    assert(No::total_vivos == 0);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

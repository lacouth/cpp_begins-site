// ex03 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>

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

    void insere_fim(int valor);

    int tamanho() const {
        int contagem = 0;
        No* atual = cabeca_;
        while (atual != nullptr) {
            contagem++;
            atual = atual->proximo;
        }
        return contagem;
    }

    // Valor guardado na posicao indice (0 e o primeiro no).
    // Assume que o indice existe.
    int em(int indice) const {
        No* atual = cabeca_;
        for (int i = 0; i < indice; i++) {
            atual = atual->proximo;
        }
        return atual->valor;
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

void ListaEncadeada::insere_fim(int valor) {
    // TODO: crie um novo No(valor) com "new".
    // Se cabeca_ for nullptr, a lista esta vazia: o novo no vira a cabeca.
    // Senao, ande com um ponteiro auxiliar ate o no cujo proximo e nullptr
    // (o ultimo) e faca o proximo dele apontar para o novo no.
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    No::total_vivos = 0;
    {
        ListaEncadeada l;
        assert(l.tamanho() == 0);

        // primeira insercao: a lista esta vazia, o no novo vira a cabeca
        l.insere_fim(1);
        assert(l.tamanho() == 1);
        assert(l.em(0) == 1);

        l.insere_fim(2);
        l.insere_fim(3);
        assert(l.tamanho() == 3);
        assert(No::total_vivos == 3);

        // a ordem e a de insercao: quem entrou primeiro fica na frente
        assert(l.em(0) == 1);
        assert(l.em(1) == 2);
        assert(l.em(2) == 3);
    }
    assert(No::total_vivos == 0);

    // lista que nunca recebeu nada: o destrutor nao pode estourar
    {
        ListaEncadeada vazia;
        assert(vazia.tamanho() == 0);
    }
    assert(No::total_vivos == 0);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

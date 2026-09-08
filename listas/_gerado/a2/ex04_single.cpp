// ex04 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX04_H
#define EX04_H

struct No {
    static inline int total_vivos = 0;

    std::string acao;
    No* proximo;

    No(std::string a) : acao(a), proximo(nullptr) { total_vivos++; }
    ~No() { total_vivos--; }
};

class PilhaDeAcoes {
private:
    No* cabeca_;

public:
    PilhaDeAcoes() : cabeca_(nullptr) {}
    ~PilhaDeAcoes();

    void empilha(const std::string& acao);
    std::string desfaz();
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
PilhaDeAcoes::~PilhaDeAcoes() {
    // TODO: percorra a partir de cabeca_, guardando o proximo no ANTES de
    // dar delete no atual, ate atual virar nullptr.
}

void PilhaDeAcoes::empilha(const std::string& acao) {
    // TODO: crie um No(acao) com "new", conecte-o ao inicio da lista
    // (igual insere_inicio da lista encadeada do capitulo 12).
}

std::string PilhaDeAcoes::desfaz() {
    // TODO: guarde cabeca_->acao, avance cabeca_, de delete no no antigo,
    // retorne o valor guardado.
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    No::total_vivos = 0;
    {
        PilhaDeAcoes p;
        p.empilha("digitar");
        p.empilha("colar");
        p.empilha("apagar");
        assert(No::total_vivos == 3);
        assert(p.desfaz() == std::string("apagar"));
        assert(p.desfaz() == std::string("colar"));
        assert(No::total_vivos == 1);
        assert(p.desfaz() == std::string("digitar"));
    }
    assert(No::total_vivos == 0);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

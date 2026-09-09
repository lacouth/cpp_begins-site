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

class FilaEficiente {
private:
    No* inicio_;
    No* fim_;

public:
    FilaEficiente() : inicio_(nullptr), fim_(nullptr) {}
    ~FilaEficiente();

    void enfileira(int valor);
    int desenfileira();
    bool vazia() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
FilaEficiente::~FilaEficiente() {
    // TODO: percorra a partir de inicio_, guardando o proximo no ANTES de
    // dar delete no atual, ate atual virar nullptr.
}

void FilaEficiente::enfileira(int valor) {
    // TODO: crie um No(valor) com "new". Se fim_ for nullptr (fila vazia),
    // inicio_ e fim_ apontam para o novo no. Senao, conecte fim_->proximo
    // ao novo no e atualize fim_.
}

int FilaEficiente::desenfileira() {
    // TODO: guarde inicio_->valor, avance inicio_ para inicio_->proximo,
    // se inicio_ virou nullptr atualize fim_ para nullptr tambem, de
    // delete no no antigo, e retorne o valor guardado.
    return 0;
}

bool FilaEficiente::vazia() const {
    // TODO: retorne true se inicio_ for nullptr.
    return true;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    No::total_vivos = 0;
    {
        FilaEficiente f;
        assert(f.vazia());
        f.enfileira(1);
        f.enfileira(2);
        f.enfileira(3);
        assert(!(f.vazia()));
        assert(f.desenfileira() == 1);
        assert(f.desenfileira() == 2);
        assert(No::total_vivos == 1);

        // esvazia e reenfileira -- testa se fim_ volta a apontar certo
        assert(f.desenfileira() == 3);
        assert(f.vazia());
        f.enfileira(10);
        f.enfileira(20);
        assert(f.desenfileira() == 10);
        assert(f.desenfileira() == 20);
    }
    assert(No::total_vivos == 0);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

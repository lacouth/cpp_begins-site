// ex02 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <vector>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX02_H
#define EX02_H

class FilaComVector {
private:
    std::vector<int> dados_;

public:
    void enfileira(int valor);
    int desenfileira();
    bool vazia() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void FilaComVector::enfileira(int valor) {
    // TODO: adicione "valor" ao final de dados_.
}

int FilaComVector::desenfileira() {
    // TODO: guarde dados_.front(), remova com dados_.erase(dados_.begin()),
    // retorne o valor guardado.
    return 0;
}

bool FilaComVector::vazia() const {
    // TODO: retorne dados_.empty().
    return true;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    FilaComVector f;
    assert(f.vazia());
    f.enfileira(1);
    f.enfileira(2);
    f.enfileira(3);
    assert(!(f.vazia()));
    assert(f.desenfileira() == 1);
    assert(f.desenfileira() == 2);
    assert(f.desenfileira() == 3);
    assert(f.vazia());

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

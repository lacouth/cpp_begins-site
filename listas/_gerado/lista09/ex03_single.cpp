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

class Estoque {
private:
    int quantidade_;

public:
    Estoque() : quantidade_(0) {}

    void adiciona(int quantidade);
    bool remove(int quantidade);
    int quantidade() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void Estoque::adiciona(int quantidade) {
    // TODO: se quantidade > 0, some a quantidade_.
}

bool Estoque::remove(int quantidade) {
    // TODO: se quantidade > 0 e quantidade <= quantidade_, subtraia e retorne true.
    // Caso contrario, nao altere nada e retorne false.
    return false;
}

int Estoque::quantidade() const {
    // TODO: retorne quantidade_.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    Estoque e;
    e.adiciona(10);
    bool ok = e.remove(3);
    assert(e.quantidade() == 7);
    assert(ok);

    bool falhou = e.remove(100);
    assert(e.quantidade() == 7);
    assert(!(falhou));

    e.adiciona(-5);
    assert(e.quantidade() == 7);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

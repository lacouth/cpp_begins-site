// ex02 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <vector>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX02_H
#define EX02_H

class CarrinhoDeCompras {
private:
    std::vector<double> precos_;

public:
    void adiciona_item(double preco);
    double total() const;
    int quantidade_itens() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void CarrinhoDeCompras::adiciona_item(double preco) {
    // TODO: adicione "preco" ao final de precos_.
}

double CarrinhoDeCompras::total() const {
    // TODO: some todos os elementos de precos_.
    return 0.0;
}

int CarrinhoDeCompras::quantidade_itens() const {
    // TODO: retorne o tamanho de precos_.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    CarrinhoDeCompras c;
    c.adiciona_item(10.0);
    c.adiciona_item(25.5);
    assert(std::abs((c.total()) - (35.5)) <= (0.0001));
    assert(c.quantidade_itens() == 2);

    CarrinhoDeCompras copia = c;
    copia.adiciona_item(100.0);
    assert(std::abs((c.total()) - (35.5)) <= (0.0001));
    assert(std::abs((copia.total()) - (135.5)) <= (0.0001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

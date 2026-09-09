// ex09 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX09_H
#define EX09_H

struct Produto {
    std::string nome;
    int quantidade;
    double preco;
};

// Se ja houver um produto com esse nome no inventario, atualiza quantidade e
// preco e retorna false. Caso contrario, acrescenta um novo e retorna true.
bool adiciona_produto(std::vector<Produto>& inventario,
                      const std::string& nome, int quantidade, double preco);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool adiciona_produto(std::vector<Produto>& inventario,
                      const std::string& nome, int quantidade, double preco) {
    // TODO: procure um produto com esse nome no inventario.
    // Se achar, atualize os campos quantidade e preco dele e devolva false.
    // Se nao achar, use push_back para acrescentar um Produto novo e devolva true.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<Produto> estoque;

    assert(adiciona_produto(estoque, "resistor", 10, 0.25));
    assert(estoque.size() == 1);
    assert(estoque[0].quantidade == 10);

    assert(!(adiciona_produto(estoque, "resistor", 40, 0.30)));
    assert(estoque.size() == 1);
    assert(estoque[0].quantidade == 40);
    assert(std::abs((estoque[0].preco) - (0.30)) <= (0.0001));

    assert(adiciona_produto(estoque, "capacitor", 5, 1.50));
    assert(estoque.size() == 2);
    assert(estoque[1].nome == std::string("capacitor"));

    // O produto que ja existia nao pode ter sido alterado pela insercao do outro.
    assert(estoque[0].quantidade == 40);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

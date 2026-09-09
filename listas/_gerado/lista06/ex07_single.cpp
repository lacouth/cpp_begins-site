// ex07 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include <map>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX07_H
#define EX07_H

// Diminui 1 da quantidade de cada produto vendido. Produtos vendidos que nao
// estavam no estoque sao inseridos com quantidade 0.
void atualiza_estoque(std::map<std::string, int>& estoque,
                      const std::vector<std::string>& vendidos);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void atualiza_estoque(std::map<std::string, int>& estoque,
                      const std::vector<std::string>& vendidos) {
    // TODO: para cada produto vendido, verifique com .count() se ele ja existe
    // no estoque. Se existir, subtraia 1 da quantidade; se nao, insira com 0.
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::map<std::string, int> estoque = {{"cabo", 5}, {"fonte", 2}};
    atualiza_estoque(estoque, {"cabo", "cabo", "led"});
    assert(estoque["cabo"] == 3);
    assert(estoque["fonte"] == 2);
    assert(estoque.count("led") == 1);
    assert(estoque["led"] == 0);

    // Vender de novo um produto que entrou com 0 deixa a quantidade negativa:
    // e o sinal de que a loja vendeu o que nao tinha.
    atualiza_estoque(estoque, {"led"});
    assert(estoque["led"] == -1);

    std::map<std::string, int> intacto = {{"cabo", 5}};
    atualiza_estoque(intacto, {});
    assert(intacto["cabo"] == 5);
    assert(intacto.size() == 1);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

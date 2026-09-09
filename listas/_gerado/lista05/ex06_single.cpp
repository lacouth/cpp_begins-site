// ex06 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <vector>
#include <optional>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX06_H
#define EX06_H

// Retorna o indice de alvo em v usando busca binaria.
// Assume que v esta ORDENADO em ordem crescente.
std::optional<int> busca_binaria(const std::vector<int>& v, int alvo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::optional<int> busca_binaria(const std::vector<int>& v, int alvo) {
    // TODO: mantenha dois indices, inicio e fim. Enquanto inicio <= fim,
    // olhe o elemento do meio: se for o alvo, devolva o indice; se for
    // menor que o alvo, o alvo so pode estar na metade de cima; senao,
    // na de baixo.
    return std::nullopt;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<int> v = {1, 3, 5, 7, 9};

    assert(busca_binaria(v, 1).value() == 0);
    assert(busca_binaria(v, 5).value() == 2);
    assert(busca_binaria(v, 9).value() == 4);

    assert(!(busca_binaria(v, 4).has_value()));
    assert(!(busca_binaria(v, 0).has_value()));
    assert(!(busca_binaria(v, 10).has_value()));

    // um elemento so: o <= da condicao de parada e o que faz isto passar
    std::vector<int> um = {42};
    assert(busca_binaria(um, 42).value() == 0);
    assert(!(busca_binaria(um, 1).has_value()));

    std::vector<int> vazio;
    assert(!(busca_binaria(vazio, 1).has_value()));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

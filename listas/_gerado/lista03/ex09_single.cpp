// ex09 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX09_H
#define EX09_H

// Retorna o indice da primeira posicao cujo valor ja apareceu antes no
// vector, ou std::nullopt se todos os valores forem distintos.
std::optional<int> primeiro_repetido(const std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::optional<int> primeiro_repetido(const std::vector<int>& v) {
    // TODO: para cada posicao i, olhe todas as posicoes j anteriores a ela.
    // Se v[i] for igual a algum v[j], devolva i.
    return std::nullopt;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(primeiro_repetido({1, 2, 1}).value() == 2);
    assert(primeiro_repetido({4, 4}).value() == 1);
    assert(primeiro_repetido({1, 2, 3, 2, 1}).value() == 3);

    assert(!(primeiro_repetido({1, 2, 3}).has_value()));
    assert(!(primeiro_repetido({7}).has_value()));
    assert(!(primeiro_repetido({}).has_value()));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

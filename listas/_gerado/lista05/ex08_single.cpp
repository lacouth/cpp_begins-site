// ex08 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX08_H
#define EX08_H

// Retorna o valor mais frequente de v (o que aparece primeiro, em caso
// de empate), ou std::nullopt se v estiver vazio.
std::optional<int> moda(const std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::optional<int> moda(const std::vector<int>& v) {
    // TODO: se v estiver vazio, devolva std::nullopt.
    // Guarde antes do laco o melhor valor e a melhor contagem (comece em 0).
    // Para cada i: zere um contador, percorra j de 0 ao fim contando
    // quantas vezes v[j] == v[i], e se essa contagem for MAIOR que a
    // melhor ate agora, atualize as duas variaveis.
    return std::nullopt;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(moda({1, 2, 2, 3}).value() == 2);

    // empate: vale o que aparece PRIMEIRO (quem usou >= devolve 2)
    assert(moda({1, 1, 2, 2}).value() == 1);

    // todos distintos: todos empatam com 1, vence o primeiro
    assert(moda({4, 7, 9}).value() == 4);

    // um elemento so
    assert(moda({7}).value() == 7);

    // negativos e a moda no fim do vector
    assert(moda({-1, 3, 3, -1, 3}).value() == 3);

    // valores repetidos espalhados, nao contiguos
    assert(moda({5, 8, 5, 8, 5}).value() == 5);

    std::vector<int> vazio;
    assert(!(moda(vazio).has_value()));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

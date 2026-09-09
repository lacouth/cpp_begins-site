// ex02 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX02_H
#define EX02_H

// Retorna o indice do menor valor de v (o primeiro, em caso de empate),
// ou std::nullopt se v estiver vazio.
std::optional<int> indice_do_menor(const std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::optional<int> indice_do_menor(const std::vector<int>& v) {
    // TODO: se v estiver vazio, devolva std::nullopt.
    // Senao, guarde o menor visto ate agora e o indice dele, comecando
    // por v[0] e pelo indice 0, e percorra o resto do vector.
    // Use > (e nao >=) na comparacao para que o empate fique com o primeiro.
    return std::nullopt;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(indice_do_menor({4, 1, 9, 2}).value() == 1);

    // empate: vale o indice da PRIMEIRA ocorrencia
    assert(indice_do_menor({4, 1, 9, 1}).value() == 1);

    // so positivos: quem comecou o menor em 0 erra aqui
    assert(indice_do_menor({7, 3, 5}).value() == 1);

    // so negativos
    assert(indice_do_menor({-5, -2, -9}).value() == 2);

    // o menor ja na primeira posicao
    assert(indice_do_menor({1, 2, 3}).value() == 0);

    // um elemento so
    assert(indice_do_menor({42}).value() == 0);

    std::vector<int> vazio;
    assert(!(indice_do_menor(vazio).has_value()));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

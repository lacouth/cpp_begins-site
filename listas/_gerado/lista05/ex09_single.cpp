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

// Retorna o k-esimo menor valor de v (k comeca em 1),
// ou std::nullopt se k estiver fora do intervalo [1, v.size()].
// v vem por VALOR de proposito: a funcao ordena a propria copia.
std::optional<int> k_esimo_menor(std::vector<int> v, int k);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::optional<int> k_esimo_menor(std::vector<int> v, int k) {
    // TODO: se k < 1 ou k > tamanho de v, devolva std::nullopt.
    // Senao, ordene v (cole aqui o bubble sort do ex05) e devolva
    // v[k - 1] -- lembrando que k comeca em 1 e o indice comeca em 0.
    return std::nullopt;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<int> v = {7, 3, 9, 1};

    assert(k_esimo_menor(v, 1).value() == 1);
    assert(k_esimo_menor(v, 2).value() == 3);
    assert(k_esimo_menor(v, 3).value() == 7);
    assert(k_esimo_menor(v, 4).value() == 9);

    // k fora do intervalo
    assert(!(k_esimo_menor(v, 0).has_value()));
    assert(!(k_esimo_menor(v, 5).has_value()));
    assert(!(k_esimo_menor(v, -1).has_value()));

    // o vector de quem chamou NAO pode ter sido ordenado
    assert((v == std::vector<int>{7, 3, 9, 1}));

    // repetidos ocupam posicoes proprias
    assert(k_esimo_menor({5, 1, 5}, 2).value() == 5);
    assert(k_esimo_menor({5, 1, 5}, 3).value() == 5);

    // negativos
    assert(k_esimo_menor({-2, -9, 0}, 1).value() == -9);

    // um elemento so
    assert(k_esimo_menor({42}, 1).value() == 42);

    // vector vazio: qualquer k esta fora do intervalo
    std::vector<int> vazio;
    assert(!(k_esimo_menor(vazio, 1).has_value()));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

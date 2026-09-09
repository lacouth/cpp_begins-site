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

// Retorna o maior valor de v (assume que v nao esta vazio).
int maior_elemento(const std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int maior_elemento(const std::vector<int>& v) {
    // TODO: comece com maior = v[0] (NAO com 0!) e percorra o vector
    // atualizando maior sempre que encontrar algo maior.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(maior_elemento({4, 1, 9, 2}) == 9);
    assert(maior_elemento({7}) == 7);
    assert(maior_elemento({1, 2, 3}) == 3);
    assert(maior_elemento({3, 2, 1}) == 3);

    // so negativos: quem comecou em 0 erra aqui
    assert(maior_elemento({-5, -2, -9}) == -2);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

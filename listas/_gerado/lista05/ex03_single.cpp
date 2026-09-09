// ex03 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX03_H
#define EX03_H

// Retorna quantas vezes a sequencia troca de sinal entre elementos
// vizinhos. Assume que v nao contem zeros.
int conta_trocas_de_sinal(const std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int conta_trocas_de_sinal(const std::vector<int>& v) {
    // TODO: declare o contador ANTES do laco.
    // Percorra de i = 1 ate o fim comparando v[i - 1] com v[i]:
    // se os sinais forem diferentes, incremente o contador.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(conta_trocas_de_sinal({3, -1, -2, 5}) == 2);

    // nenhuma troca: todos do mesmo sinal
    assert(conta_trocas_de_sinal({1, 2, 3}) == 0);
    assert(conta_trocas_de_sinal({-1, -2, -3}) == 0);

    // troca em toda posicao: se o contador nascer dentro do laco, da 1
    assert(conta_trocas_de_sinal({1, -1, 1, -1}) == 3);

    // um elemento so nao tem vizinho: nao ha troca
    assert(conta_trocas_de_sinal({7}) == 0);

    // vector vazio: o laco nem roda
    std::vector<int> vazio;
    assert(conta_trocas_de_sinal(vazio) == 0);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

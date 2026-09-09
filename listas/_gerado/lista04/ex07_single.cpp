// ex07 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX07_H
#define EX07_H

// Retorna quantos elementos sao estritamente maiores que o anterior
// e que o seguinte. Vectors com menos de 3 elementos nao tem picos.
int conta_picos(const std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int conta_picos(const std::vector<int>& v) {
    // TODO: percorra de i = 1 ate v.size() - 2 (assim i-1 e i+1 sempre existem)
    // e conte quantas vezes v[i] > v[i-1] && v[i] > v[i+1].
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(conta_picos({1, 3, 2, 5, 4}) == 2);
    assert(conta_picos({1, 2, 3}) == 0);
    assert(conta_picos({5, 5, 5}) == 0);
    assert(conta_picos({3, 1, 2}) == 0);
    assert(conta_picos({1, 9, 1}) == 1);
    assert(conta_picos({}) == 0);
    assert(conta_picos({7}) == 0);
    assert(conta_picos({7, 8}) == 0);
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

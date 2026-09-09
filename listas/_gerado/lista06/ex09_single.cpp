// ex09 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX09_H
#define EX09_H

// Retorna quantos valores DISTINTOS aparecem nos dois vectors.
// Escreva sem usar set nem map: so laco e comparacao.
int conta_comuns(const std::vector<int>& a, const std::vector<int>& b);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int conta_comuns(const std::vector<int>& a, const std::vector<int>& b) {
    // TODO: para cada valor de a, verifique se ele aparece em b.
    // Cuidado: se o mesmo valor se repetir em a, ele nao pode ser contado
    // duas vezes -- confira antes se ele ja apareceu em a mais cedo.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(conta_comuns({1, 2, 3}, {2, 3, 4}) == 2);
    assert(conta_comuns({1, 2}, {3, 4}) == 0);
    assert(conta_comuns({1, 2}, {1, 2}) == 2);

    // valor repetido em a conta uma vez so
    assert(conta_comuns({1, 1, 2}, {1, 2}) == 2);
    assert(conta_comuns({5, 5, 5}, {5}) == 1);

    assert(conta_comuns({}, {1}) == 0);
    assert(conta_comuns({1}, {}) == 0);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

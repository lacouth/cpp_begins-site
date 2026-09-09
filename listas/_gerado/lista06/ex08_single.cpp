// ex08 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <set>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX08_H
#define EX08_H

// Retorna os elementos que estao em a mas nao estao em b.
std::set<int> diferenca(const std::set<int>& a, const std::set<int>& b);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::set<int> diferenca(const std::set<int>& a, const std::set<int>& b) {
    // TODO: percorra a e insira no resultado cada valor que b.count(valor) == 0.
    return {};
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::set<int> r1 = diferenca({1, 2, 3}, {2, 4});
    assert(r1.size() == 2);
    assert(r1.count(1) == 1);
    assert(r1.count(3) == 1);
    assert(r1.count(2) == 0);

    assert(diferenca({1, 2}, {1, 2}).empty());
    assert(diferenca({}, {1, 2}).empty());

    std::set<int> r2 = diferenca({1, 2}, {});
    assert(r2.size() == 2);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

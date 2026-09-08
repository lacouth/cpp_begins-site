// ex02 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <vector>
#include <set>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX02_H
#define EX02_H

// Retorna os valores de v sem duplicatas, em ordem crescente.
std::vector<int> remove_duplicados(const std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::vector<int> remove_duplicados(const std::vector<int>& v) {
    // TODO: insira todos os elementos de v num std::set<int> (remove duplicatas
    // e ordena sozinho), depois monte um vector a partir do set.
    return {};
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<int> esperado1 = {1, 2, 3};
    assert(remove_duplicados({3, 1, 2, 3, 1}) == esperado1);

    std::vector<int> esperado2 = {};
    assert(remove_duplicados({}) == esperado2);

    std::vector<int> esperado3 = {5};
    assert(remove_duplicados({5, 5, 5}) == esperado3);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

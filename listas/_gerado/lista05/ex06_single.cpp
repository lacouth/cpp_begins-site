// ex06 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX06_H
#define EX06_H

// Retorna o indice de "alvo" num vector JA ORDENADO,
// ou -1 se o alvo nao estiver nele.
int busca_binaria(const std::vector<int>& v, int alvo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int busca_binaria(const std::vector<int>& v, int alvo) {
    // TODO: mantenha "inicio" e "fim" delimitando os candidatos.
    // Enquanto inicio <= fim: olhe o meio; se for o alvo, devolva o indice;
    // se for menor que o alvo, jogue "inicio" para depois do meio;
    // senao jogue "fim" para antes do meio.
    // Se o laco terminar, devolva -1.
    return -1;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<int> v = {1, 3, 5, 7, 9};

    assert(busca_binaria(v, 1) == 0);
    assert(busca_binaria(v, 5) == 2);
    assert(busca_binaria(v, 9) == 4);

    assert(busca_binaria(v, 4) == -1);
    assert(busca_binaria(v, 0) == -1);
    assert(busca_binaria(v, 10) == -1);

    // um elemento so: o <= da condicao de parada e o que faz isto passar
    std::vector<int> um = {42};
    assert(busca_binaria(um, 42) == 0);
    assert(busca_binaria(um, 1) == -1);

    std::vector<int> vazio;
    assert(busca_binaria(vazio, 1) == -1);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

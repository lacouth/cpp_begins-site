// ex07 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <vector>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX07_H
#define EX07_H

// Retorna a mediana dos valores. Recebe o vector POR VALOR de proposito:
// a funcao precisa ordenar, e ordenar o vector de quem chamou seria um
// efeito colateral surpreendente. Retorna 0.0 se o vector estiver vazio.
double mediana(std::vector<int> v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double mediana(std::vector<int> v) {
    // TODO: trate o vector vazio. Depois ordene v (pode reaproveitar o
    // bubble sort do ex05) e devolva o elemento do meio. Se a quantidade
    // de elementos for PAR, devolva a media dos dois centrais -- cuidado
    // para dividir por 2.0, e nao por 2.
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    // impar: o do meio, depois de ordenar
    assert(std::abs((mediana({3, 1, 2})) - (2.0)) <= (0.0001));
    assert(std::abs((mediana({5})) - (5.0)) <= (0.0001));

    // par: media dos dois centrais -- e aqui o /2.0 faz diferenca
    assert(std::abs((mediana({1, 2})) - (1.5)) <= (0.0001));
    assert(std::abs((mediana({4, 1, 3, 2})) - (2.5)) <= (0.0001));

    assert(std::abs((mediana({})) - (0.0)) <= (0.0001));

    // o vector de quem chamou nao pode ser alterado
    std::vector<int> original = {3, 1, 2};
    mediana(original);
    assert((original == std::vector<int>{3, 1, 2}));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

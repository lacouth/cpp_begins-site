// ex10 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX10_H
#define EX10_H

// Retorna true se v estiver em ordem crescente (elementos iguais lado a
// lado sao aceitos). Um vector vazio ou de um elemento so esta ordenado.
bool eh_ordenado(const std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool eh_ordenado(const std::vector<int>& v) {
    // TODO: compare cada elemento com o seguinte. Se achar um par fora de
    // ordem, ja pode devolver false. Se o laco terminar, esta ordenado.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(eh_ordenado({1, 2, 3}));
    assert(eh_ordenado({1, 1, 2}));
    assert(!(eh_ordenado({3, 1, 2})));
    assert(!(eh_ordenado({1, 2, 0})));

    assert(eh_ordenado({7}));
    assert(eh_ordenado({}));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

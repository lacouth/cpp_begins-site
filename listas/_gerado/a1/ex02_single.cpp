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

// Retorna true se todas as notas forem >= 6.0.
// Escreva com laco: nada de <algorithm> nesta avaliacao.
bool todos_aprovados(const std::vector<double>& notas);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool todos_aprovados(const std::vector<double>& notas) {
    // TODO: percorra as notas. Assim que achar uma menor que 6.0, ja pode
    // devolver false. Se o laco terminar sem achar nenhuma, devolva true.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(todos_aprovados({7.0, 8.5, 6.0}));
    assert(!(todos_aprovados({7.0, 5.9})));
    assert(todos_aprovados({}));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

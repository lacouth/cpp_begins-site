// ex06 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX06_H
#define EX06_H

// Retorna true se os parenteses do texto estiverem balanceados:
// cada "(" tem um ")" correspondente, e nenhum ")" aparece sem par antes.
bool parenteses_balanceados(const std::string& texto);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool parenteses_balanceados(const std::string& texto) {
    // TODO: use um vector<char> como pilha. Ao ver "(", empilhe.
    // Ao ver ")", desempilhe -- e se a pilha estiver VAZIA nessa hora,
    // ja pode devolver false. No fim, a pilha precisa estar vazia.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(parenteses_balanceados("(a + b)"));
    assert(parenteses_balanceados("((a) + (b))"));
    assert(parenteses_balanceados("sem parenteses"));
    assert(parenteses_balanceados(""));

    assert(!(parenteses_balanceados("(a + b")));
    assert(!(parenteses_balanceados("a + b)")));
    assert(!(parenteses_balanceados(")(")));
    assert(!(parenteses_balanceados("((a)")));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

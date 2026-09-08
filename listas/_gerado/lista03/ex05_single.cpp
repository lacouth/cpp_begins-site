// ex05 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX05_H
#define EX05_H

struct Aluno {
    std::string nome;
    double nota;

    bool aprovado() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool Aluno::aprovado() const {
    // TODO: retorne true se nota >= 6.0.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    Aluno a{"Carlos", 7.5};
    assert(a.aprovado());

    Aluno b{"Marcia", 5.0};
    assert(!(b.aprovado()));

    Aluno c{"Julia", 6.0};
    assert(c.aprovado());

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

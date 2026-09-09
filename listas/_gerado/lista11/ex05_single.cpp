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

class Conexao {
public:
    static inline int destruicoes = 0;

    // Registro da ordem em que os destrutores rodaram:
    // "C" para ~Conexao(), "S" para ~ConexaoSegura().
    static inline std::string ordem = "";

    virtual ~Conexao();
};

class ConexaoSegura : public Conexao {
public:
    static inline int destruicoes = 0;

    ~ConexaoSegura() override;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
Conexao::~Conexao() {
    // TODO: incremente Conexao::destruicoes e acrescente "C" a Conexao::ordem.
}

ConexaoSegura::~ConexaoSegura() {
    // TODO: incremente ConexaoSegura::destruicoes e acrescente "S" a Conexao::ordem.
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    // destruindo pelo ponteiro para a base: o ~Conexao() virtual e o que
    // faz o destrutor da derivada ser chamado tambem
    Conexao::destruicoes = 0;
    ConexaoSegura::destruicoes = 0;
    Conexao::ordem = "";

    Conexao* c = new ConexaoSegura();
    delete c;

    assert(Conexao::destruicoes == 1);
    assert(ConexaoSegura::destruicoes == 1);
    assert(Conexao::ordem == "SC");   // de dentro para fora, nunca "CS"

    // objeto na pilha: mesma ordem
    Conexao::destruicoes = 0;
    ConexaoSegura::destruicoes = 0;
    Conexao::ordem = "";
    {
        ConexaoSegura s;
    }
    assert(Conexao::destruicoes == 1);
    assert(ConexaoSegura::destruicoes == 1);
    assert(Conexao::ordem == "SC");

    // uma Conexao pura destroi so a si mesma
    Conexao::destruicoes = 0;
    ConexaoSegura::destruicoes = 0;
    Conexao::ordem = "";
    {
        Conexao simples;
    }
    assert(Conexao::destruicoes == 1);
    assert(ConexaoSegura::destruicoes == 0);
    assert(Conexao::ordem == "C");

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

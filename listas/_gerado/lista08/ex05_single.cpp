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

class Pessoa {
private:
    std::string nome_;
    int idade_;

public:
    Pessoa(std::string nome, int idade) : nome_(nome), idade_(idade) {}

    std::string nome() const;
    int idade() const;
    void define_idade(int nova_idade);
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::string Pessoa::nome() const {
    // TODO: retorne nome_.
    return "";
}

int Pessoa::idade() const {
    // TODO: retorne idade_.
    return 0;
}

void Pessoa::define_idade(int nova_idade) {
    // TODO: so atualize idade_ se nova_idade >= 0.
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    Pessoa p("Ana", 25);
    assert(p.nome() == std::string("Ana"));
    assert(p.idade() == 25);

    p.define_idade(26);
    assert(p.idade() == 26);

    p.define_idade(-10);
    assert(p.idade() == 26);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

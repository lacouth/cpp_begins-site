// ex03 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX03_H
#define EX03_H

struct Pessoa {
    std::string nome;
    int idade;
};

// Recebe varias linhas "nome,idade" (separadas por \n) e retorna um vector de Pessoa.
std::vector<Pessoa> parseia_pessoas(const std::string& conteudo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::vector<Pessoa> parseia_pessoas(const std::string& conteudo) {
    // TODO: percorra o conteudo linha por linha (std::getline num while),
    // e para cada linha nao vazia, separe nome e idade (igual ao exercicio 1)
    // e adicione um Pessoa{nome, idade} ao vector de resultado.
    return {};
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    auto r1 = parseia_pessoas("Ana,25\nBruno,30");
    assert(r1.size() == static_cast<std::size_t>(2));
    assert(r1[0].nome == std::string("Ana"));
    assert(r1[0].idade == 25);
    assert(r1[1].nome == std::string("Bruno"));
    assert(r1[1].idade == 30);

    auto r2 = parseia_pessoas("");
    assert(r2.empty());

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

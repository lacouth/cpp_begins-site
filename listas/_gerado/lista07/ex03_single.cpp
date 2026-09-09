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

// Recebe varias linhas "nome,idade" (separadas por \n) e retorna um vector
// de Pessoa, descartando as linhas malformadas.
std::vector<Pessoa> parseia_pessoas_validas(const std::string& conteudo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::vector<Pessoa> parseia_pessoas_validas(const std::string& conteudo) {
    // TODO: percorra o conteudo linha por linha (std::getline num while).
    // Para cada linha:
    //   - separe nome e idade_texto com std::getline(..., ',') e std::getline;
    //   - descarte se o nome estiver vazio ou se idade_texto estiver vazio;
    //   - descarte se idade_texto tiver algum caractere que nao seja digito;
    //   - senao, adicione Pessoa{nome, std::stoi(idade_texto)} ao resultado.
    return {};
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    auto r1 = parseia_pessoas_validas("Ana,25\nBruno,30");
    assert(r1.size() == static_cast<std::size_t>(2));
    assert(r1[0].nome == std::string("Ana"));
    assert(r1[0].idade == 25);
    assert(r1[1].nome == std::string("Bruno"));
    assert(r1[1].idade == 30);

    // linha sem virgula no meio: as boas continuam vindo
    auto r2 = parseia_pessoas_validas("Ana,25\nlixo\nBruno,30");
    assert(r2.size() == static_cast<std::size_t>(2));
    assert(r2[0].nome == std::string("Ana"));
    assert(r2[1].nome == std::string("Bruno"));

    // idade que nao e numero (stoi lancaria excecao) e nome vazio
    auto r3 = parseia_pessoas_validas("Ana,vinte\n,40\nCarla,22");
    assert(r3.size() == static_cast<std::size_t>(1));
    assert(r3[0].nome == std::string("Carla"));
    assert(r3[0].idade == 22);

    // idade com sufixo: stoi aceitaria "25anos" como 25, e nao pode
    auto r4 = parseia_pessoas_validas("Ana,25anos\nBruno,30");
    assert(r4.size() == static_cast<std::size_t>(1));
    assert(r4[0].nome == std::string("Bruno"));

    // idade vazia depois da virgula
    auto r5 = parseia_pessoas_validas("Ana,\nBruno,30");
    assert(r5.size() == static_cast<std::size_t>(1));
    assert(r5[0].nome == std::string("Bruno"));

    // linhas em branco no meio e no fim
    auto r6 = parseia_pessoas_validas("Ana,25\n\nBruno,30\n");
    assert(r6.size() == static_cast<std::size_t>(2));

    // conteudo vazio e conteudo sem nenhuma linha valida
    assert(parseia_pessoas_validas("").empty());
    assert(parseia_pessoas_validas("lixo\nmais lixo").empty());

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

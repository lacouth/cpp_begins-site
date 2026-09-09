// ex08 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>
#include <sstream>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX08_H
#define EX08_H

// Retorna as linhas "nome,idade" do conteudo em que idade >= idade_minima,
// na ordem original e sem \n no fim da ultima linha.
std::string filtra_por_idade(const std::string& conteudo, int idade_minima);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::string filtra_por_idade(const std::string& conteudo, int idade_minima) {
    // TODO: leia o conteudo linha a linha com std::getline. Em cada linha,
    // separe o que vem depois da virgula e converte com std::stoi.
    // Monte a saida so com as linhas aprovadas, cuidando para nao deixar
    // um \n sobrando no fim.
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(filtra_por_idade("ana,20\nbruno,15\ncarla,31", 18)
           == std::string("ana,20\ncarla,31"));

    // A idade minima entra: a comparacao e >=.
    assert(filtra_por_idade("ana,18", 18) == std::string("ana,18"));

    assert(filtra_por_idade("bruno,15", 18) == std::string(""));
    assert(filtra_por_idade("", 18) == std::string(""));

    assert(filtra_por_idade("ana,20\nbruno,25", 18)
           == std::string("ana,20\nbruno,25"));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

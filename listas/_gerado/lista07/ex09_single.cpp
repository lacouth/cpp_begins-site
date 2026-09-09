// ex09 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX09_H
#define EX09_H

// Retorna a primeira linha mais longa do conteudo, ou "" se nao houver
// nenhuma linha nao vazia.
std::string linha_mais_longa(const std::string& conteudo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::string linha_mais_longa(const std::string& conteudo) {
    // TODO: leia linha a linha com std::getline e guarde a mais longa
    // vista ate agora. Use > (e nao >=) para ficar com a PRIMEIRA em
    // caso de empate.
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(linha_mais_longa("ab\nabcd\nabc") == std::string("abcd"));
    assert(linha_mais_longa("uma linha so") == std::string("uma linha so"));

    // empate: fica a primeira
    assert(linha_mais_longa("abc\nxyz") == std::string("abc"));

    assert(linha_mais_longa("") == std::string(""));
    assert(linha_mais_longa("\n\n") == std::string(""));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

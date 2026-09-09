// ex09 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX09_H
#define EX09_H

// Retorna texto sem nenhuma ocorrencia do caractere alvo
// (a comparacao distingue maiuscula de minuscula).
std::string remove_caractere(const std::string& texto, char alvo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::string remove_caractere(const std::string& texto, char alvo) {
    // TODO: percorra texto e monte uma nova string so com os caracteres
    // diferentes de alvo (use += para ir concatenando).
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(remove_caractere("banana", 'a') == std::string("bnn"));
    assert(remove_caractere("Casa Amarela", 'a') == std::string("Cs Amrel"));
    assert(remove_caractere("abc", 'z') == std::string("abc"));
    assert(remove_caractere("", 'a') == std::string(""));
    assert(remove_caractere("aaa", 'a') == std::string(""));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

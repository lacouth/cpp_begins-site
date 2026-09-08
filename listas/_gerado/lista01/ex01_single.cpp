// ex01 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX01_H
#define EX01_H

// Retorna uma saudacao no formato "Ola, <nome>!".
// Ex: saudacao("Maria") -> "Ola, Maria!"
std::string saudacao(const std::string& nome);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::string saudacao(const std::string& nome) {
    // TODO: monte e retorne a string "Ola, " + nome + "!"
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(saudacao("Maria") == std::string("Ola, Maria!"));
    assert(saudacao("Joao") == std::string("Ola, Joao!"));
    assert(saudacao("") == std::string("Ola, !"));
    assert(saudacao("Ana Paula") == std::string("Ola, Ana Paula!"));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

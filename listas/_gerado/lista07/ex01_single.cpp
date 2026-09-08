// ex01 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>
#include <sstream>
#include <utility>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX01_H
#define EX01_H

// Recebe uma linha "nome,idade" e retorna {nome, idade} (idade ja convertida para int).
std::pair<std::string, int> parseia_linha(const std::string& linha);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::pair<std::string, int> parseia_linha(const std::string& linha) {
    // TODO: use std::istringstream(linha), std::getline(..., ',') para o nome,
    // depois std::getline no resto e std::stoi para converter a idade.
    return {"", 0};
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    auto r1 = parseia_linha("Ana,25");
    assert(r1.first == std::string("Ana"));
    assert(r1.second == 25);

    auto r2 = parseia_linha("Bruno,30");
    assert(r2.first == std::string("Bruno"));
    assert(r2.second == 30);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

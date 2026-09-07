// ex06 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <algorithm>
#include <optional>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX06_H
#define EX06_H

#include <string>

// Retorna "texto" repetido "vezes" vezes.
std::string repete(const std::string& texto, int vezes);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::string repete(const std::string& texto, int vezes) {
    // TODO: monte uma string com "texto" concatenado "vezes" vezes.
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    assert(repete("ab", 3) == std::string("ababab"));
    assert(repete("x", 0) == std::string(""));
    assert(repete("oi", 1) == std::string("oi"));
    assert(repete("", 5) == std::string(""));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

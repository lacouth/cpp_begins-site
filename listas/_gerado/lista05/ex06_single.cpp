// ex06 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX06_H
#define EX06_H

// Retorna a string mais longa de v (assume que v nao esta vazio).
// Use std::max_element.
std::string maior_string(const std::vector<std::string>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::string maior_string(const std::vector<std::string>& v) {
    // TODO: use std::max_element(v.begin(), v.end(), lambda que compara .size())
    // e retorne *iterador.
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(maior_string({"a", "abc", "ab"}) == std::string("abc"));
    assert(maior_string({"x"}) == std::string("x"));
    assert(maior_string({"aa", "bb", "c"}) == std::string("aa"));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

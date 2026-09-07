// ex01 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX01_H
#define EX01_H

#include <map>
#include <string>

// Retorna um map com a contagem de cada caractere de texto.
std::map<char, int> conta_caracteres(const std::string& texto);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::map<char, int> conta_caracteres(const std::string& texto) {
    // TODO: percorra texto, usando contagem[c]++ para cada caractere c.
    std::map<char, int> contagem;
    return contagem;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    std::map<char, int> esperado1 = {{'a', 2}, {'b', 1}};
    assert(conta_caracteres("aab") == esperado1);

    std::map<char, int> esperado2 = {};
    assert(conta_caracteres("") == esperado2);

    std::map<char, int> esperado3 = {{'x', 3}};
    assert(conta_caracteres("xxx") == esperado3);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

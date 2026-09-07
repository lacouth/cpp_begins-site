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

// Retorna true se o texto for igual ao seu inverso.
bool eh_palindromo(const std::string& texto);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool eh_palindromo(const std::string& texto) {
    // TODO: compare o texto com o seu inverso (letra por letra ou construindo
    // uma string invertida, como no exercicio 3).
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    assert(eh_palindromo("arara"));
    assert(eh_palindromo("ovo"));
    assert(!(eh_palindromo("banana")));
    assert(eh_palindromo(""));
    assert(eh_palindromo("a"));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

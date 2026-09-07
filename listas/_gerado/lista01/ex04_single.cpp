// ex04 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX04_H
#define EX04_H

#include <string>

// Conta quantas vogais (a,e,i,o,u, maiusculas ou minusculas) o texto tem.
int conta_vogais(const std::string& texto);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int conta_vogais(const std::string& texto) {
    // TODO: percorra "texto" e conte as vogais (ignore maiusculas/minusculas).
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    assert(conta_vogais("banana") == 3);
    assert(conta_vogais("Programacao") == 5);
    assert(conta_vogais("xyz") == 0);
    assert(conta_vogais("") == 0);
    assert(conta_vogais("AEIOU") == 5);
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

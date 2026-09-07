// ex02 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX02_H
#define EX02_H

#include <string>

enum class Turno { Manha, Tarde, Noite };

// Retorna o nome por extenso do turno.
std::string nome_turno(Turno t);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::string nome_turno(Turno t) {
    // TODO: use um if/else (ou switch) comparando t com Turno::Manha, Turno::Tarde, Turno::Noite.
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    assert(nome_turno(Turno::Manha) == std::string("Manha"));
    assert(nome_turno(Turno::Tarde) == std::string("Tarde"));
    assert(nome_turno(Turno::Noite) == std::string("Noite"));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

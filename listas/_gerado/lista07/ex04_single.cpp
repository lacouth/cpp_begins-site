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
#include <vector>

struct Pessoa {
    std::string nome;
    int idade;
};

// Monta o texto CSV (uma linha "nome,idade" por Pessoa, sem \n no final da ultima linha).
std::string monta_csv(const std::vector<Pessoa>& pessoas);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
#include <sstream>

std::string monta_csv(const std::vector<Pessoa>& pessoas) {
    // TODO: use um std::ostringstream, escreva "nome,idade" para cada Pessoa,
    // colocando "\n" ANTES de cada linha exceto a primeira (para nao sobrar
    // \n no final). Ao final, retorne stream.str().
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    std::vector<Pessoa> p1 = {{"Ana", 25}, {"Bruno", 30}};
    assert(monta_csv(p1) == std::string("Ana,25\nBruno,30"));

    std::vector<Pessoa> p2 = {};
    assert(monta_csv(p2) == std::string(""));

    std::vector<Pessoa> p3 = {{"Carla", 22}};
    assert(monta_csv(p3) == std::string("Carla,22"));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

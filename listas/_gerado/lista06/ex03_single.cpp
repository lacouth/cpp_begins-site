// ex03 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX03_H
#define EX03_H

#include <map>
#include <string>

// Retorna true se "chave" existir em m, sem usar operator[].
bool existe_chave(const std::map<std::string, int>& m, const std::string& chave);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool existe_chave(const std::map<std::string, int>& m, const std::string& chave) {
    // TODO: use m.count(chave) ou m.find(chave) != m.end().
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    std::map<std::string, int> m = {{"a", 1}, {"b", 2}};
    assert(existe_chave(m, "a"));
    assert(!(existe_chave(m, "z")));

    std::map<std::string, int> vazio = {};
    assert(!(existe_chave(vazio, "a")));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

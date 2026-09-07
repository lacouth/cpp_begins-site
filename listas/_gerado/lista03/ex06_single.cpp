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

#include <optional>
#include <string>

// Retorna a posicao da primeira ocorrencia de "alvo" em "texto", ou nullopt.
std::optional<int> busca_posicao(const std::string& texto, char alvo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::optional<int> busca_posicao(const std::string& texto, char alvo) {
    // TODO: percorra "texto"; se achar "alvo", retorne o indice.
    // Se terminar o laco sem achar, retorne std::nullopt.
    return std::nullopt;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    auto r1 = busca_posicao("programacao", 'g');
    assert(r1.has_value());
    assert(r1.value() == 3);

    auto r2 = busca_posicao("programacao", 'z');
    assert(!r2.has_value());

    auto r3 = busca_posicao("abc", 'a');
    assert(r3.has_value());
    assert(r3.value() == 0);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

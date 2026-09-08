// ex05 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>
#include <map>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX05_H
#define EX05_H

// Retorna a chave associada ao maior valor em m (assume que m nao esta vazio).
std::string chave_maior_valor(const std::map<std::string, int>& m);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::string chave_maior_valor(const std::map<std::string, int>& m) {
    // TODO: percorra m com "for (const auto& [chave, valor] : m)" guardando
    // a chave do maior valor visto ate agora.
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::map<std::string, int> m1 = {{"a", 3}, {"b", 9}, {"c", 1}};
    assert(chave_maior_valor(m1) == std::string("b"));

    std::map<std::string, int> m2 = {{"x", 5}};
    assert(chave_maior_valor(m2) == std::string("x"));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

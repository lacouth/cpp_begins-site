// ex03 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include <map>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX03_H
#define EX03_H

// Retorna as chaves de "estoque" cujo valor e 0, em ordem crescente de chave.
std::vector<std::string> chaves_com_valor_zero(const std::map<std::string, int>& estoque);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::vector<std::string> chaves_com_valor_zero(const std::map<std::string, int>& estoque) {
    // TODO: percorra estoque com "for (const auto& [chave, valor] : estoque)"
    // e adicione a chave ao resultado quando valor == 0.
    return {};
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::map<std::string, int> estoque = {{"parafuso", 0}, {"prego", 5}, {"arruela", 0}};
    auto resultado = chaves_com_valor_zero(estoque);
    std::vector<std::string> esperado = {"arruela", "parafuso"};
    assert(resultado == esperado);

    std::map<std::string, int> vazio = {};
    assert(chaves_com_valor_zero(vazio).empty());

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

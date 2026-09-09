// ex07 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>
#include <map>
#include <sstream>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX07_H
#define EX07_H

// Retorna quantas vezes cada palavra aparece no conteudo.
// Palavras sao separadas por espacos ou quebras de linha.
std::map<std::string, int> frequencia_palavras(const std::string& conteudo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::map<std::string, int> frequencia_palavras(const std::string& conteudo) {
    // TODO: crie um std::istringstream com o conteudo e leia palavra por
    // palavra com >>. Para cada palavra lida, some 1 no map.
    return {};
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::map<std::string, int> f = frequencia_palavras("um dois\num dois um");
    assert(f.size() == 2);
    assert(f["um"] == 3);
    assert(f["dois"] == 2);

    std::map<std::string, int> uma = frequencia_palavras("sozinha");
    assert(uma.size() == 1);
    assert(uma["sozinha"] == 1);

    assert(frequencia_palavras("").empty());
    assert(frequencia_palavras("   \n  ").empty());

    // Maiuscula e minuscula sao palavras diferentes.
    std::map<std::string, int> caixa = frequencia_palavras("Led led");
    assert(caixa.size() == 2);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

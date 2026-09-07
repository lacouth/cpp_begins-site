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

// Retorna quantas linhas nao vazias existem em "conteudo".
int conta_linhas(const std::string& conteudo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
#include <sstream>

int conta_linhas(const std::string& conteudo) {
    // TODO: use std::istringstream(conteudo) e um while(std::getline(...))
    // contando as linhas que nao estao vazias (linha.empty()).
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    assert(conta_linhas("Ana,25\nBruno,30\nCarla,22") == 3);
    assert(conta_linhas("") == 0);
    assert(conta_linhas("uma linha so") == 1);
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

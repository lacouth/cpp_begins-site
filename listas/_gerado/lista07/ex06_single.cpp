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

// Recebe varias linhas "nome,idade" (assume conteudo nao vazio) e retorna o
// nome da pessoa com maior idade.
std::string nome_mais_velho(const std::string& conteudo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
#include <sstream>

std::string nome_mais_velho(const std::string& conteudo) {
    // TODO: percorra as linhas guardando o nome da maior idade vista ate agora.
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    assert(nome_mais_velho("Ana,25\nBruno,30\nCarla,22") == std::string("Bruno"));
    assert(nome_mais_velho("Zeca,10") == std::string("Zeca"));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

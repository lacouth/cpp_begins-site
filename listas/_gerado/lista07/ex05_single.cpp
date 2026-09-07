// ex05 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX05_H
#define EX05_H

#include <string>

// Recebe varias linhas "nome,idade" e retorna a soma de todas as idades.
int soma_idades(const std::string& conteudo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
#include <sstream>

int soma_idades(const std::string& conteudo) {
    // TODO: percorra as linhas (igual exercicio 3), some as idades de cada uma.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    assert(soma_idades("Ana,25\nBruno,30\nCarla,22") == 77);
    assert(soma_idades("") == 0);
    assert(soma_idades("Zeca,10") == 10);
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

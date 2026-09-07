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

// Retorna quantas palavras diferentes existem em texto.
int palavras_unicas(const std::string& texto);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
#include <set>
#include <sstream>

int palavras_unicas(const std::string& texto) {
    // TODO: use std::istringstream para separar as palavras (stream >> palavra
    // num while), insira cada uma num std::set<std::string>, e retorne o
    // tamanho do set no final.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    assert(palavras_unicas("o rato roeu a roupa do rei de roma") == 9);
    assert(palavras_unicas("oi oi oi") == 1);
    assert(palavras_unicas("") == 0);
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

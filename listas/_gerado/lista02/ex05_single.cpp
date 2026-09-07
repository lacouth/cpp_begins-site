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

// Converte texto para maiusculas, alterando a propria string do chamador.
void maiusculo(std::string& texto);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void maiusculo(std::string& texto) {
    // TODO: percorra "texto" convertendo cada caractere para maiusculo
    // (dica: <cctype> tem a funcao std::toupper).
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    std::string a = "ola mundo";
    maiusculo(a);
    assert(a == std::string("OLA MUNDO"));

    std::string b = "Ja Maiusculo";
    maiusculo(b);
    assert(b == std::string("JA MAIUSCULO"));

    std::string c = "";
    maiusculo(c);
    assert(c == std::string(""));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

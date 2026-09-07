// ex01 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX01_H
#define EX01_H

#include <string>
#include <vector>

class Mochila {
private:
    std::vector<std::string> itens_;

public:
    void adiciona(const std::string& item);
    bool contem(const std::string& item) const;
    int tamanho() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void Mochila::adiciona(const std::string& item) {
    // TODO: adicione "item" ao final de itens_.
}

bool Mochila::contem(const std::string& item) const {
    // TODO: percorra itens_ e retorne true se algum elemento for igual a "item".
    return false;
}

int Mochila::tamanho() const {
    // TODO: retorne o tamanho de itens_.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    Mochila m;
    m.adiciona("corda");
    m.adiciona("lanterna");
    assert(m.tamanho() == 2);
    assert(m.contem("corda"));
    assert(!(m.contem("faca")));

    Mochila copia = m;
    copia.adiciona("faca");
    assert(m.tamanho() == 2);
    assert(copia.tamanho() == 3);
    assert(!(m.contem("faca")));
    assert(copia.contem("faca"));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

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

#include <vector>

// Retorna o maior elemento do vector (assume que v nao esta vazio).
int maior_elemento(const std::vector<int>& v);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int maior_elemento(const std::vector<int>& v) {
    // TODO: percorra v guardando o maior valor visto ate agora.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    assert(maior_elemento({3, 9, 1, 7}) == 9);
    assert(maior_elemento({-5, -1, -9}) == -1);
    assert(maior_elemento({4}) == 4);
    assert(maior_elemento({1, 1, 1}) == 1);
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

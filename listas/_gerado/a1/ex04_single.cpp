// ex04 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX04_H
#define EX04_H

#include <string>

// Recebe varias linhas "nome,nota" (nao vazio) e retorna a media das notas.
double media_notas_csv(const std::string& conteudo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
#include <sstream>

double media_notas_csv(const std::string& conteudo) {
    // TODO: percorra as linhas (igual Lista 07), some as notas (std::stod
    // converte string para double) e divida pela quantidade de linhas.
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>
#include <cmath>

int main() {
    assert(std::abs((media_notas_csv("Ana,8.0\nBruno,6.0")) - (7.0)) <= (0.0001));
    assert(std::abs((media_notas_csv("Carla,10.0")) - (10.0)) <= (0.0001));
    assert(std::abs((media_notas_csv("A,5.0\nB,5.0\nC,5.0")) - (5.0)) <= (0.0001));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

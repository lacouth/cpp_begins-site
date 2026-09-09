// ex08 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX08_H
#define EX08_H

struct Pessoa {
    std::string nome;
    int idade;
    double altura;
};

// Retorna a soma das alturas de todas as pessoas (0.0 se o vector estiver vazio).
double soma_alturas(const std::vector<Pessoa>& pessoas);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double soma_alturas(const std::vector<Pessoa>& pessoas) {
    // TODO: percorra pessoas acumulando o campo altura de cada uma.
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<Pessoa> pessoas = {{"Ana", 20, 1.65}, {"Bruno", 31, 1.80}};
    assert(std::abs((soma_alturas(pessoas)) - (3.45)) <= (0.0001));

    std::vector<Pessoa> uma = {{"Carla", 45, 1.70}};
    assert(std::abs((soma_alturas(uma)) - (1.70)) <= (0.0001));

    std::vector<Pessoa> vazio;
    assert(std::abs((soma_alturas(vazio)) - (0.0)) <= (0.0001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

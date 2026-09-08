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

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX06_H
#define EX06_H

struct Aluno {
    std::string nome;
    double nota;
};

// Retorna a media das notas da turma (assume que turma nao esta vazia).
double media_turma(const std::vector<Aluno>& turma);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double media_turma(const std::vector<Aluno>& turma) {
    // TODO: some as notas de cada Aluno em turma e divida pela quantidade.
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<Aluno> t1 = {{"Ana", 8.0}, {"Bruno", 6.0}};
    assert(std::abs((media_turma(t1)) - (7.0)) <= (0.0001));

    std::vector<Aluno> t2 = {{"Carla", 10.0}};
    assert(std::abs((media_turma(t2)) - (10.0)) <= (0.0001));

    std::vector<Aluno> t3 = {{"A", 5.0}, {"B", 5.0}, {"C", 5.0}};
    assert(std::abs((media_turma(t3)) - (5.0)) <= (0.0001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

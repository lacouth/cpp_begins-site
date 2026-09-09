// ex03 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX03_H
#define EX03_H

// Retorna base elevada a expoente. Se o expoente nao for informado, usa 2.
// Expoente negativo devolve o inverso: potencia(2.0, -2) == 0.25.
double potencia(double base, int expoente = 2);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double potencia(double base, int expoente) {   // sem o "= 2" aqui: ele fica no .h
    // TODO: guarde se o expoente e negativo e trabalhe com ele positivo.
    // Comece resultado em 1.0 e multiplique por base uma vez para cada
    // unidade do expoente. Se o expoente era negativo, devolva 1.0 / resultado.
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
static bool perto(double a, double b) {
    return std::fabs(a - b) < 0.0001;
}

int main() {
    // sem informar o expoente: usa o padrao 2
    assert(perto(potencia(3.0), 9.0));
    assert(perto(potencia(1.5), 2.25));

    // expoente informado
    assert(perto(potencia(2.0, 10), 1024.0));
    assert(perto(potencia(10.0, 3), 1000.0));

    // expoente 1 e expoente 0
    assert(perto(potencia(7.0, 1), 7.0));
    assert(perto(potencia(5.0, 0), 1.0));
    assert(perto(potencia(0.0, 0), 1.0));

    // expoente negativo
    assert(perto(potencia(2.0, -2), 0.25));
    assert(perto(potencia(4.0, -1), 0.25));

    // base negativa: o sinal sai da propria multiplicacao
    assert(perto(potencia(-3.0, 3), -27.0));
    assert(perto(potencia(-3.0), 9.0));

    // base zero com expoente positivo
    assert(perto(potencia(0.0, 5), 0.0));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

// ex07 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX07_H
#define EX07_H

struct Intervalo {
    double inicio;
    double fim;
};

// Escreve em "resultado" a parte em que os dois intervalos se sobrepoem.
// Devolve true se ha sobreposicao; devolve false e nao mexe em "resultado"
// se eles nao se sobrepoem em ponto nenhum.
bool intersecao(const Intervalo& a, const Intervalo& b, Intervalo& resultado);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool intersecao(const Intervalo& a, const Intervalo& b, Intervalo& resultado) {
    // TODO: o inicio da intersecao e o MAIOR entre a.inicio e b.inicio;
    // o fim e o MENOR entre a.fim e b.fim.
    // Se o inicio calculado for maior que o fim, nao ha sobreposicao:
    // devolva false. Caso contrario, escreva o Intervalo em "resultado"
    // e devolva true.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    Intervalo r{0.0, 0.0};

    // sobreposicao parcial
    assert(intersecao(Intervalo{8.0, 10.0}, Intervalo{9.0, 11.0}, r));
    assert(std::abs(r.inicio - 9.0) <= 0.0001);
    assert(std::abs(r.fim - 10.0) <= 0.0001);

    // a ordem dos argumentos nao muda o resultado
    assert(intersecao(Intervalo{9.0, 11.0}, Intervalo{8.0, 10.0}, r));
    assert(std::abs(r.inicio - 9.0) <= 0.0001);
    assert(std::abs(r.fim - 10.0) <= 0.0001);

    // um intervalo inteiramente dentro do outro
    assert(intersecao(Intervalo{0.0, 24.0}, Intervalo{8.0, 10.0}, r));
    assert(std::abs(r.inicio - 8.0) <= 0.0001);
    assert(std::abs(r.fim - 10.0) <= 0.0001);

    // sem sobreposicao nenhuma: devolve false e nao mexe no resultado
    r = Intervalo{-1.0, -1.0};
    assert(!intersecao(Intervalo{8.0, 10.0}, Intervalo{14.0, 16.0}, r));
    assert(std::abs(r.inicio + 1.0) <= 0.0001);
    assert(!intersecao(Intervalo{14.0, 16.0}, Intervalo{8.0, 10.0}, r));

    // tocam em um ponto so: conta, com duracao zero
    assert(intersecao(Intervalo{8.0, 10.0}, Intervalo{10.0, 12.0}, r));
    assert(std::abs(r.inicio - 10.0) <= 0.0001);
    assert(std::abs(r.fim - 10.0) <= 0.0001);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

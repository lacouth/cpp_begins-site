// ex07 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <optional>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX07_H
#define EX07_H

struct Intervalo {
    double inicio;
    double fim;
};

// Retorna a parte em que os dois intervalos se sobrepoem,
// ou std::nullopt se eles nao se sobrepoem em ponto nenhum.
std::optional<Intervalo> intersecao(const Intervalo& a, const Intervalo& b);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::optional<Intervalo> intersecao(const Intervalo& a, const Intervalo& b) {
    // TODO: o inicio da intersecao e o MAIOR entre a.inicio e b.inicio;
    // o fim e o MENOR entre a.fim e b.fim.
    // Se o inicio calculado for maior que o fim, nao ha sobreposicao:
    // devolva std::nullopt. Caso contrario, devolva o Intervalo resultante.
    return std::nullopt;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    // sobreposicao parcial
    auto r1 = intersecao(Intervalo{8.0, 10.0}, Intervalo{9.0, 11.0});
    assert(r1.has_value());
    assert(std::abs(r1.value().inicio - 9.0) <= 0.0001);
    assert(std::abs(r1.value().fim - 10.0) <= 0.0001);

    // a ordem dos argumentos nao muda o resultado
    auto r2 = intersecao(Intervalo{9.0, 11.0}, Intervalo{8.0, 10.0});
    assert(r2.has_value());
    assert(std::abs(r2.value().inicio - 9.0) <= 0.0001);
    assert(std::abs(r2.value().fim - 10.0) <= 0.0001);

    // um intervalo inteiramente dentro do outro
    auto r3 = intersecao(Intervalo{0.0, 24.0}, Intervalo{8.0, 10.0});
    assert(r3.has_value());
    assert(std::abs(r3.value().inicio - 8.0) <= 0.0001);
    assert(std::abs(r3.value().fim - 10.0) <= 0.0001);

    // sem sobreposicao nenhuma
    assert(!(intersecao(Intervalo{8.0, 10.0}, Intervalo{14.0, 16.0}).has_value()));
    assert(!(intersecao(Intervalo{14.0, 16.0}, Intervalo{8.0, 10.0}).has_value()));

    // tocam em um ponto so: conta, com duracao zero
    auto r4 = intersecao(Intervalo{8.0, 10.0}, Intervalo{10.0, 12.0});
    assert(r4.has_value());
    assert(std::abs(r4.value().inicio - 10.0) <= 0.0001);
    assert(std::abs(r4.value().fim - 10.0) <= 0.0001);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

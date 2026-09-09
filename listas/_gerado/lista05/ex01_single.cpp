// ex01 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <vector>
#include <optional>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX01_H
#define EX01_H

// Retorna o indice da primeira ocorrencia de alvo em v,
// ou std::nullopt se alvo nao estiver no vector.
std::optional<int> busca_linear(const std::vector<int>& v, int alvo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::optional<int> busca_linear(const std::vector<int>& v, int alvo) {
    // TODO: percorra v com um indice; ao achar alvo, devolva o indice.
    // Se o laco terminar sem achar, devolva std::nullopt.
    return std::nullopt;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<int> v = {4, 1, 9, 1};

    assert(busca_linear(v, 4).value() == 0);
    assert(busca_linear(v, 9).value() == 2);

    // primeira ocorrencia, nao a ultima
    assert(busca_linear(v, 1).value() == 1);

    assert(!(busca_linear(v, 7).has_value()));

    std::vector<int> vazio;
    assert(!(busca_linear(vazio, 1).has_value()));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

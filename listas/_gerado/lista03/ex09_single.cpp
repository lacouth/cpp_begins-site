// ex09 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>
#include <optional>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX09_H
#define EX09_H

// Retorna o primeiro caractere de "texto" que ja havia aparecido antes,
// ou std::nullopt se todos os caracteres forem distintos.
std::optional<char> primeiro_repetido(const std::string& texto);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::optional<char> primeiro_repetido(const std::string& texto) {
    // TODO: para cada posicao i, verifique se texto[i] ja apareceu
    // em alguma posicao anterior (um laco de j = 0 ate i).
    // Se ja apareceu, devolva texto[i]. Se o laco terminar, devolva std::nullopt.
    return std::nullopt;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    auto r1 = primeiro_repetido("programacao");
    assert(r1.has_value());
    assert(r1.value() == 'r');

    // todos distintos
    assert(!(primeiro_repetido("bola").has_value()));

    // texto vazio e texto de um caractere so
    assert(!(primeiro_repetido("").has_value()));
    assert(!(primeiro_repetido("a").has_value()));

    // repeticao logo no comeco
    auto r2 = primeiro_repetido("aa");
    assert(r2.has_value());
    assert(r2.value() == 'a');

    // a primeira repeticao nao e a do caractere mais frequente
    auto r3 = primeiro_repetido("abcbb");
    assert(r3.has_value());
    assert(r3.value() == 'b');

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

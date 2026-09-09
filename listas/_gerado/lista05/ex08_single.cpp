// ex08 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX08_H
#define EX08_H

struct Musica {
    std::string nome;
    int duracao;
};

// Ordena a playlist pela duracao, em ordem crescente.
void ordena_por_duracao(std::vector<Musica>& playlist);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void ordena_por_duracao(std::vector<Musica>& playlist) {
    // TODO: chame std::sort passando uma lambda que recebe duas Musica
    // e devolve true quando a primeira e mais curta que a segunda.
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<Musica> playlist = {
        {"longa", 300},
        {"curta", 120},
        {"media", 210},
    };
    ordena_por_duracao(playlist);
    assert(playlist[0].nome == std::string("curta"));
    assert(playlist[1].nome == std::string("media"));
    assert(playlist[2].nome == std::string("longa"));

    std::vector<Musica> ja_ordenada = {{"a", 1}, {"b", 2}};
    ordena_por_duracao(ja_ordenada);
    assert(ja_ordenada[0].nome == std::string("a"));

    std::vector<Musica> vazia;
    ordena_por_duracao(vazia);
    assert(vazia.empty());

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

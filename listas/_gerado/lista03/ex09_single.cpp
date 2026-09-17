// ex09 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX09_H
#define EX09_H

// Escreve em "repetido" o primeiro caractere de "texto" que ja havia
// aparecido antes. Devolve true se encontrou repeticao; devolve false e nao
// mexe em "repetido" se todos os caracteres forem distintos.
bool primeiro_repetido(const std::string& texto, char& repetido);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool primeiro_repetido(const std::string& texto, char& repetido) {
    // TODO: para cada posicao i, verifique se texto[i] ja apareceu
    // em alguma posicao anterior (um laco de j = 0 ate i).
    // Se ja apareceu, escreva texto[i] em "repetido" e devolva true.
    // Se o laco terminar, devolva false.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    char c = '?';

    assert(primeiro_repetido("programacao", c));
    assert(c == 'r');

    // todos distintos: devolve false e nao mexe no parametro de saida
    c = '?';
    assert(!primeiro_repetido("bola", c));
    assert(c == '?');

    // texto vazio e texto de um caractere so
    assert(!primeiro_repetido("", c));
    assert(!primeiro_repetido("a", c));

    // repeticao logo no comeco
    assert(primeiro_repetido("aa", c));
    assert(c == 'a');

    // a primeira repeticao nao e a do caractere mais frequente
    assert(primeiro_repetido("abcbb", c));
    assert(c == 'b');

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

// ex06 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX06_H
#define EX06_H

// Retorna a posicao da primeira ocorrencia de "alvo" em "texto",
// ou -1 se o caractere nao aparecer.
int busca_posicao(const std::string& texto, char alvo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int busca_posicao(const std::string& texto, char alvo) {
    // TODO: percorra "texto"; se achar "alvo", retorne o indice.
    // Se terminar o laco sem achar, retorne -1.
    return -1;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(busca_posicao("programacao", 'g') == 3);
    assert(busca_posicao("programacao", 'z') == -1);
    assert(busca_posicao("abc", 'a') == 0);
    assert(busca_posicao("", 'a') == -1);

    // devolve a PRIMEIRA ocorrencia
    assert(busca_posicao("banana", 'a') == 1);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

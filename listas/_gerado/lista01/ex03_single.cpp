// ex03 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX03_H
#define EX03_H

// Retorna o texto invertido caractere por caractere.
std::string inverte(const std::string& texto);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::string inverte(const std::string& texto) {
    // TODO: monte uma nova string percorrendo "texto" de tras para frente.
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(inverte("abc") == std::string("cba"));
    assert(inverte("ana") == std::string("ana"));
    assert(inverte("") == std::string(""));
    assert(inverte("a") == std::string("a"));
    assert(inverte("cpp") == std::string("ppc"));
    std::cout << "Todos os testes passaram!\n";
    return 0;
}

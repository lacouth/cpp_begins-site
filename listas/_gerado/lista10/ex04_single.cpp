// ex04 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <memory>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX04_H
#define EX04_H

class Recurso {
private:
    int valor_;

public:
    explicit Recurso(int valor) : valor_(valor) {}
    int valor() const { return valor_; }
};

// Cria um Recurso(valor) alocado dinamicamente e retorna um unique_ptr para ele.
std::unique_ptr<Recurso> cria_recurso(int valor);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::unique_ptr<Recurso> cria_recurso(int valor) {
    // TODO: use std::make_unique<Recurso>(valor) e retorne o resultado.
    return nullptr;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    auto r = cria_recurso(21);
    assert(r != nullptr);
    assert(r->valor() == 21);

    auto r2 = cria_recurso(0);
    assert(r2->valor() == 0);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

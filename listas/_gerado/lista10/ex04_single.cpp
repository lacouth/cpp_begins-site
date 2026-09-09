// ex04 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <memory>
#include <utility>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX04_H
#define EX04_H

class Registro {
private:
    int valor_;

public:
    static inline int total_vivos = 0;

    explicit Registro(int valor) : valor_(valor) { total_vivos++; }
    ~Registro() { total_vivos--; }

    int valor() const { return valor_; }
};

// Cria um Registro(valor) alocado dinamicamente e devolve um unique_ptr para ele.
std::unique_ptr<Registro> cria_registro(int valor);

// Recebe a POSSE do registro (por valor, exigindo std::move na chamada),
// devolve o valor guardado e deixa o objeto ser destruido no fim da funcao.
int consome(std::unique_ptr<Registro> registro);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::unique_ptr<Registro> cria_registro(int valor) {
    // TODO: use std::make_unique<Registro>(valor) e retorne o resultado.
    return nullptr;
}

int consome(std::unique_ptr<Registro> registro) {
    // TODO: guarde registro->valor() numa variavel e devolva essa variavel.
    // Nao escreva delete: quando a funcao terminar, o unique_ptr sai de
    // escopo e destroi o Registro sozinho.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    Registro::total_vivos = 0;

    auto r = cria_registro(21);
    assert(r != nullptr);
    assert(r->valor() == 21);
    assert(Registro::total_vivos == 1);

    // std::move entrega a posse: r fica sem dono nenhum...
    int v = consome(std::move(r));
    assert(v == 21);
    assert(r == nullptr);

    // ...e o Registro foi destruido no fim de consome(), sem nenhum delete
    assert(Registro::total_vivos == 0);

    // um unique_ptr que sai de escopo sozinho tambem destroi o objeto
    {
        auto temporario = cria_registro(7);
        assert(Registro::total_vivos == 1);
        assert(temporario->valor() == 7);
    }
    assert(Registro::total_vivos == 0);

    // o resultado de cria_registro pode ser entregue direto, sem variavel
    assert(consome(cria_registro(0)) == 0);
    assert(Registro::total_vivos == 0);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

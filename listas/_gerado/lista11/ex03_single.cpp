// ex03 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX03_H
#define EX03_H

class Duracao {
private:
    int minutos_;
    int segundos_;

public:
    Duracao(int minutos, int segundos) : minutos_(minutos), segundos_(segundos) {}

    int minutos() const { return minutos_; }
    int segundos() const { return segundos_; }

    Duracao operator+(const Duracao& outra) const;
    bool operator==(const Duracao& outra) const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
Duracao Duracao::operator+(const Duracao& outra) const {
    // TODO: some os minutos e os segundos separadamente e depois NORMALIZE:
    // cada 60 segundos viram 1 minuto (use / 60 e % 60).
    // Devolva um novo Duracao com o resultado ja normalizado.
    return Duracao(0, 0);
}

bool Duracao::operator==(const Duracao& outra) const {
    // TODO: retorne true se minutos_ e segundos_ forem iguais aos da outra.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    Duracao a(1, 30);
    Duracao b(2, 45);

    // 75 segundos precisam virar 1 min e 15 s
    Duracao c = a + b;
    assert(c.minutos() == 4);
    assert(c.segundos() == 15);

    // soma que nao precisa de normalizacao
    Duracao simples = Duracao(1, 10) + Duracao(2, 20);
    assert(simples.minutos() == 3);
    assert(simples.segundos() == 30);

    // exatamente 60 segundos: vira 1 minuto e 0 segundo
    Duracao cheio = Duracao(0, 30) + Duracao(0, 30);
    assert(cheio.minutos() == 1);
    assert(cheio.segundos() == 0);

    // somar zero nao muda nada
    Duracao zero(0, 0);
    Duracao igual = a + zero;
    assert(igual.minutos() == 1);
    assert(igual.segundos() == 30);

    assert(!(a == b));
    Duracao d(1, 30);
    assert(a == d);

    // a soma normalizada e igual a duracao escrita direto
    assert((Duracao(0, 45) + Duracao(0, 45)) == Duracao(1, 30));

    // minutos iguais, segundos diferentes: nao sao iguais
    assert(!(Duracao(2, 0) == Duracao(2, 1)));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

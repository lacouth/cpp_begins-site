// ex02 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX02_H
#define EX02_H

enum class Cor { Verde, Amarelo, Vermelho };

class Semaforo {
private:
    Cor cor_;
    int trocas_;

public:
    Semaforo() : cor_(Cor::Vermelho), trocas_(0) {}

    void avanca();
    Cor cor() const;
    int trocas() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void Semaforo::avanca() {
    // TODO: passe para a proxima cor do ciclo
    // (Verde -> Amarelo -> Vermelho -> Verde) e incremente trocas_.
    // Nao esqueca do caso Vermelho, que volta para Verde.
}

Cor Semaforo::cor() const {
    // TODO: retorne cor_.
    return Cor::Vermelho;
}

int Semaforo::trocas() const {
    // TODO: retorne trocas_.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    Semaforo s;
    assert(s.cor() == Cor::Vermelho);
    assert(s.trocas() == 0);

    s.avanca();
    assert(s.cor() == Cor::Verde);
    assert(s.trocas() == 1);

    s.avanca();
    assert(s.cor() == Cor::Amarelo);

    s.avanca();
    assert(s.cor() == Cor::Vermelho);   // deu a volta no ciclo
    assert(s.trocas() == 3);

    // duas voltas completas: o ciclo nao pode "parar" no vermelho
    for (int i = 0; i < 6; i++) {
        s.avanca();
    }
    assert(s.cor() == Cor::Vermelho);
    assert(s.trocas() == 9);

    // cada semaforo tem o proprio estado
    Semaforo outro;
    assert(outro.cor() == Cor::Vermelho);
    assert(outro.trocas() == 0);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

// ex02 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX02_H
#define EX02_H

class MeioDeTransporte {
public:
    // Tempo de viagem, em horas, para percorrer a distancia dada em km.
    virtual double tempo_de_viagem(double km) const = 0;
    virtual ~MeioDeTransporte() {}
};

class Bicicleta : public MeioDeTransporte {
private:
    double velocidade_media_;      // km/h

public:
    explicit Bicicleta(double velocidade_media) : velocidade_media_(velocidade_media) {}
    double tempo_de_viagem(double km) const override;
};

class Carro : public MeioDeTransporte {
private:
    double velocidade_media_;      // km/h
    int minutos_de_parada_;        // a cada 100 km completos

public:
    Carro(double velocidade_media, int minutos_de_parada)
        : velocidade_media_(velocidade_media), minutos_de_parada_(minutos_de_parada) {}
    double tempo_de_viagem(double km) const override;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double Bicicleta::tempo_de_viagem(double km) const {
    // TODO: retorne km / velocidade_media_.
    return 0.0;
}

double Carro::tempo_de_viagem(double km) const {
    // TODO: comece com km / velocidade_media_.
    // Some as paradas: static_cast<int>(km) / 100 paradas, cada uma
    // custando minutos_de_parada_ / 60.0 horas.
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
static bool perto(double a, double b) {
    return std::fabs(a - b) < 0.0001;
}

int main() {
    Bicicleta b(20.0);
    assert(perto(b.tempo_de_viagem(50.0), 2.5));
    assert(perto(b.tempo_de_viagem(0.0), 0.0));

    Carro c(100.0, 30);
    // 250 km: 2.5 h de estrada + 2 paradas de 30 min = 3.5 h
    assert(perto(c.tempo_de_viagem(250.0), 3.5));

    // menos de 100 km: nenhuma parada
    assert(perto(c.tempo_de_viagem(80.0), 0.8));

    // exatamente 100 km: uma parada completa
    assert(perto(c.tempo_de_viagem(100.0), 1.5));

    // carro sem paradas se comporta como a bicicleta, so que mais rapido
    Carro sem_parada(50.0, 0);
    assert(perto(sem_parada.tempo_de_viagem(200.0), 4.0));

    // a mesma pergunta, feita pela referencia a classe base
    MeioDeTransporte& transporte = c;
    assert(perto(transporte.tempo_de_viagem(250.0), 3.5));

    MeioDeTransporte& outro = b;
    assert(perto(outro.tempo_de_viagem(50.0), 2.5));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

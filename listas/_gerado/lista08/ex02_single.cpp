// ex02 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <algorithm>
#include <optional>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX02_H
#define EX02_H

class Termometro {
private:
    double atual_;
    double minimo_;
    double maximo_;

public:
    explicit Termometro(double leitura_inicial)
        : atual_(leitura_inicial), minimo_(leitura_inicial), maximo_(leitura_inicial) {}

    void registra(double leitura);
    double atual() const;
    double minimo() const;
    double maximo() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void Termometro::registra(double leitura) {
    // TODO: atualize atual_ para leitura. Se leitura < minimo_, atualize minimo_.
    // Se leitura > maximo_, atualize maximo_.
}

double Termometro::atual() const {
    // TODO: retorne atual_.
    return 0.0;
}

double Termometro::minimo() const {
    // TODO: retorne minimo_.
    return 0.0;
}

double Termometro::maximo() const {
    // TODO: retorne maximo_.
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>
#include <cmath>

int main() {
    Termometro t(20.0);
    t.registra(25.0);
    t.registra(15.0);
    assert(std::abs((t.atual()) - (15.0)) <= (0.0001));
    assert(std::abs((t.minimo()) - (15.0)) <= (0.0001));
    assert(std::abs((t.maximo()) - (25.0)) <= (0.0001));

    Termometro t2(10.0);
    assert(std::abs((t2.atual()) - (10.0)) <= (0.0001));
    assert(std::abs((t2.minimo()) - (10.0)) <= (0.0001));
    assert(std::abs((t2.maximo()) - (10.0)) <= (0.0001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

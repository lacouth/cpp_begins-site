// ex05 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX05_H
#define EX05_H

class Sensor {
public:
    static inline int total_destruidos = 0;

    ~Sensor();
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
Sensor::~Sensor() {
    // TODO: incremente Sensor::total_destruidos (ou apenas total_destruidos,
    // dentro de um metodo da propria classe).
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    Sensor::total_destruidos = 0;
    {
        Sensor s1;
        Sensor s2;
        assert(Sensor::total_destruidos == 0);   // ainda nao saiu de escopo
    }
    assert(Sensor::total_destruidos == 2);

    {
        Sensor s3;
    }
    assert(Sensor::total_destruidos == 3);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

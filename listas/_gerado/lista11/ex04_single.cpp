// ex04 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <vector>
#include <memory>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX04_H
#define EX04_H

class Forma {
public:
    virtual double area() const = 0;
    virtual ~Forma() {}
};

class Circulo : public Forma {
private:
    double raio_;

public:
    explicit Circulo(double raio) : raio_(raio) {}
    double area() const override { return 3.14159 * raio_ * raio_; }
};

class Quadrado : public Forma {
private:
    double lado_;

public:
    explicit Quadrado(double lado) : lado_(lado) {}
    double area() const override { return lado_ * lado_; }
};

// Soma as areas de todas as formas do vector (chamada polimorfica).
double soma_areas(const std::vector<std::unique_ptr<Forma>>& formas);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double soma_areas(const std::vector<std::unique_ptr<Forma>>& formas) {
    // TODO: percorra "formas" (const auto& forma : formas) somando forma->area().
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<std::unique_ptr<Forma>> formas;
    formas.push_back(std::make_unique<Quadrado>(2.0));
    formas.push_back(std::make_unique<Circulo>(1.0));
    assert(std::abs((soma_areas(formas)) - (7.14159)) <= (0.001));

    std::vector<std::unique_ptr<Forma>> vazio;
    assert(std::abs((soma_areas(vazio)) - (0.0)) <= (0.0001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

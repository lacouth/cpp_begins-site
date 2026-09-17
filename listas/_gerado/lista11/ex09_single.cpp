// ex09 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <vector>
#include <memory>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX09_H
#define EX09_H

class Forma {
public:
    virtual double area() const = 0;
    virtual ~Forma() = default;
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

// Retorna o indice da forma de MAIOR area, ou -1 se o vector
// estiver vazio. Em caso de empate, devolve o indice da primeira.
int indice_maior_area(const std::vector<std::unique_ptr<Forma>>& formas);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int indice_maior_area(const std::vector<std::unique_ptr<Forma>>& formas) {
    // TODO: e a busca do melhor ate agora da Lista 05, so que o valor comparado
    // vem de uma chamada polimorfica: formas[i]->area().
    // Comece pelo indice 0 (nao por area 0) e trate o vector vazio.
    return -1;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<std::unique_ptr<Forma>> formas;
    formas.push_back(std::make_unique<Quadrado>(2.0));   // area 4
    formas.push_back(std::make_unique<Circulo>(3.0));    // area ~28.3
    formas.push_back(std::make_unique<Quadrado>(1.0));   // area 1
    assert(indice_maior_area(formas) == 1);

    std::vector<std::unique_ptr<Forma>> uma;
    uma.push_back(std::make_unique<Quadrado>(5.0));
    assert(indice_maior_area(uma) == 0);

    // empate: fica a primeira
    std::vector<std::unique_ptr<Forma>> empate;
    empate.push_back(std::make_unique<Quadrado>(2.0));
    empate.push_back(std::make_unique<Quadrado>(2.0));
    assert(indice_maior_area(empate) == 0);

    std::vector<std::unique_ptr<Forma>> vazio;
    assert(indice_maior_area(vazio) == -1);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

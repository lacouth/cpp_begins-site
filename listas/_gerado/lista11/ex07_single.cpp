// ex07 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <memory>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX07_H
#define EX07_H

class Produto {
protected:
    std::string nome_;
    double preco_;

public:
    Produto(const std::string& nome, double preco) : nome_(nome), preco_(preco) {}
    virtual ~Produto() = default;

    std::string nome() const { return nome_; }
    double preco() const { return preco_; }

    // Retorna o VALOR do desconto (nao o preco ja descontado).
    virtual double calcula_desconto() const = 0;
};

class ProdutoEletronico : public Produto {
public:
    ProdutoEletronico(const std::string& nome, double preco) : Produto(nome, preco) {}

    double calcula_desconto() const override;
};

class ProdutoAlimenticio : public Produto {
private:
    int dias_para_expirar_;

public:
    ProdutoAlimenticio(const std::string& nome, double preco, int dias_para_expirar)
        : Produto(nome, preco), dias_para_expirar_(dias_para_expirar) {}

    double calcula_desconto() const override;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
double ProdutoEletronico::calcula_desconto() const {
    // TODO: 10% de preco_ se preco_ > 1000.0; 5% caso contrario.
    return 0.0;
}

double ProdutoAlimenticio::calcula_desconto() const {
    // TODO: 20% de preco_ se dias_para_expirar_ <= 5; 10% caso contrario.
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    ProdutoEletronico tv("TV", 2000.0);
    assert(std::abs((tv.calcula_desconto()) - (200.0)) <= (0.0001));

    ProdutoEletronico fone("Fone", 200.0);
    assert(std::abs((fone.calcula_desconto()) - (10.0)) <= (0.0001));

    // Exatamente 1000 nao passa do limite: fica nos 5%.
    ProdutoEletronico limite("Monitor", 1000.0);
    assert(std::abs((limite.calcula_desconto()) - (50.0)) <= (0.0001));

    ProdutoAlimenticio leite("Leite", 10.0, 3);
    assert(std::abs((leite.calcula_desconto()) - (2.0)) <= (0.0001));

    // Exatamente 5 dias ainda conta como "perto de expirar".
    ProdutoAlimenticio queijo("Queijo", 50.0, 5);
    assert(std::abs((queijo.calcula_desconto()) - (10.0)) <= (0.0001));

    ProdutoAlimenticio arroz("Arroz", 20.0, 90);
    assert(std::abs((arroz.calcula_desconto()) - (2.0)) <= (0.0001));

    // Todos somados por ponteiro da base.
    std::vector<std::unique_ptr<Produto>> carrinho;
    carrinho.push_back(std::make_unique<ProdutoEletronico>("TV", 2000.0));
    carrinho.push_back(std::make_unique<ProdutoAlimenticio>("Leite", 10.0, 3));
    double total = 0.0;
    for (const auto& p : carrinho) {
        total += p->calcula_desconto();
    }
    assert(std::abs((total) - (202.0)) <= (0.0001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

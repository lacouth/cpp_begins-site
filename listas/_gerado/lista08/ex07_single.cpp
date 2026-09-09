// ex07 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX07_H
#define EX07_H

class MaquinaDeVendas {
private:
    double saldo_ = 0.0;

public:
    // Aceita apenas 0.25, 0.50 e 1.00. Retorna true se a moeda foi aceita.
    bool insere_moeda(double valor);

    // Desconta preco * quantidade se o saldo cobrir. Retorna true se comprou.
    bool compra(double preco, int quantidade);

    double saldo() const;

    // Retorna o saldo atual e zera o saldo da maquina.
    double saca();
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool MaquinaDeVendas::insere_moeda(double valor) {
    // TODO: se valor for 0.25, 0.50 ou 1.00, some ao saldo_ e devolva true.
    // Qualquer outro valor: nao mexa no saldo_ e devolva false.
    return false;
}

bool MaquinaDeVendas::compra(double preco, int quantidade) {
    // TODO: calcule o total (preco * quantidade). Se saldo_ for suficiente,
    // desconte e devolva true; senao devolva false sem alterar saldo_.
    return false;
}

double MaquinaDeVendas::saldo() const {
    // TODO: devolva saldo_.
    return 0.0;
}

double MaquinaDeVendas::saca() {
    // TODO: guarde o saldo_ atual numa variavel, zere saldo_ e devolva o valor guardado.
    return 0.0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    MaquinaDeVendas m;
    assert(std::abs((m.saldo()) - (0.0)) <= (0.0001));

    assert(m.insere_moeda(0.25));
    assert(std::abs((m.saldo()) - (0.25)) <= (0.0001));

    // Moeda invalida: rejeitada, e o saldo nao pode mudar.
    assert(!(m.insere_moeda(0.30)));
    assert(std::abs((m.saldo()) - (0.25)) <= (0.0001));

    assert(m.insere_moeda(1.00));
    assert(std::abs((m.saldo()) - (1.25)) <= (0.0001));

    // Duas aguas a 0.50: cabe no saldo.
    assert(m.compra(0.50, 2));
    assert(std::abs((m.saldo()) - (0.25)) <= (0.0001));

    // Um suco a 1.50: nao cabe, e o saldo continua igual.
    assert(!(m.compra(1.50, 1)));
    assert(std::abs((m.saldo()) - (0.25)) <= (0.0001));

    assert(std::abs((m.saca()) - (0.25)) <= (0.0001));
    assert(std::abs((m.saldo()) - (0.0)) <= (0.0001));

    // Sacar de uma maquina vazia devolve 0.
    assert(std::abs((m.saca()) - (0.0)) <= (0.0001));

    // Comprar exatamente o saldo disponivel e permitido.
    MaquinaDeVendas exata;
    assert(exata.insere_moeda(0.50));
    assert(exata.compra(0.50, 1));
    assert(std::abs((exata.saldo()) - (0.0)) <= (0.0001));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

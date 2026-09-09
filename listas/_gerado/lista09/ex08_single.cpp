// ex08 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <vector>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX08_H
#define EX08_H

class Historico {
private:
    std::vector<double> leituras_;

public:
    void registra(double leitura);
    int quantidade() const;

    // Retorna o tamanho da maior sequencia de leituras ESTRITAMENTE
    // crescentes consecutivas. Historico vazio devolve 0; uma leitura
    // sozinha ja e uma sequencia de tamanho 1.
    int maior_sequencia_crescente() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void Historico::registra(double leitura) {
    // TODO: acrescente a leitura ao fim de leituras_.
}

int Historico::quantidade() const {
    // TODO: devolva o tamanho de leituras_.
    return 0;
}

int Historico::maior_sequencia_crescente() const {
    // TODO: percorra as leituras mantendo DUAS variaveis: o tamanho da
    // sequencia atual e o maior tamanho ja visto. Toda vez que a leitura
    // for maior que a anterior, a atual cresce; senao, ela volta a 1.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    Historico vazio;
    assert(vazio.quantidade() == 0);
    assert(vazio.maior_sequencia_crescente() == 0);

    Historico uma;
    uma.registra(5.0);
    assert(uma.maior_sequencia_crescente() == 1);

    Historico h;
    for (double x : {1.0, 2.0, 3.0, 1.0, 2.0}) {
        h.registra(x);
    }
    assert(h.quantidade() == 5);
    assert(h.maior_sequencia_crescente() == 3);

    Historico caindo;
    for (double x : {5.0, 4.0, 3.0}) {
        caindo.registra(x);
    }
    assert(caindo.maior_sequencia_crescente() == 1);

    // valores iguais quebram a sequencia: tem que ser ESTRITAMENTE crescente
    Historico iguais;
    for (double x : {1.0, 1.0, 2.0}) {
        iguais.registra(x);
    }
    assert(iguais.maior_sequencia_crescente() == 2);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

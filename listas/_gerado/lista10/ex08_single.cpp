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

// Regra do zero: o vector cuida de si, entao esta classe nao precisa de
// destrutor, construtor de copia nem operador de atribuicao.
class Serie {
private:
    std::vector<int> valores_;

public:
    void adiciona(int valor);
    int quantidade() const;

    // Retorna true se existirem DOIS elementos em posicoes diferentes
    // cuja soma seja igual a alvo.
    bool tem_par_com_soma(int alvo) const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void Serie::adiciona(int valor) {
    // TODO: acrescente valor ao fim de valores_.
}

int Serie::quantidade() const {
    // TODO: devolva o tamanho de valores_.
    return 0;
}

bool Serie::tem_par_com_soma(int alvo) const {
    // TODO: laco duplo. Para cada i, teste os j MAIORES que i -- assim
    // nenhum elemento e somado com ele mesmo e nenhum par se repete.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    Serie s;
    for (int x : {2, 7, 11, 15}) {
        s.adiciona(x);
    }
    assert(s.quantidade() == 4);
    assert(s.tem_par_com_soma(9));    // 2 + 7
    assert(s.tem_par_com_soma(26));   // 11 + 15
    assert(!(s.tem_par_com_soma(100)));

    // nao vale somar um elemento com ele mesmo
    Serie um;
    um.adiciona(4);
    assert(!(um.tem_par_com_soma(8)));

    // ...mas dois elementos iguais em posicoes diferentes valem
    Serie dois;
    dois.adiciona(4);
    dois.adiciona(4);
    assert(dois.tem_par_com_soma(8));

    Serie vazia;
    assert(!(vazia.tem_par_com_soma(0)));

    // regra do zero: copiar funciona sem escrever nada
    Serie copia = s;
    copia.adiciona(1);
    assert(copia.quantidade() == 5);
    assert(s.quantidade() == 4);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

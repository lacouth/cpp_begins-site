// ex06 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <vector>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX06_H
#define EX06_H

class BoletimAluno {
private:
    std::vector<double> notas_;

public:
    void adiciona_nota(double nota);
    double media() const;
    bool aprovado() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void BoletimAluno::adiciona_nota(double nota) {
    // TODO: adicione "nota" ao final de notas_ (push_back).
}

double BoletimAluno::media() const {
    // TODO: se notas_ estiver vazio, retorne 0.0. Senao, retorne a media.
    return 0.0;
}

bool BoletimAluno::aprovado() const {
    // TODO: retorne true se media() >= 6.0 (voce pode chamar media() aqui dentro).
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    BoletimAluno b;
    b.adiciona_nota(8.0);
    b.adiciona_nota(6.0);
    assert(std::abs((b.media()) - (7.0)) <= (0.0001));
    assert(b.aprovado());

    BoletimAluno vazio;
    assert(std::abs((vazio.media()) - (0.0)) <= (0.0001));

    BoletimAluno reprovado;
    reprovado.adiciona_nota(3.0);
    reprovado.adiciona_nota(4.0);
    assert(!(reprovado.aprovado()));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

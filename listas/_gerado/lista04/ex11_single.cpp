// ex11 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX11_H
#define EX11_H

// Devolve o indice da ultima ocorrencia de alvo em v, ou -1 se nao houver.
int ultima_ocorrencia(const std::vector<int>& v, int alvo);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int ultima_ocorrencia(const std::vector<int>& v, int alvo) {
    // TODO: guarde o tamanho em int n = static_cast<int>(v.size()) e percorra
    // de n - 1 ate 0. Nao use std::size_t no indice: andando para tras ele
    // nunca fica negativo, e o laco nao termina.
    return -1;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(ultima_ocorrencia({5, 7, 5, 2}, 5) == 2);
    assert(ultima_ocorrencia({5, 7, 5, 2}, 9) == -1);
    assert(ultima_ocorrencia({5, 7, 5, 2}, 2) == 3);
    assert(ultima_ocorrencia({5, 7, 5, 2}, 7) == 1);
    assert(ultima_ocorrencia({}, 5) == -1);
    assert(ultima_ocorrencia({4}, 4) == 0);
    assert(ultima_ocorrencia({4}, 5) == -1);
    assert(ultima_ocorrencia({-1, -1, -1}, -1) == 2);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

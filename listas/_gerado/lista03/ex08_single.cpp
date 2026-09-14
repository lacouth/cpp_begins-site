// ex08 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX08_H
#define EX08_H

enum class Prioridade { Baixa, Media, Alta };

struct Tarefa {
    std::string titulo;
    Prioridade prioridade;
    int minutos;
};

// Retorna quantos minutos reservar para a tarefa:
// Alta = o dobro de minutos, Media = minutos, Baixa = metade (divisao inteira).
int minutos_reservados(const Tarefa& t);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
int minutos_reservados(const Tarefa& t) {
    // TODO: use um switch sobre t.prioridade.
    // Lembre do qualificador: e "case Prioridade::Alta:", nao "case Alta:".
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(minutos_reservados(Tarefa{"entregar relatorio", Prioridade::Alta, 30}) == 60);
    assert(minutos_reservados(Tarefa{"responder e-mails", Prioridade::Media, 30}) == 30);
    assert(minutos_reservados(Tarefa{"organizar mesa", Prioridade::Baixa, 45}) == 22);

    // metade de um numero par, e os casos de borda com zero
    assert(minutos_reservados(Tarefa{"alongar", Prioridade::Baixa, 10}) == 5);
    assert(minutos_reservados(Tarefa{"nada", Prioridade::Alta, 0}) == 0);
    assert(minutos_reservados(Tarefa{"nada", Prioridade::Baixa, 1}) == 0);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

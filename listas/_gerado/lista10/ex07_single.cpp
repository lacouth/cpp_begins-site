// ex07 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>
#include <vector>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX07_H
#define EX07_H

class ListaDeTarefas {
private:
    std::vector<std::string> tarefas_;

public:
    void adiciona(const std::string& tarefa);
    // Remove a primeira ocorrencia da tarefa. Retorna true se removeu.
    bool remove(const std::string& tarefa);
    int quantidade() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void ListaDeTarefas::adiciona(const std::string& tarefa) {
    // TODO: push_back da tarefa.
}

bool ListaDeTarefas::remove(const std::string& tarefa) {
    // TODO: percorra tarefas_ com um indice; ao achar a tarefa, chame
    // tarefas_.erase(tarefas_.begin() + i) e devolva true.
    // Se o laco terminar sem achar, devolva false.
    return false;
}

int ListaDeTarefas::quantidade() const {
    // TODO: devolva o tamanho de tarefas_.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    ListaDeTarefas t;
    assert(!(t.remove("estudar")));

    t.adiciona("estudar");
    t.adiciona("comprar cabo");
    assert(t.quantidade() == 2);

    assert(t.remove("estudar"));
    assert(t.quantidade() == 1);

    assert(!(t.remove("estudar")));
    assert(t.quantidade() == 1);

    // So a primeira ocorrencia sai.
    ListaDeTarefas repetida;
    repetida.adiciona("revisar");
    repetida.adiciona("revisar");
    assert(repetida.remove("revisar"));
    assert(repetida.quantidade() == 1);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

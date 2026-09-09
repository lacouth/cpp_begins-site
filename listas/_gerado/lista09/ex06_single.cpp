// ex06 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX06_H
#define EX06_H

class ListaDeCompras {
private:
    std::vector<std::string> itens_;

public:
    // Acrescenta o item so se ele ainda nao estiver na lista.
    // Retorna true se acrescentou, false se ja existia.
    bool adiciona(const std::string& item);
    bool contem(const std::string& item) const;
    int quantidade() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool ListaDeCompras::adiciona(const std::string& item) {
    // TODO: se contem(item) for true, devolva false sem mexer na lista.
    // Senao, faca push_back e devolva true.
    return false;
}

bool ListaDeCompras::contem(const std::string& item) const {
    // TODO: percorra itens_ procurando por item.
    return false;
}

int ListaDeCompras::quantidade() const {
    // TODO: devolva o tamanho de itens_ (cuidado: .size() devolve size_t,
    // converta para int com static_cast<int>).
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    ListaDeCompras l;
    assert(l.quantidade() == 0);
    assert(!(l.contem("cafe")));

    assert(l.adiciona("cafe"));
    assert(l.contem("cafe"));
    assert(l.quantidade() == 1);

    assert(!(l.adiciona("cafe")));
    assert(l.quantidade() == 1);

    assert(l.adiciona("acucar"));
    assert(l.quantidade() == 2);

    // Regra do zero: copiar a lista funciona sem escrever construtor de copia.
    ListaDeCompras copia = l;
    assert(copia.quantidade() == 2);
    copia.adiciona("leite");
    assert(copia.quantidade() == 3);
    assert(l.quantidade() == 2);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

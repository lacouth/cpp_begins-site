// ex02 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <algorithm>
#include <optional>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX02_H
#define EX02_H

#include <string>
#include <vector>

class Playlist {
private:
    std::vector<std::string> musicas_;

public:
    void adiciona(const std::string& musica);
    int quantidade() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void Playlist::adiciona(const std::string& musica) {
    // TODO: adicione "musica" ao final de musicas_.
}

int Playlist::quantidade() const {
    // TODO: retorne o tamanho de musicas_.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
#include <cassert>
#include <iostream>

int main() {
    Playlist p;
    p.adiciona("musica A");
    p.adiciona("musica B");
    assert(p.quantidade() == 2);

    Playlist copia = p;
    copia.adiciona("musica C");
    assert(p.quantidade() == 2);
    assert(copia.quantidade() == 3);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

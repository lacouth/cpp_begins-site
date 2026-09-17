// ex03 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX03_H
#define EX03_H

class HistoricoNavegacao {
private:
    std::vector<std::string> paginas_;

public:
    void visita(const std::string& pagina);
    // Escreve a ultima pagina visitada em "pagina" e devolve true.
    // Devolve false e nao mexe em "pagina" se o historico estiver vazio.
    bool ultima_visitada(std::string& pagina) const;
    int total_visitas() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void HistoricoNavegacao::visita(const std::string& pagina) {
    // TODO: adicione "pagina" ao final de paginas_.
}

bool HistoricoNavegacao::ultima_visitada(std::string& pagina) const {
    // TODO: se paginas_ estiver vazio, retorne std::nullopt.
    // Senao, retorne o ultimo elemento de paginas_.
    return false;
}

int HistoricoNavegacao::total_visitas() const {
    // TODO: retorne o tamanho de paginas_.
    return 0;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    HistoricoNavegacao h;
    h.visita("home");
    h.visita("perfil");
    std::string ultima;
    assert(h.ultima_visitada(ultima));
    assert(ultima == std::string("perfil"));
    assert(h.total_visitas() == 2);

    HistoricoNavegacao vazio;
    std::string nada = "intocada";
    assert(!vazio.ultima_visitada(nada));
    assert(nada == std::string("intocada"));
    assert(vazio.total_visitas() == 0);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

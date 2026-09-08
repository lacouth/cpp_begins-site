// ex03 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include <optional>

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
    std::optional<std::string> ultima_visitada() const;
    int total_visitas() const;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
void HistoricoNavegacao::visita(const std::string& pagina) {
    // TODO: adicione "pagina" ao final de paginas_.
}

std::optional<std::string> HistoricoNavegacao::ultima_visitada() const {
    // TODO: se paginas_ estiver vazio, retorne std::nullopt.
    // Senao, retorne o ultimo elemento de paginas_.
    return std::nullopt;
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
    auto ultima = h.ultima_visitada();
    assert(ultima.has_value());
    assert(ultima.value() == std::string("perfil"));
    assert(h.total_visitas() == 2);

    HistoricoNavegacao vazio;
    assert(!vazio.ultima_visitada().has_value());
    assert(vazio.total_visitas() == 0);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

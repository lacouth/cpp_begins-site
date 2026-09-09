// ex07 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX07_H
#define EX07_H

struct Pessoa {
    std::string nome;
    int idade;
    double altura;
};

// Retorna o indice da primeira pessoa chamada "nome",
// ou std::nullopt se nenhuma pessoa tiver esse nome.
std::optional<int> encontra_pessoa(const std::vector<Pessoa>& pessoas,
                                   const std::string& nome);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::optional<int> encontra_pessoa(const std::vector<Pessoa>& pessoas,
                                   const std::string& nome) {
    // TODO: percorra pessoas com um indice; ao achar alguem com esse nome,
    // devolva o indice. Se o laco terminar sem achar, devolva std::nullopt.
    return std::nullopt;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::vector<Pessoa> pessoas = {
        {"Ana", 20, 1.65},
        {"Bruno", 31, 1.80},
        {"Carla", 45, 1.70},
    };

    assert(encontra_pessoa(pessoas, "Ana").has_value());
    assert(encontra_pessoa(pessoas, "Ana").value() == 0);
    assert(encontra_pessoa(pessoas, "Bruno").value() == 1);
    assert(encontra_pessoa(pessoas, "Carla").value() == 2);
    assert(!(encontra_pessoa(pessoas, "Daniel").has_value()));

    std::vector<Pessoa> vazio;
    assert(!(encontra_pessoa(vazio, "Ana").has_value()));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

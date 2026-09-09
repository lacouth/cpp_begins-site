// ex06 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include <memory>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX06_H
#define EX06_H

class Dispositivo {
protected:
    std::string modelo_;
    int armazenamento_gb_;

public:
    Dispositivo(const std::string& modelo, int armazenamento_gb)
        : modelo_(modelo), armazenamento_gb_(armazenamento_gb) {}
    virtual ~Dispositivo() = default;

    std::string modelo() const { return modelo_; }
    int armazenamento_gb() const { return armazenamento_gb_; }

    virtual std::string detalhes() const {
        return modelo_ + " | " + std::to_string(armazenamento_gb_) + " GB";
    }
};

class Notebook : public Dispositivo {
private:
    std::string sistema_operacional_;

public:
    Notebook(const std::string& modelo, int armazenamento_gb,
             const std::string& sistema_operacional)
        : Dispositivo(modelo, armazenamento_gb),
          sistema_operacional_(sistema_operacional) {}

    std::string detalhes() const override;
};

class Tablet : public Dispositivo {
private:
    bool tem_5g_;

public:
    Tablet(const std::string& modelo, int armazenamento_gb, bool tem_5g)
        : Dispositivo(modelo, armazenamento_gb), tem_5g_(tem_5g) {}

    std::string detalhes() const override;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::string Notebook::detalhes() const {
    // TODO: devolva Dispositivo::detalhes() + " | SO: " + sistema_operacional_.
    return "";
}

std::string Tablet::detalhes() const {
    // TODO: devolva Dispositivo::detalhes() + " | 5G: Sim" ou " | 5G: Nao",
    // conforme o valor de tem_5g_.
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    Notebook n("Dell XPS 13", 512, "Linux");
    assert(n.detalhes() == std::string("Dell XPS 13 | 512 GB | SO: Linux"));

    Tablet com_5g("Galaxy Tab", 128, true);
    assert(com_5g.detalhes() == std::string("Galaxy Tab | 128 GB | 5G: Sim"));

    Tablet sem_5g("iPad", 64, false);
    assert(sem_5g.detalhes() == std::string("iPad | 64 GB | 5G: Nao"));

    // A base continua funcionando como base.
    Dispositivo generico("Generico", 32);
    assert(generico.detalhes() == std::string("Generico | 32 GB"));

    // Chamado por ponteiro da base, cada objeto usa a sua propria versao.
    std::vector<std::unique_ptr<Dispositivo>> aparelhos;
    aparelhos.push_back(std::make_unique<Notebook>("Dell XPS 13", 512, "Linux"));
    aparelhos.push_back(std::make_unique<Tablet>("iPad", 64, false));
    assert(aparelhos[0]->detalhes() == std::string("Dell XPS 13 | 512 GB | SO: Linux"));
    assert(aparelhos[1]->detalhes() == std::string("iPad | 64 GB | 5G: Nao"));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

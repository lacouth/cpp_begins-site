// ex08 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX08_H
#define EX08_H

class Chamado {
protected:
    int id_;
    std::string descricao_;

public:
    Chamado(int id, const std::string& descricao) : id_(id), descricao_(descricao) {}
    virtual ~Chamado() = default;

    int id() const { return id_; }
    std::string descricao() const { return descricao_; }

    // Retorna a orientacao de atendimento para este chamado.
    virtual std::string processar() const = 0;
};

class ChamadoHardware : public Chamado {
public:
    ChamadoHardware(int id, const std::string& descricao) : Chamado(id, descricao) {}

    std::string processar() const override;
};

class ChamadoSoftware : public Chamado {
public:
    ChamadoSoftware(int id, const std::string& descricao) : Chamado(id, descricao) {}

    std::string processar() const override;
};

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::string ChamadoHardware::processar() const {
    // TODO: se descricao_ contiver "impressora" E "papel", devolva
    // "Verificar papel preso na impressora".
    // Caso contrario, "Encaminhar para suporte de hardware".
    return "";
}

std::string ChamadoSoftware::processar() const {
    // TODO: se descricao_ contiver "erro" E "instalacao", devolva
    // "Realizar reinstalacao do software".
    // Caso contrario, "Encaminhar para suporte de software".
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    ChamadoHardware preso(1, "a impressora esta com papel preso");
    assert(preso.processar() == std::string("Verificar papel preso na impressora"));

    // So uma das duas palavras nao basta.
    ChamadoHardware so_impressora(2, "a impressora nao liga");
    assert(so_impressora.processar() == std::string("Encaminhar para suporte de hardware"));

    ChamadoHardware outro(3, "monitor com listras");
    assert(outro.processar() == std::string("Encaminhar para suporte de hardware"));

    ChamadoSoftware reinstalar(4, "erro durante a instalacao do sistema");
    assert(reinstalar.processar() == std::string("Realizar reinstalacao do software"));

    ChamadoSoftware so_erro(5, "erro ao abrir o programa");
    assert(so_erro.processar() == std::string("Encaminhar para suporte de software"));

    // A fila de triagem trata todos pela classe base.
    std::vector<std::unique_ptr<Chamado>> fila;
    fila.push_back(std::make_unique<ChamadoHardware>(6, "papel preso na impressora"));
    fila.push_back(std::make_unique<ChamadoSoftware>(7, "nao consigo entrar"));
    assert(fila[0]->processar() == std::string("Verificar papel preso na impressora"));
    assert(fila[1]->processar() == std::string("Encaminhar para suporte de software"));
    assert(fila[0]->id() == 6);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

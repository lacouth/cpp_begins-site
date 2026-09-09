// ex04 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <cassert>
#include <iostream>
#include <string>
#include <optional>

// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX04_H
#define EX04_H

// Converte texto para int. Aceita um '-' inicial seguido de pelo menos um
// digito, e nada alem de digitos depois disso.
// Retorna std::nullopt se o texto nao for um inteiro valido.
std::optional<int> converte_para_int(const std::string& texto);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::optional<int> converte_para_int(const std::string& texto) {
    // TODO:
    // 1. texto vazio -> std::nullopt.
    // 2. se comecar com '-', guarde que e negativo e comece a ler do indice 1;
    //    senao comece do indice 0. Se nao sobrar nenhum caractere, nullopt.
    // 3. percorra os caracteres restantes: se algum nao for digito
    //    (c >= '0' && c <= '9'), devolva nullopt;
    //    senao faca resultado = resultado * 10 + (c - '0').
    // 4. devolva o resultado, com o sinal.
    return std::nullopt;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    assert(converte_para_int("42").value() == 42);
    assert(converte_para_int("0").value() == 0);
    assert(converte_para_int("7").value() == 7);

    // zeros a esquerda sao aceitos
    assert(converte_para_int("007").value() == 7);

    // negativos
    assert(converte_para_int("-7").value() == -7);
    assert(converte_para_int("-1234").value() == -1234);

    // invalidos
    assert(!(converte_para_int("").has_value()));
    assert(!(converte_para_int("-").has_value()));
    assert(!(converte_para_int("12a").has_value()));
    assert(!(converte_para_int("a12").has_value()));
    assert(!(converte_para_int("1 2").has_value()));
    assert(!(converte_para_int(" 12").has_value()));
    assert(!(converte_para_int("3.14").has_value()));
    assert(!(converte_para_int("--5").has_value()));
    assert(!(converte_para_int("5-").has_value()));

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

// ex04 — versao de arquivo unico (gerada automaticamente,
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
#ifndef EX04_H
#define EX04_H

// Converte texto para int. Aceita um '-' inicial seguido de pelo menos um
// digito, e nada alem de digitos depois disso.
// Devolve true e escreve em "valor" se o texto for um inteiro valido;
// devolve false e nao mexe em "valor" caso contrario.
bool converte_para_int(const std::string& texto, int& valor);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
bool converte_para_int(const std::string& texto, int& valor) {
    // TODO:
    // 1. texto vazio -> devolva false.
    // 2. se comecar com '-', guarde que e negativo e comece a ler do indice 1;
    //    senao comece do indice 0. Se nao sobrar nenhum caractere, false.
    // 3. percorra os caracteres restantes: se algum nao for digito
    //    (c >= '0' && c <= '9'), devolva false;
    //    senao faca resultado = resultado * 10 + (c - '0').
    // 4. escreva o resultado com o sinal em "valor" e devolva true.
    return false;
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    int v = 0;

    assert(converte_para_int("42", v));
    assert(v == 42);
    assert(converte_para_int("0", v));
    assert(v == 0);
    assert(converte_para_int("7", v));
    assert(v == 7);

    // zeros a esquerda sao aceitos
    assert(converte_para_int("007", v));
    assert(v == 7);

    // negativos
    assert(converte_para_int("-7", v));
    assert(v == -7);
    assert(converte_para_int("-1234", v));
    assert(v == -1234);

    // invalidos: devolvem false e nao mexem no parametro de saida
    v = 99;
    assert(!converte_para_int("", v));
    assert(v == 99);
    assert(!converte_para_int("-", v));
    assert(!converte_para_int("12a", v));
    assert(!converte_para_int("a12", v));
    assert(!converte_para_int("1 2", v));
    assert(!converte_para_int(" 12", v));
    assert(!converte_para_int("3.14", v));
    assert(!converte_para_int("--5", v));
    assert(!converte_para_int("5-", v));
    assert(v == 99);

    std::cout << "Todos os testes passaram!\n";
    return 0;
}

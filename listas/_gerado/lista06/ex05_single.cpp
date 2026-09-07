// ex05 — versao de arquivo unico (gerada automaticamente,
// nao edite este arquivo direto: edite os fontes em exercicios/ e rode
// tools/gerar_single.py --todos de novo).
//
// Cole este arquivo inteiro no seu compilador online e rode.

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <algorithm>
#include <optional>

// ============================================================
// NAO ALTERE — infraestrutura de teste (verifica.hpp)
// ============================================================
#ifndef VERIFICA_HPP
#define VERIFICA_HPP

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <type_traits>
#include <utility>

#if !defined(_WIN32)
#include <unistd.h>
#endif

namespace verifica_detalhe {

inline int& total_testes() {
    static int n = 0;
    return n;
}

inline int& total_falhas() {
    static int n = 0;
    return n;
}

// Detecta se a saída é um terminal interativo, para só usar cor nesse caso.
// Compiladores online costumam redirecionar stdout para um arquivo/pipe,
// então o texto puro precisa continuar legível sem cor nenhuma.
inline bool saida_e_terminal() {
#if defined(_WIN32)
    return false;
#else
    return isatty(fileno(stdout)) != 0;
#endif
}

inline const char* cor(const char* codigo) {
    return saida_e_terminal() ? codigo : "";
}

// Fallback para tipos sem operator<< (ex.: structs do aluno sem impressão).
// Detecção simples via SFINAE.
template <typename T, typename = void>
struct tem_impressao : std::false_type {};

template <typename T>
struct tem_impressao<T, decltype(void(std::declval<std::ostream&>() << std::declval<const T&>()))>
    : std::true_type {};

template <typename T>
typename std::enable_if<tem_impressao<T>::value, std::string>::type
para_texto(const T& valor) {
    std::ostringstream oss;
    oss << valor;
    return oss.str();
}

template <typename T>
typename std::enable_if<!tem_impressao<T>::value, std::string>::type
para_texto(const T&) {
    return "<sem impressao>";
}

inline void registra_resultado(bool passou, const char* arquivo, int linha,
                                const std::string& expressao,
                                const std::string& obtido = "",
                                const std::string& esperado = "") {
    total_testes()++;
    if (passou) {
        std::cout << cor("\033[32m") << "[OK]    " << cor("\033[0m")
                  << arquivo << ":" << linha << ": " << expressao << "\n";
        return;
    }
    total_falhas()++;
    std::cout << cor("\033[31m") << "[FALHOU]" << cor("\033[0m") << " "
              << arquivo << ":" << linha << ": " << expressao << "\n";
    if (!obtido.empty() || !esperado.empty()) {
        std::cout << "         obtido:   " << obtido << "\n";
        std::cout << "         esperado: " << esperado << "\n";
    }
}

} // namespace verifica_detalhe

// VERIFICA(expr): passa se expr for verdadeira. Use quando não faz sentido
// comparar "obtido vs esperado" (ex.: checar uma condição composta).
#define VERIFICA(expr)                                                       \
    verifica_detalhe::registra_resultado((expr), __FILE__, __LINE__, #expr)

// VERIFICA_IGUAL(obtido, esperado): compara com == e imprime os dois valores
// quando falhar. É a macro que você vai mais usar.
#define VERIFICA_IGUAL(obtido, esperado)                                     \
    do {                                                                     \
        auto valor_obtido_ = (obtido);                                      \
        auto valor_esperado_ = (esperado);                                  \
        bool passou_ = (valor_obtido_ == valor_esperado_);                  \
        verifica_detalhe::registra_resultado(                               \
            passou_, __FILE__, __LINE__, #obtido " == " #esperado,          \
            verifica_detalhe::para_texto(valor_obtido_),                    \
            verifica_detalhe::para_texto(valor_esperado_));                 \
    } while (0)

// VERIFICA_PERTO(a, b, tolerancia): compara double/float com margem de erro,
// porque comparar ponto flutuante com == quase sempre falha por arredondamento.
#define VERIFICA_PERTO(a, b, tolerancia)                                     \
    do {                                                                     \
        auto valor_a_ = (a);                                                \
        auto valor_b_ = (b);                                                \
        double diferenca_ = static_cast<double>(valor_a_) - static_cast<double>(valor_b_); \
        if (diferenca_ < 0) diferenca_ = -diferenca_;                       \
        bool passou_ = diferenca_ <= (tolerancia);                          \
        verifica_detalhe::registra_resultado(                               \
            passou_, __FILE__, __LINE__, #a " ~= " #b,                      \
            verifica_detalhe::para_texto(valor_a_),                         \
            verifica_detalhe::para_texto(valor_b_));                        \
    } while (0)

// VERIFICA_LANCA(expr, TipoExcecao): passa se expr lançar exatamente TipoExcecao.
#define VERIFICA_LANCA(expr, TipoExcecao)                                    \
    do {                                                                     \
        bool lancou_certo_ = false;                                         \
        try {                                                                \
            (void)(expr);                                                   \
        } catch (const TipoExcecao&) {                                      \
            lancou_certo_ = true;                                           \
        } catch (...) {                                                      \
        }                                                                    \
        verifica_detalhe::registra_resultado(                               \
            lancou_certo_, __FILE__, __LINE__,                              \
            #expr " lanca " #TipoExcecao);                                  \
    } while (0)

// RESUMO_TESTES(): chame por último, dentro de main(). Imprime o placar
// e faz o programa terminar com código de saída != 0 se algo falhou —
// isso é o que permite ao check.sh e ao CI saberem se a lista passou.
#define RESUMO_TESTES()                                                      \
    do {                                                                     \
        int total_ = verifica_detalhe::total_testes();                     \
        int falhas_ = verifica_detalhe::total_falhas();                    \
        int ok_ = total_ - falhas_;                                        \
        std::cout << "\n" << ok_ << "/" << total_ << " testes passaram\n"; \
        if (falhas_ > 0) return 1;                                          \
        return 0;                                                           \
    } while (0)

#endif // VERIFICA_HPP


// ============================================================
// Declaracoes do exercicio
// ============================================================
#ifndef EX05_H
#define EX05_H

#include <map>
#include <string>

// Retorna a chave associada ao maior valor em m (assume que m nao esta vazio).
std::string chave_maior_valor(const std::map<std::string, int>& m);

#endif

// ============================================================
// ESCREVA SUA SOLUCAO AQUI
// ============================================================
std::string chave_maior_valor(const std::map<std::string, int>& m) {
    // TODO: percorra m com "for (const auto& [chave, valor] : m)" guardando
    // a chave do maior valor visto ate agora.
    return "";
}

// ============================================================
// NAO ALTERE — testes
// ============================================================
int main() {
    std::map<std::string, int> m1 = {{"a", 3}, {"b", 9}, {"c", 1}};
    VERIFICA_IGUAL(chave_maior_valor(m1), std::string("b"));

    std::map<std::string, int> m2 = {{"x", 5}};
    VERIFICA_IGUAL(chave_maior_valor(m2), std::string("x"));

    RESUMO_TESTES();
}

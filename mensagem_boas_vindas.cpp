/**
 * @file exercicio2.cpp
 * @brief Codigo em C++, com a finalidade didatica de pergunta e impressao
 * @version 0.1
 * @date 2023-06-13
 *
 * @details Este programa solicita ao usuário que digite seu nome e, em seguida, imprime uma mensagem de boas-vindas com o nome fornecido.
 *
 * @author Gustavo Camerino
 *
 * @note Este programa utiliza a biblioteca iostream para entrada e saída de dados e a biblioteca string para manipulação de strings.
 */

#include <iostream>
#include <string>

int main()
{
    std::string nome;
    std::cout << "Digite seu nome:" << std::endl;
    std::getline(std::cin, nome);
    std::cout << "Seja bem-vindo(a) " << nome << std::endl;

    return 0;
}

/**
 * @file exercicio4.cpp
 * @brief Codigo na qual faz uma verificacao de impar ou par
 * @version 0.1
 * @date 2023-06-13
 *
 * @details Este programa solicita ao usuário que digite um número inteiro e verifica se o número é par ou ímpar.
 *
 * @note Este programa utiliza a biblioteca iostream para entrada e saída de dados.
 *
 * @author Gustavo Camerino
 */

#include <iostream>

// Protótipos
void verifica(int a);

/**
 * @brief Função principal (main)
 * @return int O código de saída da função.
 */
int main()
{
    int num;
    std::cout << "Digite um número:" << std::endl;
    std::cin >> num;
    verifica(num);
    return 0;
}

/**
 * @brief Função para verificar se um número é par ou ímpar.
 *
 * @param a O número inteiro a ser verificado.
 */
void verifica(int a)
{
    if (a % 2 == 0)
    {
        std::cout << a << " é par" << std::endl;
    }
    else
    {
        std::cout << a << " é ímpar" << std::endl;
    }
}

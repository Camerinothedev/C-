/**
 * @file exercicio6.cpp
 * @brief Código para ler e imprimir um vetor de 5 elementos.
 * @version 0.1
 * @date 2023-06-13
 *
 * @details Este programa solicita ao usuário que digite 5 números e armazena-os em um vetor.
 * Em seguida, imprime os elementos do vetor na ordem em que foram inseridos.
 *
 * @note Este programa utiliza a biblioteca iostream para entrada e saída de dados.
 *
 * @author Gustavo Camerino
 */

#include <iostream>
#define N 5

/**
 * @brief Função principal (main)
 * @return int O código de saída da função.
 */
int main()
{
    int a = 0;
    int i;
    int vetor[N];
    for (i = 0; i < N; i++)
    {
        std::cout << "Escreva um número:" << std::endl;
        std::cin >> a;
        vetor[i] = a;
    }

    for (i = 0; i < N; i++)
    {
        std::cout << vetor[i] << std::endl;
    }

    return 0;
}

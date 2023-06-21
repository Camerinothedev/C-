/**
 * @file exercicio5.cpp
 * @brief Código para imprimir os números de 0 a 10.
 * @version 0.1
 * @date 2023-06-13
 *
 * @details Este programa utiliza um loop for para imprimir os números de 0 a 10.
 *
 * @note Este programa utiliza a biblioteca iostream para entrada e saída de dados.
 *
 * @author Gustavo Camerino
 */

#include <iostream>

/**
 * @brief Função principal (main)
 * @return int O código de saída da função.
 */
int main()
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        std::cout << i << std::endl;
    }

    return 0;
}

/**
 * @file exercicio7.cpp
 * @brief Código para somar duas matrizes de 3x3 e imprimir o resultado.
 * @version 0.1
 * @date 2023-06-13
 *
 * @details Este programa solicita ao usuário que digite os elementos de duas matrizes 3x3 (V1 e V2).
 * Em seguida, realiza a soma dos elementos correspondentes das matrizes e armazena o resultado em uma terceira matriz (V3).
 * Por fim, imprime a matriz resultante V3.
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
    int v1[3][3];
    int v2[3][3];
    int v3[3][3];

    int linha, coluna;

    // Leitura dos elementos da matriz v1
    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            std::cout << "Digite um valor para V1:" << std::endl;
            std::cin >> v1[linha][coluna];
        }
    }

    // Leitura dos elementos da matriz v2
    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            std::cout << "Digite um valor para V2:" << std::endl;
            std::cin >> v2[linha][coluna];
        }
    }

    // Soma dos elementos das matrizes v1 e v2 e armazenamento na matriz v3
    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            v3[linha][coluna] = v1[linha][coluna] + v2[linha][coluna];
        }
    }

    std::cout << "\n";

    // Impressão da matriz v3
    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            std::cout << "[  " << v3[linha][coluna] << "  ]"
                      << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

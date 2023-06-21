/**
 * @file exercicio9.cpp
 * @brief Código para calcular a matriz transposta de uma matriz 2x2 e imprimir o resultado.
 * @version 0.1
 * @date 2023-06-13
 *
 * @details Este programa solicita ao usuário que insira os elementos de uma matriz 2x2 (V1).
 * Em seguida, calcula a matriz transposta de V1 e armazena o resultado em uma segunda matriz (V2).
 * Por fim, imprime a matriz transposta V2.
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
    int linha, coluna;
    int v1[2][2];
    int v2[2][2];

    // Leitura dos elementos da matriz v1
    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            std::cout << "Insira na matriz v1: " << std::endl;
            std::cin >> v1[linha][coluna];
        }
    }

    // Cálculo da matriz transposta (cópia invertida) de v1 e armazenamento em v2
    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            v2[coluna][linha] = v1[linha][coluna];
        }
    }

    std::cout << "\n";
    std::cout << "Imprimindo matriz transposta:" << std::endl;

    // Impressão da matriz transposta v2
    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            std::cout << "[" << v2[linha][coluna] << "]"
                      << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

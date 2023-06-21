/**
 * @file exercicio8.cpp
 * @brief Código para multiplicar duas matrizes de 2x2 e imprimir o resultado.
 * @version 0.1
 * @date 2023-06-13
 *
 * @details Este programa solicita ao usuário que insira os elementos de duas matrizes 2x2 (V1 e V2).
 * Em seguida, realiza a multiplicação dos elementos correspondentes das matrizes e armazena o resultado em uma terceira matriz (V3).
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
    int v1[2][2];
    int v2[2][2];
    int v3[2][2];

    int linha, coluna;

    // Leitura dos elementos da matriz v1
    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            std::cout << "Insira na matriz v1 na posição "
                      << "[" << linha << "]"
                      << "[" << coluna << "]"
                      << ": ";
            std::cin >> v1[linha][coluna];
        }
    }

    // Leitura dos elementos da matriz v2
    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            std::cout << "Insira na matriz v2 na posição "
                      << "[" << linha << "]"
                      << "[" << coluna << "]"
                      << ": ";
            std::cin >> v2[linha][coluna];
        }
    }

    // Multiplicação dos elementos das matrizes v1 e v2 e armazenamento na matriz v3
    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            v3[linha][coluna] = v1[linha][coluna] * v2[linha][coluna];
        }
    }

    std::cout << "Imprimindo a multiplicação\n";

    // Impressão da matriz v3
    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            std::cout << "[ " << v3[linha][coluna] << " ]"
                      << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

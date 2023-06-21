/**
 * @file exercicio10.cpp
 * @brief Código para inserir valores em uma matriz 4x4 e verificar se a diagonal principal é formada apenas por 1.
 * @version 0.1
 * @date 2023-06-13
 *
 * @details Este programa solicita ao usuário que insira valores em uma matriz 4x4 (matriz).
 * Em seguida, verifica se a diagonal principal da matriz é formada apenas por 1.
 * Caso seja, imprime a matriz na tela.
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
    int matriz[4][4];
    int linha, coluna, i;
    int cont = 0;

    // Inserindo valores na matriz
    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            std::cout << "Inserindo na posição [" << linha + 1 << "][" << coluna + 1 << "]\n"
                      << std::endl;
            std::cin >> matriz[linha][coluna];
        }
    }

    // Verificando se a diagonal principal é toda formada por 1
    for (i = 0; i < 4; i++)
    {
        if (matriz[i][i] == 1)
        {
            cont++;
        }
    }

    // Se a diagonal principal é formada apenas por 1, imprime a matriz
    if (cont == 4)
    {
        std::cout << "Imprimindo a matriz\n"
                  << std::endl;
        for (linha = 0; linha < 4; linha++)
        {
            for (coluna = 0; coluna < 4; coluna++)
            {
                std::cout << "[" << matriz[linha][coluna] << "]"
                          << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}

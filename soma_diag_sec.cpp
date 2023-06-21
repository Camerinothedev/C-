#include <iostream>
const int TAM = 4;
int main()
{
    int matriz[TAM][TAM];
    int linha, coluna, i, cont;


    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            std::cout << "Inserindo na matriz na posição [" << linha + 1 << "][" << coluna + 1 << "]"
                      << std::endl;
            std::cin >> matriz[linha][coluna];
        }
    }

    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            std::cout << "[ " << matriz[linha][coluna] << " ]"
                      << " ";
        }
        std::cout << std::endl;
    }
    cont = 0;
    for (i = 0; i < TAM; i++)
    {
        cont += matriz[i][TAM - i - 1];
    }
    std::cout << std::endl;
    std::cout <<"Imprimindo a soma dos itens da diagonal principal: "<<cont << "\n";
    return 0;
}
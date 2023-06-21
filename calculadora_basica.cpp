/**
 * @file exercicio3.cpp
 * @brief Codigo para impressao de soma, diferenca, produto e quoficiente (divisao)
 * @version 0.1
 * @date 2023-06-13
 *
 * @details Este programa solicita ao usuário que digite dois números inteiros, em seguida, realiza a soma, a diferença, o produto e a divisão dos números fornecidos.
 *
 * @note Este programa utiliza a biblioteca iostream para entrada e saída de dados e a biblioteca string para manipulação de strings.
 *
 * @author Gustavo Camerino
 */

#include <iostream>
#include <string>

// Prototipos
int soma(int a, int b);
int produto(int a, int b);
float quoficiente(int a, int b);
void diferente(int a, int b);

/**
 * @brief Função principal (main)
 * @return int O código de saída da função.
 */
int main()
{
    int num1;
    int num2;
    std::cout << "Digite dois números:" << std::endl;
    std::cin >> num1;
    std::cin >> num2;

    int mais = soma(num1, num2);
    std::cout << "\nA soma entre os dois números é: " << mais << "\n"
              << std::endl;

    diferente(num1, num2);

    int prod = produto(num1, num2);
    std::cout << "A multiplicação entre os dois números é: " << prod << "\n"
              << std::endl;

    float divisao = static_cast<float>(num1) / num2;
    std::cout << "A divisão entre os dois números é: " << divisao << "\n"
              << std::endl;

    return 0;
}

/**
 * @brief Função para realizar a soma de dois números inteiros.
 *
 * @param a O primeiro número inteiro.
 * @param b O segundo número inteiro.
 * @return int O resultado da soma.
 */
int soma(int a, int b)
{
    int resultado = a + b;
    return resultado;
}

/**
 * @brief Função para calcular o produto entre dois números inteiros.
 *
 * @param a O primeiro número inteiro.
 * @param b O segundo número inteiro.
 * @return int O resultado do produto.
 */
int produto(int a, int b)
{
    int resultprod = a * b;
    return resultprod;
}

/**
 * @brief Função para calcular o quociente (divisão) entre dois números inteiros.
 *
 * @param a O primeiro número inteiro (dividendo).
 * @param b O segundo número inteiro (divisor).
 * @return int O resultado do quociente.
 */
float quoficiente(int a, int b)
{
    float resultdiv = a / b;
    return resultdiv;
}

/**
 * @brief Função para verificar e imprimir a diferença entre dois números inteiros.
 *
 * @param a O primeiro número inteiro.
 * @param b O segundo número inteiro.
 */
void diferente(int a, int b)
{
    if (a > b)
    {
        std::cout << a << " é maior que " << b << "\n"
                  << std::endl;
    }
    else if (b > a)
    {
        std::cout << b << " é maior que " << a << "\n"
                  << std::endl;
    }
    else
    {
        std::cout << a << " é igual a " << b << "\n"
                  << std::endl;
    }
}

#include <iostream>

class triangulo
{
public:
    double a = 0, b = 0, c = 0;
    double area = 0;

    void inserir()
    {
        std::cout << "Insira o valor de A: \n";
        std::cin >> a;

        std::cout << "Insira o valor de B: \n";
        std::cin >> b;

        std::cout << "Insira o valor de C: \n";
        std::cin >> c;
    }

    void areat()
    {
        std::cout << "Calculando a área do triângulo: \n";
        area = (a * b) / 2;
        std::cout << "A área do triângulo é: " << area << std::endl;
    }
};

int main()
{
    triangulo tr;
    tr.inserir();
    tr.areat();

    return 0;
}
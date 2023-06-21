#include <iostream>
#include <cmath>

class retangulo
{
public:
    double altura;
    double largura;

    void set(double A, double L)
    {
        altura = A;
        largura = L;
    }

    double getA() const
    {
        return altura;
    }

    double getL() const
    {
        return largura;
    }

    void calcTudo() const
    {
        double area = altura * largura;
        double perimetro = 2 * (altura + largura);

        std::cout << "A área do retângulo é: " << area << std::endl;
        std::cout << "O perimetro do retângulo é: " << perimetro << std::endl;
    }
};

int main()
{
    retangulo r1;
    r1.set(5.0, 5.0);

    std::cout << "Altura do retângulo: " << r1.getA() << std::endl;
    std::cout << "Largura do retângulo: " << r1.getL() << std::endl;


    r1.calcTudo();


    return 0;
}
#include <iostream>
#include <string>

class Carro
{
public:
    std::string marca;
    std::string modelo;

    std::string ano;

    void acelerar()
    {
        std::cout << "Você está acelerando seu " <<marca<<" "<<modelo<<" "<<ano<< std::endl;
    }
};

int main()
{
    Carro meucarro;

    std::cout << "Insira o marca do seu carro: ";
    std::getline(std::cin, meucarro.marca);

    std::cout << "Insira o modelo do seu carro: ";
    std::getline(std::cin, meucarro.modelo);

    std::cout << "Insira o ano dele: ";
    std::getline(std::cin, meucarro.ano);

    std::cout << "Seu carro é um " << meucarro.marca << " " << meucarro.modelo << " de ano " << meucarro.ano << std::endl;

    meucarro.acelerar();
    return 0;
}
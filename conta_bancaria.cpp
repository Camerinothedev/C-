#include <iostream>
#include <string>


class contabancaria
{
public:
    std::string numero_conta;
    double saldo = 0.0;
    double a = 0;

    void depositar()
    {
        std::cout << "Digite quantos R$ você deseja depositar: ";
        std::cin >> saldo;
    }

    void ver_saldo()
    {
        std::cout << "Seu saldo é de: " << saldo << " R$" << std::endl;
    }

    void sacar()
    {
        std::cout << "Seu saldo é de: " << saldo << " R$" << std::endl;
        std::cout << "Digite quanto quer sacar: ";
        std::cin >> a;

        while (a > saldo)
        {
            std::cout << "Erro, o valor que você quer sacar é maior que o saldo, tente novamente." << std::endl;
            std::cout << "Seu saldo é: " << saldo << "\n";
            std::cout << "Digite quanto quer sacar: ";
            std::cin >> a;
        }
        std::cout << "Você sacou: " << a << " R$\n";
        saldo = saldo - a;
        std::cout << "Seu saldo é: " << saldo << std::endl;
    }
};

int main()
{
    contabancaria conta1;
    conta1.ver_saldo();
    conta1.depositar();
    conta1.sacar();

    return 0;
}
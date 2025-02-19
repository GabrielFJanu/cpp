#include <iostream>
#include <iomanip>

int n1 = 3.14159265358979;
float n2 = 3.14159265358979;
double n3 = 3.14159265358979;

int main(){
    std::cout << n1 << std::endl << n2 << std::endl << n3 << std::endl;

    std::cout << std::fixed << std::setprecision(16);// configurando o cout para exibir 16 casas decimais
    std::cout << n1 << std::endl << n2 << std::endl << n3 << std::endl;

    std::cout << std::defaultfloat << std::setprecision(6); //voltando a configuração padrão do cout
    std::cout << n1 << std::endl << n2 << std::endl << n3 << std::endl;
    system("pause");
    return 0;
}

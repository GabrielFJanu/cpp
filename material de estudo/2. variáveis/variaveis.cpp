#include <iostream>
#include <string>

int main() {
    int nome;
    nome = "gabriel";
    std::cout << "qual o seu nome?" << std::endl;
    std::cin >> nome;
    std::cout <<"prazer te conhecer, " << nome;
    system("pause");
    return 0;
}


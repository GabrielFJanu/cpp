#include <iostream>
using namespace std;

int main(){
    float nota;
    cout << "Digite sua nota (de 0 a 10):\n";
    cin >> nota;
    cout << (nota>=7 ? "Parabens! Aprovado!" :(nota>=4 ? "Recuperacao" : "Reprovado"));
    return 0;
}

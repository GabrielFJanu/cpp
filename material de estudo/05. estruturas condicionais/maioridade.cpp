#include <iostream>
using namespace std;

int main(){
    int idade;
    cout << "Digite sua idade: \n";
    cin >> idade;
    cout << ((idade>=18) ? "Maior de idade." : "Menor de idade.") ;
    return 0;
}

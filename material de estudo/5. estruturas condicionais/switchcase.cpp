#include <iostream>
using namespace std;

int main(){
    int numero;
    cout << "Escolha um numero de 1 a 3: \n";
    cin >> numero;
    switch(numero){
    case 1:
        cout << "Voce escolheu a primeira opcao\n";
        break;
    case 2:
        cout << "Voce escolheu a segunda opcao\n";
        break;
    case 3:
        cout << "Voce escolheu a terceira opcao\n";
        break;
    default:
        cout << "Resposta invalida\n";
    }
    return 0;
}

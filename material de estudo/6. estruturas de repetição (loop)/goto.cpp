#include <iostream>
using namespace std;

int main(){
    int numero;
    inicio: //label
    cout << "Digite um numero positivo:\n";
    cin >> numero;
    if(numero>=0){
        cout << "Numero valido!\n";
    }else{
        cout << "Numero invalido, tente novamente\n";
        goto inicio;
    }
    return 0;
}

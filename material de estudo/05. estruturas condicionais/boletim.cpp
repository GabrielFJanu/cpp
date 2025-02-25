#include <iostream>
using namespace std;

int main(){
    float nota;
    cout << "Informe sua nota (de 0 a 10):\n";
    cin >> nota;
    if(nota>=7){
        cout << "Parabens! Aprovado!\n";
    }else if(nota >=4){
        cout << "Recuperacao";
    }else{
        cout << "Reprovado";
    }
}

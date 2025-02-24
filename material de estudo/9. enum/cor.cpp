#include <iostream>
using namespace std;

enum Cor {VERMELHO ,VERDE, AZUL};

int main(){
    Cor minhaCor;
    minhaCor = VERDE;//ou minhaCor = 1 (tanto faz)
    if(minhaCor==VERDE){
        cout << "minha cor eh verde!";
    }else{
        cout << "minha cor nao eh verde!";
    }
    return 0;
}

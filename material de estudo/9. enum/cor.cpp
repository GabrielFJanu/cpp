#include <iostream>
using namespace std;

enum Cor {VERMELHO ,VERDE, AZUL};
enum Numero {ZERO, UM, DOIS};

int main(){
    Cor minhaCor;
    minhaCor = VERDE;
    if(minhaCor==UM){//ou minhaCor == 1 (tanto faz)
        cout << "minha cor eh verde!";
    }else{
        cout << "minha cor nao eh verde!";
    }
    return 0;
}

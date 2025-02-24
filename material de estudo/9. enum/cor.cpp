#include <iostream>
using namespace std;

enum Cor { VERMELHO, VERDE, AZUL };

int main() {
    Cor minhaCor = VERDE;

    if (minhaCor == VERDE) {
        cout << "A cor é verde!" << endl;
    }

    return 0;
}
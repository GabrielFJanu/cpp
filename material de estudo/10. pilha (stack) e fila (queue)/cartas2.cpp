#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da fila: " << cartas.size() << "\n";
    cout << "Carta na frente da fila: " << cartas.front() << "\n";
    cout << "Ultima carta da fila: " << cartas.back() << "\n";

    string carta = cartas.front();
    cout << "\n" << carta << "\n";

    while(!cartas.empty()){
        cout << "Carta na frente da fila: " << cartas.front() << "\n";
        cartas.pop();
    }
    return 0;
}

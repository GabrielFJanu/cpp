#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    char palavra[30], letra;
    int tamanho = 0, cont = 0, vidas = 6;
    bool acertou;

    cout << "Informe a palavra:\n";
    cin >> palavra;
    system("cls");
    while(palavra[tamanho]!='\0'){
        tamanho++;
    }
    char gabarito[tamanho];
    for(int i = 0; i<tamanho; i++){
        gabarito[i] = '_';
    }
    while(cont!=tamanho && vidas!=0){
        acertou = false;
        for(int i = 0; i<tamanho; i++){
            cout << gabarito[i] << " ";
        }
        cout << "\nVidas: " << vidas;
        cout << "\nEscolha uma letra (minuscula): ";
        cin >> letra;
        system("cls");
        for(int i = 0; i<tamanho; i++){
            if(palavra[i]==letra && gabarito[i]!=letra){
                acertou = true;
                gabarito[i] = letra;
                cont++;
            }
        }
        if(!acertou){
            vidas--;
        }
    }
    cout << (vidas==0 ? "Perdeu o jogo :(" : "Ganhou o jogo!");
}

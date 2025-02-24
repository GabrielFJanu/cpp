#include <iostream>

using namespace std;

void saudacao(string nome = "Visitante");

int main(){
    saudacao();
    saudacao("Carlos");
    return 0;
}

void saudacao(string nome){
    cout << "Ola, " << nome << "!" << endl;
}

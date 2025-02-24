#include <iostream>
using namespace std;

void texto();
void soma(int a, int b);
int soma2(int a, int b);
void diga(string a[4]);

int main(){
    string abcd[4] = {"alfa","beta","charlie","delta"};
    texto();
    soma(1,10);
    cout << endl << soma2(30,12);
    diga(abcd);
    return 0;
}

void texto(){
    cout << "\nOla mundo\n";
}
void soma(int a, int b){
    cout << "\nsoma dos valores: " <<a+b << endl;
}
int soma2(int a, int b){
    return a+b;
}
void diga(string a[4]){
    for(int i = 0; i < 4; i++){
        cout << endl << a[i];
    }
}

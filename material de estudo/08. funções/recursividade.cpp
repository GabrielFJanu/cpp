#include <iostream>
using namespace std;

void contagem(int num=10, int cont=0);
int fibonacci(int n);
int fatorial(int n);

int main(){
    contagem(20,10);
    cout << fibonacci(3) << endl;
    cout << fatorial(5) << endl;
    return 0;
}

void contagem(int num, int cont){
    if(num==cont){
        cout << num << endl;
    }else{
        cout << num << endl;
        contagem(num-1,cont);
    }
}
int fibonacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int fatorial(int n){
    if(n==0){
        return 1;
    }else{
        return n*fatorial(n-1);

    }
}

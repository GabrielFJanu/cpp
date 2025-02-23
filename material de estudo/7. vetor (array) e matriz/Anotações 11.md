# Matriz (vetores bidimensionais)
## O que é
Basicamente, são vetores de vetores. Ou seja, cada elemento vai possuir 2 índices.
## Inicializar matrizes
### 1.
```cpp
int matriz[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```
ou
### 2.
```cpp
int matriz[2][3];
matriz[0][0] = 1;
matriz[0][1] = 2;
matriz[0][2] = 3;
matriz[1][0] = 4;
matriz[1][1] = 5;
matriz[1][2] = 6;
```
## Escrever uma matriz usando `for` alinhado
```cpp
#include <iostream>
using namespace std;
int main(){
    int matriz[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    for(int i = 0; i<2; i++){
        for(int j=0; j<3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
```
Resposta no console:
```
1 2 3
4 5 6
```
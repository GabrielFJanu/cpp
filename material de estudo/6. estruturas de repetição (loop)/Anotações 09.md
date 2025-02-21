# DO-WHILE
## O que é
O `do-while` é uma estrutura de repetição (loop) quase igual ao `while`, a diferença é o `do-while` garante a execução do bloco pelo menos uma vez, pois a verificação da condição acontece no final da iteração.
## Sintaxe do `do-while`
```cpp
do {
    // Código a ser executado pelo menos uma vez
} while (condição);
```

Exemplo:
```cpp
#include <iostream>
using namespace std;

int main(){
    int i = 10;
    do{
        cout << i << "\n";
        i++;
    }while(i<10);
    return 0;
}
```
Resposta no terminal:
```
10
```
No `while`, a condição é verificada antes da primeira execução.

No `do-while`, o código é executado pelo menos uma vez antes da verificação da condição.
# FOR

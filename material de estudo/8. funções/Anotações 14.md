# Funções Recursivas
## O que é
Uma função recursiva é uma função que chama a si mesma dentro do próprio código, até atingir um caso base que interrompe a recursão.

Útil para problemas que podem ser quebrados em versões menores de si mesmos, como fatorial, Fibonacci (não é bom utilizar recursividade, nesse caso) e percorrimento de árvores.

## Funcionamento
Uma função recursiva precisa ter dois componentes principais:

1. **Caso base**: A condição que para a recursão.

2. **Chamada recursiva**: A função se chama novamente com um problema menor.

```cpp
#include <iostream>
using namespace std;

void contagem(int num=10, int cont=0);

int main(){
    contagem(20,10);
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
```
Resposta no console:
```
20
19
18
17
16
15
14
13
12
11
10
```

>**Por que fibonacci não eficiente com recursão simples?** Problema: O mesmo cálculo é feito várias vezes!
>>| **Valor de `n`** | **Chamadas Recursivas** |
>>|----------------|--------------------|
>>| `fibonacci(5)`  | **15 chamadas**  |
>>| `fibonacci(10)` | **177 chamadas**  |
>>| `fibonacci(20)` | **21.891 chamadas**  |
>>| `fibonacci(40)` | **≈ 2 bilhões de chamadas!**  |
>Número de chamadas cresce exponencialmente (O(2ⁿ))
# Goto
## O que é
O `goto` é uma instrução que permite pular diretamente para um `label` (rótulo) dentro do código, ignorando a sequência normal de execução.

É uma forma de desviar o fluxo de execução, mas <ins>**não é recomendada**</ins> na maioria dos casos porque pode tornar o código difícil de entender e manter.
## Sintaxe do goto
```
goto nome_do_rótulo;
...
nome_do_rótulo: 
    // Código executado após o salto
```
O *goto* faz o programa pular para um rótulo (*label*) definido no código.

O rótulo é um identificador seguido por `:`.
```cpp
#include <iostream>
using namespace std;

int main(){
    int numero;
    inicio: //label
    cout << "Digite um numero positivo:\n";
    cin >> numero;
    if(numero>=0){
        cout << "Numero valido!\n";
    }else{
        cout << "Numero invalido, tente novamente\n";
        goto inicio;
    }
    return 0;
}
```
# WHILE
## O que é
O `while` é uma estrutura de repetição (loop) em C++ que executa um bloco de código repetidamente enquanto uma condição for verdadeira.
## Sintaxe do while
```
while (condição) {
    // Código será executado enquanto a condição for verdadeira
}
```
Funcionamento:

1. A condição é avaliada antes de cada iteração.
2. Se a condição for `true`, o bloco dentro do while é executado.
3. Se a condição for `false`, o loop termina.
```cpp
#include <iostream>
using namespace std;

int main(){
    int i;
    while(i<10){
        cout << i << endl;
        i++;
    }
    return 0;
}
```
Resposta no console:
```
0
1
2
3
4
5
6
7
8
9
```
>**CUIDADO**: Se a condição nunca for falsa, o loop nunca termina, criando um loop infinito.
# Break
é um comando que interrompe loops
```cpp
#include <iostream>
using namespace std;

int main(){
    int i;
    while(1){ // 1 = true
        if(i==10){
            break;
        }
        cout << i << endl;
        i++;
    }
    return 0;
}
```
Você pode achar que esse laço de repetição vai ser infinito, pois a condição sempre vai ser verdadeira, mas não. Devido a presença do `break`, o laço será quebrado quando a contagem chegar em 10.

Resposta no console:
```
0
1
2
3
4
5
6
7
8
9
```
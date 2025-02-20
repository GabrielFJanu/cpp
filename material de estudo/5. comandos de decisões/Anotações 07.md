# Operador térnario/ if ternário
## O que é
O operador ternário (`? :`) é uma forma curta e eficiente de escrever uma estrutura `if-else`. Ele permite atribuir valores ou executar expressões de forma compacta, usando três operandos, por isso o nome "ternário".

A vantagem de usar o operador ternário ao invés de um `if-else` é que sua execução é mais rápida, ou seja, otimiza o código.

A desvantagem é que ele é mais restrito.
## Sintaxe do operador ternário
```
condição ? expressão_se_verdadeiro : expressão_se_falso;
```
Se a condição for `true`, executa expressão_se_verdadeiro.

Se a condição for `false`, executa expressão_se_falso.

>O operador ternário substitui **if-else** quando há apenas uma instrução em cada bloco.
>```
>condição ? expressão_se_verdadeiro : expressão_se_falso;
>```
>substitui:
>```
>if(condição){
>    expressão_se_verdadeiro;
>}else{
>    expressão_se_falso;
>}
>```
```cpp
#include <iostream>
using namespace std;

int main(){
    int idade;
    cout << "Digite sua idade: \n";
    cin >> idade;
    idade>=18 ? cout << "Maior de idade." : cout << "Menor de idade.";
    return 0;
}
```
ou
```cpp
#include <iostream>
using namespace std;

int main(){
    int idade;
    cout << "Digite sua idade: \n";
    cin >> idade;
    cout << (idade>=18 ? "Maior de idade." : "Menor de idade.") ;
    return 0;
}
```
---
## Atribuição
exemplo com atribuição:
```
if(x > y){
    maior = x;
}else{
    maior = y;
}
```
ou
```
maior = (x > y ? x : y);
```
## Múltiplas condições
exemplo com múltiplas condições:
```cpp
#include <iostream>
using namespace std;

int main(){
    float nota;
    cin >> nota;
    cout << (nota>=7 ? "Parabéns! Aprovado!" :(nota>=4 ? "Recuperação" : "Reprovado"));
    return 0;
}
```
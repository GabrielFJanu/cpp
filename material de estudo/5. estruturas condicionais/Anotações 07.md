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
# Switch Case
## O que é
O `switch case` é uma estrutura condicional usada para tomar decisões com múltiplas opções, de forma mais eficiente do que usar vários if-else. Nele, ao contrário do `if`, só irá acontecer testes de <ins>igualdade</ins>.
## Sintaxe do switch case
```cpp
switch (expressão) {
    case valor1:
        // Código executado se expressão == valor1
        break;
    case valor2:
        // Código executado se expressão == valor2
        break;
    default:
        // Código executado se nenhum dos casos acima for verdadeiro
}
```
Funcionamento:
1. A expressão dentro de `switch` é avaliada.
2. O programa compara a expressão com cada `case`.
3. Se encontrar um `case` correspondente, executa o código associado a ele.
4. Se nenhum `case` corresponder, o `default` (opcional) é executado.
5. O `break` impede que os outros `case` sejam executados em sequência.

## Caso com `break`
```cpp
#include <iostream>
using namespace std;

int main(){
    int numero;
    cout << "Escolha um numero de 1 a 3: \n";
    cin >> numero;
    switch(numero){
    case 1:
        cout << "Voce escolheu a primeira opcao\n";
        break;
    case 2:
        cout << "Voce escolheu a segunda opcao\n";
        break;
    case 3:
        cout << "Voce escolheu a terceira opcao\n";
        break;
    default:
        cout << "Resposta invalida\n";
    }
    return 0;
}
```
Input do usuário:
```
1
```
Resposta no console:
```
Voce escolheu a primeira opcao
```
## Caso sem `break`
```cpp
#include <iostream>
using namespace std;

int main(){
    int numero;
    cout << "Escolha um numero de 1 a 3: \n";
    cin >> numero;
    switch(numero){
    case 1:
        cout << "Voce escolheu a primeira opcao\n";
        //break;
    case 2:
        cout << "Voce escolheu a segunda opcao\n";
        //break;
    case 3:
        cout << "Voce escolheu a terceira opcao\n";
        //break;
    default:
        cout << "Resposta invalida\n";
    }
    return 0;
}
```
Input do usuário:
```
1
```
Resposta no console:
```
Voce escolheu a primeira opcao
Voce escolheu a segunda opcao
Voce escolheu a terceira opcao
Resposta invalida
```
Isso ocorre pois sem o `break`, os outros `case` abaixo (incluindo o `default`) são executados, mesmo não equivalendo a expressão.
## Switch case "fall-through"
Por mais que pareça um erro esquecer o `break` na sintaxe, existem casos que intencionalmente não usar o `break` é útil. é o caso do `switch case fall-through`.
```cpp
#include <iostream>
using namespace std;

int main(){
    int numero;
    cout << "Escolha um numero de 1 a 3: \n";
    cin >> numero;
    switch(numero){
    case 1:
    case 2:
        cout << "Voce escolheu a opcao 1 ou 2\n";
        break;
    case 3:
        cout << "Voce escolheu a opcao 3\n";
        break;
    default:
        cout << "Resposta invalida\n";
    }
    return 0;
}
```
Input do usuário:
```
1
```
Resposta no console:
```
Voce escolheu a opcao 1 ou 2
```

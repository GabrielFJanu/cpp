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
## O que é
O `for` é uma estrutura de repetição (loop) que permite executar um bloco de código um número determinado de vezes.
## Sintaxe do `for`
```cpp
for (inicialização; condição; incremento/decremento) {
    // Código a ser repetido
}
```
Explicação dos componentes do for:

1. **inicialização**: Executado apenas uma vez antes do loop começar (geralmente inicializa uma variável de controle).
2. **condição**: Avaliada antes de cada iteração; se for true, o bloco é executado; se for false, o loop termina.
3. **incremento/decremento**: Executado após cada iteração, alterando a variável de controle.

### 1.

```cpp
#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i<=5; i++){
        cout << i << endl;
    }
    return 0;
}
```
Resposta no console:
```
1
2
3
4
5
```
### 2.

```cpp
#include <iostream>
using namespace std;

int main(){
    for(char letra = 'A'; letra<='Z'; letra++){
        cout << letra << " ";
    }
    return 0;
}
```
Resposta no terminal:
```
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
```
> **Quando usar o `for` ou o `while`?**
>* `while`: Quando não sabemos quantas vezes o loop precisa rodar.
>* `for`: Quando o número de repetições é conhecido antes do loop começar.

## Exemplo de problema que só pode ser resolvido com `while`
Usando `while` para repetir até o usuário digitar um número válido (evento externo):
```cpp
#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um número positivo: ";
    std::cin >> numero;

    while (numero <= 0) {  // Continua pedindo até o usuário digitar um número positivo
        std::cout << "Número inválido. Digite novamente: ";
        std::cin >> numero;
    }

    std::cout << "Número aceito: " << numero << std::endl;
    return 0;
}
```
O número de vezes que o código vai rodar o bloco é desconhecido, logo usa-se `while`!

> Todos os problemas solucionados com `for` pode ser escrito com `while` usando um contador, porém na maioria dos casos usa-se `for`por sua estrutura **<ins>compacta e organizada</ins>**
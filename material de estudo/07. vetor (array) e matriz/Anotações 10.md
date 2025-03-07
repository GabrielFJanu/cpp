# Array ou vetor
## O que é?
Um `array` em C++ é uma **estrutura de dados** que armazena múltiplos valores do **mesmo tipo** em uma **única variável**, permitindo acesso rápido por meio de índices.

## Declaração de um `array` (sintaxe)

```cpp
tipo nome_do_array[tamanho];
```
```cpp
int numeros[5];  // Declara um array de 5 inteiros
```
## Maneiras de inicializar um vetor
### 1.
```cpp
int vetor[5];
vetor[0] = 10;
vetor[1] = 20;
vetor[2] = 30;
vetor[3] = 40;
vetor[4] = 50;
```
### 2. atribuindo valores diretamente
```cpp
int vetor[5] = {10,20,30,40,50};
```
### 3. deixando o compilador determinar o tamanho
```cpp
int vetor[] = {10,20,30,40,50};
```
## Acessando Elementos de um Array
Usamos índices para acessar elementos individuais. O primeiro elemento vai ter índice 0, o segundo 1, o terceiro 2... e por aí vai.

```cpp
int vetor[5] = {10,20,30,40,50};
```
índice | valor
---|---
0 | 10
1 | 20
2 | 30
3 | 40
4 | 50
>Os índices vão de `0` até `tamanho - 1`
```cpp
#include <iostream>

int main() {
    int numeros[3] = {5, 10, 15};

    std::cout << "Primeiro elemento: " << numeros[0] << std::endl;
    std::cout << "Segundo elemento: " << numeros[1] << std::endl;
    std::cout << "Terceiro elemento: " << numeros[2] << std::endl;

    return 0;
}
```
Resposta no console:
```
Primeiro elemento: 5
Segundo elemento: 10
Terceiro elemento: 15
```
## modeficando elementos de um `array`
```cpp
#include <iostream>

int main() {
    int numeros[3] = {1, 2, 3};

    numeros[1] = 20;  // Modifica o valor do índice 1

    std::cout << "Novo valor no índice 1: " << numeros[1] << std::endl;

    return 0;
}
```
## Percorrendo `array` com `for`
```cpp
#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i << ": " << numeros[i] << "\n";
    }

    return 0;
}
```
Resposta no console:
```
Elemento 0: 10
Elemento 1: 20
Elemento 2: 30
Elemento 3: 40
Elemento 4: 50
```
# sizeof()
sizeof() é uma função que retorna o tamanho (em bytes) de uma estrutura de armazenamento.

ao ínves de fazer um `for (int i = 0; i < 5; i++)` para percorrer um vetor de tamanho 5, podemos usar:
```
for (int i = 0; i < sizeof(numeros)/4; i++)
```
como `numeros` é um vetor de tamanho 5, ele vai armazenar o valor de 5 `int` (cada um tendo 4 bytes de memória). Ou seja, no total, o tamanho de armazenamento do vetor `numeros` vai ser 20, que é o resultado de `sizeof(numeros)`.

Como cada valor `int` tem **4 bytes**, então para achar o tamanho de um vetor inteiro basta fazer `sizeof(vetor)/4`.
```cpp
#include <iostream>
using namespace std;
int main(){
    int numeros[5];
    cout << "tamanho do vetor: " << sizeof(numeros)/4;
}
```
Resposta no console:
```
tamanho do vetor: 5
```

Ou de forma generica (funcionando para vetores de qualquer tipo):
```
tamanho_do_vetor = sizeof(vetor)/sizeof(vetor[0])
```
>>`sizeof(vetor)` retorna o tamanho total do array (em bytes).
`sizeof(numeros[0])` retorna o tamanho de um elemento.

>**Porque usar sizeof()?** pois ao alterar o tamanho de um vetor, não é preciso alterar a linha `for (int i = 0; i < sizeof(vetor)/sizeof(vetor[0]); i++)`
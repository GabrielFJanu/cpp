# Variáveis
## O que são
>**variáveis** são espaços reservado na memória do computador (mais especificamente a RAM) que armazena um valor. Esse valor pode ser alterado durante a execução do programa.

Cada variável tem:
* **Um nome** (identificador)
* **Um tipo** (determina o que pode ser armazenado)
* **Um valor** (o dado armazenado)

Por ser uma *linguagem fortemente tipada*, o C++ exige que as variáveis tenham um tipo bem definido no momento da sua criação. Após declaradas, elas não podem mudar de tipo durante a execução do programa.

## locais e globais
outra característica das variáveis em C++ são suas **classes de armazenamento**, que determinam o escopo (onde pode ser utilizada dentro do programa), tempo de vida e local de armazenamento de uma variável.

Dentre todas, as principais são: `locais` e `globais`

```cpp
#include <iostream>

int global;

int main() {
    int local; 
    return 0;
}
```

>`Local`: 
>  * **<ins>Definição</ins>**: Variáveis declaradas dentro de uma função ou bloco {} e acessíveis apenas dentro desse escopo.
>  * **<ins>Tempo de vida</ins>**: Existem somente enquanto a função/bloco está em execução.

>`Global`:
>  * **<ins>Definição</ins>**: Declaradas fora de qualquer função, podem ser acessadas por qualquer parte do programa.
>  * **<ins>Tempo de vida</ins>**: Existem durante toda a execução do programa.

## "lixo"
Em C++, se eu criar uma variável `local` sem um valor padrão definido de começo, eu preciso inicializar ela (atribuir um valor inicial) antes de usá-la no programa. Caso o contrário, o valor nela será imprevisível a cada vez que iniciar o programa:

esse valor imprevisível, chamamos de "lixo".

### 1º Caso: sem inicializar numero
```cpp
#include <iostream>

using namespace std;

int main() {
    int numero; 
    cout << "Valor de numero: " << numero << endl;  // Pode imprimir um valor aleatório!
    return 0;
}
```
RESPOSTA POSSÍVEL (imprevisível):
```cpp
Valor de numero: -10534398
```
### 2º Caso: inicializando numero
```cpp
#include <iostream>

using namespace std;

int main() {
    int numero = 0; 
    cout << "Valor de numero: " << numero << endl;
    return 0;
}
```
RESPOSTA GARANTIDA:
```cpp
Valor de numero: 0
```
>**Por que isso acontece?**
O "lixo" acontece quando uma variável não inicializada ocupa um espaço na memória que já tinha algum dado antigo. Como o C++ não limpa automaticamente essa área de memória, o valor antigo continua ali e pode ser interpretado erroneamente pelo programa.

Caso uma variável `global` não tenha sido inicializada, ela terá o valor igual à 0.
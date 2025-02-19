# Variáveis
## O que são
>**variáveis** são espaços reservado na memória do computador (mais especificamente a RAM) que armazena um valor. Esse valor pode ser alterado durante a execução do programa.

Cada variável tem:
* **Um nome** (identificador)
* **Um tipo** (determina o que pode ser armazenado)
* **Um valor** (o dado armazenado)

Por ser uma *linguagem fortemente tipada*, o C++ exige que as variáveis tenham um tipo bem definido no momento da sua criação. Após declaradas, elas não podem mudar de tipo durante a execução do programa.

Para declarar uma variável, basta informar o tipo e logo em seguida seu nome:

```cpp

int x;

```
Declarar com um valor padrão:
```cpp

int x = 10;

```
## Tipos

Dependendo do tipo da variável, ela vai armazenar informações de diferentes naturezas: numéro inteiro, número real, valor booleano, caracteres, texto e por aí vai.

Tipo | Tamanho (aprox.) | valor armazenado | exemplo
---|---|---|---
`int` | 4 bytes | números inteiros | `int x = 10;`
`float` | 4 bytes | números decimais (precisão simples) | `float y = 3.141;`
`double` | 8 bytes | números decimais (precisão dupla) | `double z = 3.1415926535;`
`char` | 1 byte | um único caractere | `char letra = 'a';`
`bool` | 1 byte | `true` ou `false` | `bool ligado = true;`
`string` | depende do tamanho | texto (sequência de caracteres) | `std::string nome = "gabriel"`

>O tipo *string*, ao contrário dos tipos primitivos, precisa do namespace `std`, pois é uma classe da biblioteca `string` (padrão do C++).
```cpp
#include <iostream>
#include <string>

int main() {
    std::string nome;
    std::cout << "qual o seu nome?" << std::endl;
    std::cin >> nome;
    std::cout <<"prazer te conhecer, " << nome;
    return 0;
}
```
>`std::cin >> nome;` é uma função da biblioteca `iostream` que lê o input (nesse caso uma palavra) digitado pelo usuário e armazena em `nome`.

## locais e globais
outra característica das variáveis em C++ são suas **classes de armazenamento**, que determinam o escopo (onde pode ser utilizada dentro do programa), tempo de vida e local de armazenamento de uma variável.

Dentre todas, as principais são: `locais` e `globais`

```cpp
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

## números (int, float, double)

```cpp
#include <iostream>
#include <iomanip>

int n1 = 3.14159265358979;
float n2 = 3.14159265358979;
double n3 = 3.14159265358979;

int main(){
    std::cout << n1 << std::endl << n2 << std::endl << n3 << std::endl;
    system("pause");
    return 0;
}
```
Resposta no console:
```
3
3.14159
3.14159
```
O tipo `int` só considera a parte <ins>*inteira*</ins> do número.

> O cout está por padrão configurado para exibir apenas 6 algarismos significativos.

### Caso 2: aumentando os algarismos significativos do `cout`

```cpp
#include <iostream>
#include <iomanip>

int n1 = 3.14159265358979;
float n2 = 3.14159265358979;
double n3 = 3.14159265358979;

int main(){
    std::cout << std::setprecision(16);// configurando o cout para exibir 16 algarismos significativos
    std::cout << n1 << std::endl << n2 << std::endl << n3 << std::endl;
    system("pause");
    return 0;
}
```
Resposta no console:
```
3
3.141592741012573
3.14159265358979
```
O `float` e `double` representam o número em <ins>*pontos flutuantes*</ins> (decimal), onde o double tem mais precisão justamente por ter uma maior capacidade de armazenamento (maior mantissa).
>`#include <iomanip>` é a biblioteca (padrão do C++) do `std::setprecision`, que define o número de dígitos significativos exibidos pelo `std::cout`.

### Caso 3: fixando 16 casas decimais no `cout`
```cpp
#include <iostream>
#include <iomanip>

int n1 = 3.14159265358979;
float n2 = 3.14159265358979;
double n3 = 3.14159265358979;

int main(){
    std::cout << std::fixed << std::setprecision(16);// configurando o cout para exibir 16 casas decimais
    std::cout << n1 << std::endl << n2 << std::endl << n3 << std::endl;

    std::cout << std::defaultfloat << std::setprecision(6); //voltando a configuração padrão do cout
    std::cout << n1 << std::endl << n2 << std::endl << n3 << std::endl;
    system("pause");
    return 0;
}
```
Resposta no console:
```
3
3.1415927410125732
3.1415926535897900
3
3.14159
3.14159
```
> `fixed` (da biblioteca `iomanip`) força o `cout` a exibir casas decimais fixas em vez de notação científica.
`setprecision(16)` juntamente com `fixed` faz com que 16 casas decimais sejam mostradas após o ponto.

> Apenas `setprecision(16)` mostrará 16 digitos significativos, não 16 digitos pós o ponto.

>`defaultfloat` (da biblioteca `iomanip`) reverte o `fixed`

## "Lixo"
Em C++, <ins>dependendo do compilador e do sistema operacional e de suas versões</ins>, se eu criar uma variável `local` sem um valor padrão definido de começo, eu preciso inicializar ela (atribuir um valor inicial) antes de usá-la no programa. Caso o contrário, o valor nela será imprevisível a cada vez que iniciar o programa:

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
O "lixo" acontece quando o compilador não é otimizado e uma variável não inicializada ocupa um espaço na memória que já tinha algum dado antigo. Como o C++ não limpa automaticamente essa área de memória, o valor antigo continua ali e pode ser interpretado erroneamente pelo programa.

Caso uma variável `global`, ao contrário da `local`, não tenha sido inicializada, ela terá o valor igual à 0.
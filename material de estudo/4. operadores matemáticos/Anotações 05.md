# Operadores matemáticos

## Operadores aritméticos básicos

```cpp
#include <iostream>

using namespace std;

int x = 3, y = 2;

int main(){
    cout << x + y << endl; //soma
    cout << x - y << endl; //subtração
    cout << x * y << endl; //multiplicação
    cout << x / y << endl; //divisão
    cout << x % y << endl; //resto da divisão (mod)
    return 0;
}
```
Resposta no console:
```
5
1
6
1
1
```
>como `x` e `y` são do tipo `int`, o resultado das suas operações vão ser também um `int`. Por isso `x/y` é o inteiro da divisão.

> o operador `%` (resto da divisão) só funciona com variáveis`int`

### Caso 2: operações entre um `int` e um `float`

```cpp
#include <iostream>

using namespace std;

int x = 3; 
float y = 2;

int main(){
    cout << x + y << endl; //soma
    cout << x - y << endl; //subtração
    cout << x * y << endl; //multiplicação
    cout << x / y << endl; //divisão
    return 0;
}
```
Resposta no console:
```
5
1
6
1.5
```
> os resultados das operações entre `int` e `float` são `float`

> caso a operação seja entre `int` (ou `float`) e `double`, o resultado será do tipo `double`

## Precedência de operadores
Alguns operadores são cálculados antes de outros, como uma hierarquia, igual acontece em expressões matématicas.

Ordem de precedência:

1. operações dentro de `()`
2. `*` `/` `%`
3. `+` `-`

Operações aritméticos de níveis de precedências iguais, a que será calculada antes é a <ins>mais à esquerda</ins>.

### 1.
```cpp
#include <iostream>

using namespace std;

int x = 3; 
int y = 2;
int z = 4;

int main(){
    cout << (x+y)*z%x;
    return 0;
}
```
Resultado no console:
```
2
```
### 2.
```cpp
#include <iostream>

using namespace std;

int x = 3; 
int y = 2;
int z = 4;

int main(){
    cout << (x+y)*(z%x);
    return 0;
}
```
Resultado no console:
```
5
```

---
# Incremento e Decremento
Incremento é aumentar o valor de uma variável.
Descremento é diminuir.

Formas equivalentes de incrementar uma unidade:
```
x = x + 1;
```
```
x += 1;
```
```
x++;
```
Formas equivalentes de decrementar uma unidade:
```
x = x - 1;
```
```
x -= 1;
```
```
x--;
```

> `x+=a`, `x-=a`, `x*=a`, `x/=a` e `x%=a` são formas alternativas de escrever `x=x+a`, `x=x-a`, `x=x*a`, `x=x/a` e `x=x%a`, respectivamente.

```cpp
#include <iostream>

using namespace std;

int x = 0;

int main(){
    cout << x << "\n";
    x = x + 1
    cout << x << "\n";
    return 0;
}
```
Resultado no console:
```
0
1
```
## Operadores pré-fixados e pós-fixados

Os operadores de incremento (`++`) e decremento (`--`) são usados para aumentar ou diminuir o valor de uma variável em uma unidade.
Esses operadores podem ser pré-fixados (`++x`, `--x`) ou pós-fixados (`x++`, `x--`), e o comportamento muda dependendo da posição.

### 1. Operador Pré-Fixado (++x, --x)

O valor é incrementado ou decrementado antes de ser usado na expressão.
```cpp
#include <iostream>

int main() {
    int x = 5;
    int y = ++x;  // Primeiro x é incrementado, depois atribuído a y

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    return 0;
}
```
Resultado no console:
```
6
6
```
### 2. Operador Pós-Fixado (x++, x--)
O valor da variável é usado na expressão e só depois incrementado ou decrementado.
```cpp
#include <iostream>

int main() {
    int x = 5;
    int y = x++;  // Primeiro y recebe o valor de x, depois x é incrementado

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    return 0;
}
```
Resultado no console:
```
6
5
```
# Invertendo valores de variáveis
```
x = x * -1;
```
ou equivalente:
```
x = -x
```
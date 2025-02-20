# Operadores relacionais e lógicos

Eles <ins>sempre</ins> resultarão ou em `true` (1) ou em `false` (0).
| Operador | Descrição       | Exemplo                |
|-------------|-------------------|---------------------------|
| `==`        | Igualdade         | `(x == 10)`            |
| `!=`        | Diferente         | `(x != 10)`            |
| `>`         | Maior que         | `(x > 10)`             |
| `<`         | Menor que         | `(x < 10)`             |
| `>=`        | Maior ou igual    | `(x >= 10)`            |
| `<=`        | Menor ou igual    | `(x <= 10)`            |
| `&&`        | E lógico          | `(x > 5 && y < 10)`    |
| `\|\|`      | Ou lógico         | ``(x > 5 \|\| y < 10)``  |
| `!`         | Negação           | `(!(x > 5))`           |

## Tabela verdade dos operadores lógicos

#### **1. `!`**
| **Entrada (`A`)** | **Saída (`!A`)** |
|-----------------|----------------|
| `true`         | `false`        |
| `false`        | `true`         |

#### **2. `&&`**
| **Entrada (`A`)** | **Entrada (`B`)** | **Saída (`A && B`)** |
|-----------------|-----------------|-----------------|
| `true`         | `true`          | `true`          |
| `true`         | `false`         | `false`         |
| `false`        | `true`          | `false`         |
| `false`        | `false`         | `false`         |

#### **3. `||`**
| **Entrada (`A`)** | **Entrada (`B`)** | **Saída (`A \|\| B`)** |
|-----------------|-----------------|-----------------|
| `true`         | `true`          | `true`          |
| `true`         | `false`         | `true`          |
| `false`        | `true`          | `true`          |
| `false`        | `false`         | `false`         |


## Precedência dos operadores lógicos

Os operadores lógicos têm diferentes níveis de precedência, o que determina a ordem de avaliação quando aparecem em uma mesma expressão.

A ordem de maior precedência é:
1. `()` (expressão lógica dentro de `()`)
2. `!` (NOT)
3. `&&` (AND)
4. `||` (OR)

```cpp
#include <iostream>
using namespace std;

int main() {
    bool resultado = !true || false && true;
    cout << resultado << endl;
    return 0;
}
```
Resultado no console:
```
0
```
> o tipo `bool`, quando imprimido, escreve `0` (false) ou `1` (true)

# IF ELSE

## Sintaxe do `if`

```
if (condição) {
    // Código executado se a condição for verdadeira
}
```
A condição pode assumir o valor `true` ou o valor `false`. Ela poderá ser ***uma expressão de operações lógicas e relacionais***.

Se a condição dentro do `if` for true, o bloco do if será executado.

---

## Sintaxe do `if` e `else`
```
if (condição) {
    // Código executado se a condição for verdadeira
} else {
    // Código executado se a condição for falsa
}
```

Se for false, o bloco do `else` será executado.

---

## Sintaxe do `else if`
Se tivermos mais de duas opções (Múltiplas condições), usa-se `else if`
```cpp
#include <iostream>

int main() {
    int nota;
    std::cout << "Digite sua nota: ";
    std::cin >> nota;

    if (nota >= 90) {
        std::cout << "Nota A" << std::endl;
    } else if (nota >= 80) {
        std::cout << "Nota B" << std::endl;
    } else if (nota >= 70) {
        std::cout << "Nota C" << std::endl;
    } else {
        std::cout << "Nota F" << std::endl;
    }

    return 0;
}
```
## Faixa de valores
> os operadores lógicos (`!`,`&&` e `||`) juntamente com `if` podem ser usados para calcular se um valor está em uma certa faixa:
>```cpp
>if(x>0 && x<10){
>    cout << x << " esta entre 0 e 10";
>}else{
>    cout << x << " nao esta entre 0 e 10; 
>}
>```
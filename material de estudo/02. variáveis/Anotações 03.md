# Variáveis
## números (int, float, double)
### 1.

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

### 2. aumentando os algarismos significativos do `cout`

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
O `float` e `double` representam o número em <ins>*pontos flutuantes*</ins> (decimal), onde o `double` tem mais precisão justamente por ter uma maior capacidade de armazenamento (maior mantissa).
>`#include <iomanip>` é a biblioteca (padrão do C++) do `std::setprecision`, que define o número de dígitos significativos exibidos pelo `std::cout`.

### 3. fixando 16 casas decimais no `cout`
```cpp
#include <iostream>
#include <iomanip>

int n1 = 3.14159265358979;
float n2 = 3.14159265358979;
double n3 = 3.14159265358979;

int main(){
    std::cout << std::fixed << std::setprecision(16);// configurando o cout para exibir 16 casas decimais
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
```
> `fixed` (da biblioteca `iomanip`) força o `cout` a exibir casas decimais fixas em vez de notação científica.
`setprecision(16)` juntamente com `fixed` faz com que 16 casas decimais sejam mostradas após o ponto.

> Apenas `setprecision(16)` mostrará 16 digitos significativos, não 16 digitos pós o ponto.

### 4. voltando a configuração padrão do `cout`
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
>`defaultfloat` (da biblioteca `iomanip`) reverte o `fixed`. E `setprecision(6)` é a precisão padrão,

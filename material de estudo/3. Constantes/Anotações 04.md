# Constantes
## O Que são?
Constantes são valores fixos que não podem ser alterados após sua inicialização, ao contrário das variáveis.

Usar constantes ao invés de variáveis otimiza o código (deixa ele mais rápido), pois gerencia melhor o acesso à memória.
## Tipos de constantes em C++
C++ oferece diferentes maneiras de definir constantes, as principais são as `simples` e as `simbólicas`

### Simples:
```cpp
#include <iostream>

using namespace std;

int main() {
    const int idade = 18;
    cout << "Idade mínima: " << idade << endl;
    return 0;
}
```
`const` define uma "variável" que não pode ser alterada depois de inicializada. Ou seja, tem *tipo* e pode ocupar memória.

### Simbólica:
```cpp
#include <iostream>

using namespace std;

#define idade 18

int main() {
    cout << "Idade mínima: " << idade << endl;
    return 0;
}
```
 `#define` substitui texto no pré-processador. Diferente de `const`, `#define` não tem um tipo associado e não ocupa espaço na memória.

 Outro jeito de usar `#define`:
 ```cpp
 #include <iostream>

 using namespace std;

 #define OlaMundo cout << "Ola mundo";

 int main(){
    OlaMundo
    return 0;
 }
 ```
 Resposta no console:
 ```
 Ola mundo
 ```
```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Ola, mundo!";
    return 0;
}
```
`#include <iostream>` inclui a biblioteca iostram (padrão do C++), que contém funções para entrada e saída padrão (como `cin`e `cout`).

* **BIBLIOTECAS** são coleções de funções, classes e outros recursos reutilizáveis (que já foram programadas por alguém) que facilitam o desenvolvimento de software. Em vez de escrever tudo do zero, os programadores podem simplesmente importar uma biblioteca e usar seus recursos.

`using namespace std;` permite o uso dos elementos do namespace `std` sem precisar prefixá-los com `std::`

Sem essa linha, seria necessário escrever `std::cout` ao invés de apenas `cout`
```cpp
#include <iostream>

int main() {
    std::cout << "Ola, mundo!";
    return 0;
}
```

* **namespace** é um agrupamento de identificadores, ou seja, é um espaço reservado para organizar nomes de funções, classes e variáveis. Ele serve para evitar conflitos de nomes quando diferentes partes do código usam nomes iguais. Exemplo: 2 bibliotecas podem ter funções diferentes mas com o mesmo nome, para diferenciá-las usamos o namespace.
   * **namespace std** (abreviação de standard, ou seja, "padrão") contém todas as funções e classes da biblioteca padrão do C++. Isso inclui `cout`, `cin`, `endl`, `vector`, `string`, entre outros.

`int main(){` define a função principal.

* `main` é o ponto de entrada do programa, onde a execução começa.
* `int` indica que a função retorna um valor inteiro

`cout << "Ola mundo";` é a linha de código que escreve "Olá mundo" no console (terminal).

`return 0;` indica que o programa terminou com sucesso. O valor `0`é um código de saída convecional que sinaliza ao sismtea operacional que o programa finalizou corretamente.
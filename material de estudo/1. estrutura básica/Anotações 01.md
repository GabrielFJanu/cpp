# Estrutura base
##
```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Ola, mundo!";
    return 0;
}
```
`#include <iostream>` inclui a biblioteca iostram (padrão do C++), que contém funções para entrada e saída padrão (como `cin`e `cout`).

>**BIBLIOTECAS** são coleções de funções, classes e outros recursos reutilizáveis (que já foram programadas por alguém) que facilitam o desenvolvimento de software. Em vez de escrever tudo do zero, os programadores podem simplesmente importar uma biblioteca e usar seus recursos.

`using namespace std;` permite o uso dos elementos do namespace `std` sem precisar prefixá-los com `std::`

Sem essa linha, seria necessário escrever `std::cout` ao invés de apenas `cout`
```cpp
#include <iostream>

int main() {
    std::cout << "Ola, mundo!";
    return 0;
}
```

>**namespace** é um agrupamento de identificadores, ou seja, é um espaço reservado para organizar nomes de funções, classes e variáveis. Ele serve para evitar conflitos de nomes quando diferentes partes do código usam nomes iguais. Exemplo: podem existir 2 funções diferentes mas com o mesmo nome, para diferenciá-las usamos o namespace. Uma única biblioteca pode ter vários namespaces, assim funcionando como se fosse "pastas" para organizar funções, classes e etc.
   >> **namespace std** (abreviação de standard, ou seja, "padrão") contém todas as funções e classes da biblioteca padrão do C++. Isso inclui `cout`, `cin`, `endl`, `vector`, `string`, entre outros.

`int main(){` define a função principal.

* `main` é o ponto de entrada do programa, onde a execução começa.
* `int` indica que a função retorna um valor inteiro

`cout << "Ola mundo";` é a linha de código que escreve "Olá mundo" no console (terminal).

`return 0;` indica que o programa terminou com sucesso. O valor `0`é um código de saída convecional que sinaliza ao sismtea operacional que o programa finalizou corretamente.

## system("pause")

 Quando compila-se o código-fonte OlaMundo.cpp ele irá gerar um executável OlaMundo.exe. Quando ele é aberto, ele abre um terminal e fecha quase imediatamente, pois ele roda o código e finaliza ele muito rápido. Para resolver isso, temos que botar um `system("pause");`.
```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Ola, mundo!";
    system("pause");
    return 0;
}
```
Assim, abrindo o OlaMundo.exe, ele vai executar o programa, pausar e esperar o aperto de qualquer tecla para finalizar.

## endl
quebra de linha
```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Ola, mundo!" << endl;
    return 0;
}
```
forma alternativa sem usar `endl`:
```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Ola, mundo!\n";
    return 0;
}
```
## Comentario
comentário é um jeito de organizar o código. Tudo que estará escrito nele, não é compilado, ou seja, não interfere no funcionamento do código.

1. comentar uma linha usando `//`:
```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Ola, mundo!" << endl;
    //essa linha é um comentário
    return 0;
}
```
2. comentar um bloco usando `/* */`:
```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Ola, mundo!" << endl;
    /* todo esse bloco
    de código
    é um
    comentário
    */
    return 0;
}
```


# Argumentos para a função main, `argc` e `argv`
## O que são `argc` e `argv` na função `main`
A assinatura da função `main` pode incluir dois parâmetros opcionais:
```cpp
int main(int argc, char *argv[])
```
Esses parâmetros são usados para receber argumentos passados na linha de comando ao executar o programa.
## `argc`
* `argc` (argument count) representa o número total de argumentos passados ao programa, incluindo o próprio nome do programa.

* Ele é um inteiro (`int`) e sempre terá pelo menos 1, pois o primeiro argumento (`argv[0]`) sempre contém o nome do programa.
## `argv`
* `argv` (argument vector) é um vetor de strings (`char*[]`), onde cada elemento contém um argumento passado na linha de comando.

* `argv[0]` contém o nome do programa.

*  `argv[1]`, `argv[2]`, etc., contêm os argumentos passados pelo usuário.

>`argv` é um array de strings (`char*`), mas se você ainda não sabe o que é ponteiro, apenas entenda que ele armazena palavras do terminal como strings separadas.

```cpp
#include <iostream>

int main(int argc, char *argv[]) {
    std::cout << "Número de argumentos: " << argc << std::endl;

    for (int i = 0; i < argc; i++) {  // Percorre todos os argumentos
        std::cout << "Argumento " << i << ": " << argv[i] << std::endl;
    }

    return 0;
}
```
Comando no terminal (no diretório que está o programa.exe):
```
programa oi mundo 42
```
Resposta no terminal:
```
Número de argumentos: 4
Argumento 0: programa
Argumento 1: oi
Argumento 2: mundo
Argumento 3: 42
```
## verificando argumentos específicos
O código abaixo responde de forma diferente dependendo do argumento passado na linha de comando:
```cpp
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    if (argc > 1) {  // Verifica se há pelo menos 1 argumento além do nome do programa
        std::string argumento = argv[1];  // Converte char* para std::string

        if (argumento == "oi") {
            std::cout << "Oi pra você também!" << std::endl;
        } else if (argumento == "ola") {
            std::cout << "Olá, tudo bem?" << std::endl;
        } else {
            std::cout << "Não entendi." << std::endl;
        }
    } else {
        std::cout << "Por favor, forneça um argumento." << std::endl;
    }

    return 0;
}
```

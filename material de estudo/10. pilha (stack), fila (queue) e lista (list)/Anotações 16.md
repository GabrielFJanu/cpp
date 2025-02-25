# Pilha / Stack
## O que é
A Pilha (ou `Stack`) é uma estrutura de dados que segue a regra **LIFO (Last In, First Out – "Último a entrar, primeiro a sair")**.

É usada para armazenar dados temporários 
>e controlar a execução de funções no programa (call stack).

## Regras principais da Pilha (Stack)

1. Os elementos são inseridos no topo (`push`).
2. Os elementos são removidos do topo (`pop`).
3. O último elemento inserido é o primeiro a ser removido (LIFO).
```
    TOPO ───> [ 30 ]  ← Último a entrar (primeiro a sair)
              [ 20 ]
              [ 10 ]
    BASE ───> [ 5 ]   ← Primeiro a entrar (último a sair)
```
## Criando uma Pilha com `std::stack`
O C++ possui a classe `std::stack` na `<stack>` para criar pilhas.
```cpp
#include <iostream>
#include <stack>

int main() {
    std::stack<int> pilha;

    // Inserindo elementos na pilha (push)
    pilha.push(10);
    pilha.push(20);
    pilha.push(30);

    std::cout << "Topo da pilha: " << pilha.top() << std::endl;  // 30

    // Removendo elementos da pilha (pop)
    pilha.pop();  // Remove 30
    std::cout << "Novo topo: " << pilha.top() << std::endl;  // 20

    return 0;
}
```
Resposta no terminal:
```
Topo da pilha: 30
Novo topo: 20
```
Os elementos entram e saem da pilha seguindo o conceito LIFO.
## Operações de `std::stack`
| **Método**       | **Descrição**                                      |
|-----------------|--------------------------------------------------|
| `push(valor)`   | Insere um elemento no topo da pilha.              |
| `pop()`        | Remove o elemento do topo da pilha.               |
| `top()`        | Retorna o elemento no topo da pilha (sem remover). |
| `empty()`      | Retorna `true` se a pilha estiver vazia.           |
| `size()`       | Retorna o número de elementos na pilha.            |

># Pilha na Memória (`Call Stack`)
>A `Call Stack` (ou Pilha de Execução) é um mecanismo interno do C++ que gerencia chamadas de funções e armazena variáveis locais durante a execução do programa.
>
>A `Call Stack` é gerenciada automaticamente pelo compilador e pelo sistema operacional.
>```cpp
>#include <iostream>
>
>void func1() {
>    std::cout << "Dentro de func1\n";
>}
>
>void func2() {
>    std::cout << "Entrando em func2\n";
>    func1();  // Chamada a func1
>    std::cout << "Saindo de func2\n";
>}
>
>int main() {
>    std::cout << "Iniciando main\n";
>    func2();  // Chamada a func2
>    std::cout << "Finalizando main\n";
>    return 0;
>}
>```
>Resposta no terminal:
>```
>Iniciando main
>Entrando em func2
>Dentro de func1
>Saindo de func2
>Finalizando main
>```
>A pilha controla as chamadas das funções:
>
>1. `main()` chama `func2()`, que é empilhada.
>2. `func2()` chama `func1()`, que é empilhada.
>3. `func1()` termina e sai da pilha (`pop`).
>4. `func2()` termina e sai da pilha (`pop`).
>5. `main()` termina.
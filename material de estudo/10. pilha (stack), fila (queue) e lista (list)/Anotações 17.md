# Fila / Queue
## O que é
Uma Fila (`Queue`) é uma estrutura de dados que segue o princípio **FIFO (First In, First Out – "Primeiro a entrar, primeiro a sair")**.

É útil para processamento de tarefas, sistemas de espera, gerenciamento de processos, etc.

>**Diferença `queue` vs `stack`:**	`queue` (FIFO) remove do início, `stack` (LIFO) remove do topo.

## Regras principais da Fila (Queue):

1. Os elementos são adicionados no final da fila (`push`).
2. Os elementos são removidos do início da fila (`pop`).
3. O primeiro elemento inserido é o primeiro a ser removido (FIFO).

```
    INÍCIO ──> [ 10 ] [ 20 ] [ 30 ] [ 40 ] [ 50 ] <── FIM
```
## Criando uma Fila com `std::queue`
O C++ possui a classe `std::queue` na `<queue>` para implementar filas.
```cpp
#include <iostream>
#include <queue>  // Biblioteca para fila

int main() {
    std::queue<int> fila;

    // Inserindo elementos na fila (push)
    fila.push(10);
    fila.push(20);
    fila.push(30);

    std::cout << "Primeiro elemento da fila: " << fila.front() << std::endl;  // 10

    // Removendo elementos da fila (pop)
    fila.pop();  // Remove 10
    std::cout << "Novo primeiro elemento: " << fila.front() << std::endl;  // 20

    return 0;
}
```
Resposta no console:
```
Primeiro elemento da fila: 10
Novo primeiro elemento: 20
```
Os elementos entram pelo final e saem pelo início da fila (FIFO).
## Operações da `std::queue`
| **Método**      | **Descrição**                                   |
|----------------|----------------------------------------------|
| `push(valor)`  | Insere um elemento no final da fila.         |
| `pop()`       | Remove o elemento no início da fila.        |
| `front()`     | Retorna o elemento na frente da fila.       |
| `back()`      | Retorna o último elemento da fila.          |
| `empty()`     | Retorna `true` se a fila estiver vazia.      |
| `size()`      | Retorna o número de elementos na fila.       |
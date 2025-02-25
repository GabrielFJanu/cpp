# Funções
## O que é
 função é um bloco de código reutilizável que realiza uma tarefa específica.

Facilita a organização do código, evita repetições e melhora a legibilidade.
## Sintaxe de uma função
```cpp
tipo_retorno nome_da_funcao(parâmetros) {
    // Corpo da função
    return valor;  // (se necessário)
}
```
Exemplo:
```cpp
#include <iostream>

// Declaração da função
int soma(int a, int b) {
    return a + b;  // Retorna a soma de a e b
}

int main() {
    int resultado = soma(5, 3);  // Chamada da função
    std::cout << "Soma: " << resultado << std::endl;
    return 0;
}
```
Resposta no console:
```
Soma: 8
```
## Tipos de funções
### 1. Função com retorno
Devolve um valor ao chamador usando `return`:
```cpp
int quadrado(int x) {
    return x * x;
}
```
Usando:
```cpp
cout << quadrado(4);
```
Resposta no console:
```
16
```
### 2. Função sem retorno (`void`)
 Executa uma ação, mas não retorna nada (`void`):
 ```cpp
 void mensagem() {
    std::cout << "Ola, mundo!" << std::endl;
}
```
Usando
```cpp
mensagem();
```
Resposta no terminal:
```
Ola, mundo!
```
### 3. Função sem parâmetros
Não recebe valores na chamada e retornam algo:
```cpp
int numeroSecreto() {
    return 42;
}
```
Usando:
```cpp
cout << numeroSecreto();
```
Resposta no terminal:
```
42
```
### 4. Função com múltiplos parâmetros
Pode receber vários valores de entrada
```cpp
float media(float a, float b, float c) {
    return (a + b + c) / 3.0;
}
```
## Declaração e Definição Separadas
Em programas grandes, é comum declarar funções antes do `main()` e defini-las depois.
```cpp
#include <iostream>

// Declaração da função (assinatura)
int multiplica(int x, int y);

int main() {
    std::cout << multiplica(4, 5);  // Chamada da função
    return 0;
}

// Definição da função
int multiplica(int x, int y) {
    return x * y;
}
```
>Melhora a organização e permite separar código em arquivos diferentes.
## Funções com valores padrões
Podemos definir valores padrões para parâmetros.
```cpp
#include <iostream>

using namespace std;

void saudacao(string nome = "Visitante"){
    cout << "Ola, " << nome << "!" << endl;
}

int main(){
    saudacao(); // Exibe "Olá, Visitante!"
    saudacao("Carlos");  // Exibe "Olá, Carlos!"
    return 0;
}
```
ou, equivalentemente:
```cpp
#include <iostream>

using namespace std;

void saudacao(string nome = "Visitante");

int main(){
    saudacao(); // Exibe "Olá, Visitante!"
    saudacao("Carlos");  // Exibe "Olá, Carlos!"
    return 0;
}

void saudacao(string nome){
    cout << "Ola, " << nome << "!" << endl;
}
```
Se nenhum valor for passado, o valor padrão será usado.
## Passagem de parâmetros
### 1. Passagem por valor (cópia)
O argumento original não é modificado.
```cpp
void dobrar(int x) {
    x *= 2;
}
```
```cpp
int num = 10;
dobrar(num);
cout << num;  // Ainda será "10", pois x é uma cópia.
```
Na passagem por valor, quando chamamos uma função passando um argumento, o valor original não é alterado. Em vez disso, o C++ cria uma cópia desse valor e trabalha com a cópia dentro da função.
### 2. Passagem por Referência (`&`)
O argumento original é modificado.
```cpp
void dobrar(int &x) {
    x *= 2;
}
```
```cpp
int num = 10;
dobrar(num);
cout << num;  // Agora será "20"
```
A função modifica diretamente `num`, pois `x` é uma referência a `num`.

## Sobrecarga de funções
A sobrecarga de funções (Function Overloading) permite definir várias funções com o mesmo nome, desde que tenham assinaturas diferentes (ou seja, diferentes tipos ou quantidades de parâmetros).

Isso permite reutilizar o mesmo nome para funções que realizam tarefas semelhantes, mas com diferentes entradas.
```cpp
#include <iostream>
using namespace std;

// Sobrecarga da função "soma"
int soma(int a, int b) {  
    return a + b;
}

double soma(double a, double b) {  
    return a + b;
}

int soma(int a, int b, int c) {  
    return a + b + c;
}

int main() {
    cout << "soma(3, 5) = " << soma(3, 5) << endl;
    cout << "soma(2.5, 4.1) = " << soma(2.5, 4.1) << endl;
    cout << "soma(1, 2, 3) = " << soma(1, 2, 3) << endl;
    return 0;
}
```
Resposta no console:
```
soma(3, 5) = 8
soma(2.5, 4.1) = 6.6
soma(1, 2, 3) = 6
```
O compilador escolhe automaticamente a função correta com base nos argumentos fornecidos.

>**Não** podemos sobrecarregar uma função apenas mudando o tipo de retorno!
>>```cpp
>>int soma(int a, int b);
>>double soma(int a, int b);  // Erro! Não é suficiente para diferenciar
>>```
> O compilador não consegue diferenciar apenas pelo tipo de retorno.


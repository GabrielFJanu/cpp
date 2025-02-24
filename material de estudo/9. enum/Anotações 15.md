# Enum
## O que é
Um `enum` (enumeração) em C++ é um tipo de dado que associa nomes a valores inteiros, tornando o código mais legível e organizado.

Útil para representar opções fixas, como dias da semana, estados de um jogo ou tipos de erro.
## Sintaxe do `enum`
```cpp
#include <iostream>
using namespace std;

enum DiaDaSemana { DOMINGO, SEGUNDA, TERÇA, QUARTA, QUINTA, SEXTA, SÁBADO };

int main() {
    DiaDaSemana hoje = QUARTA;
    
    cout << "Hoje é: " << hoje << endl;
    return 0;
}
```
Resposta no terminal: 
```
Hoje é: 3
```
Os valores começam em `0` e aumentam automaticamente (DOMINGO = 0, SEGUNDA = 1, TERÇA = 2, QUARTA = 3, ...).

Internamente, `enum` é armazenado como `int`.
## Personalizando valores
Podemos definir valores específicos para cada item do `enum`:
```cpp
#include <iostream>
using namespace std;

enum StatusPedido { PENDENTE = 10, PROCESSANDO = 20, ENVIADO = 30, ENTREGUE = 40 };

int main() {
    StatusPedido status = ENVIADO;
    
    cout << "Status do pedido: " << status << endl;
    return 0;
}
```
Resposta no console:
```
Status do pedido: 30
```
Os valores podem ser definidos manualmente, mas precisam ser **<ins>ÚNICOS</ins>** dentro do `enum`.

## Comparando valores do `enum`
```cpp
#include <iostream>
using namespace std;

enum Cor {VERMELHO ,VERDE, AZUL};

int main(){
    Cor minhaCor;
    minhaCor = VERDE;//ou minhaCor = 1 (tanto faz)
    if(minhaCor==VERDE){
        cout << "minha cor eh verde!";
    }else{
        cout << "minha cor nao eh verde!";
    }
    return 0;
}
```
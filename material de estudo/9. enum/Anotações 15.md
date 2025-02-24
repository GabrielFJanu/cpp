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
    minhaCor = VERDE;
    if(minhaCor==VERDE){//ou minhaCor==1(tanto faz)
        cout << "minha cor eh verde!";
    }else{
        cout << "minha cor nao eh verde!";
    }
    return 0;
}
```
### Possível problema:
```cpp
#include <iostream>
using namespace std;

enum Cor {VERMELHO ,VERDE, AZUL};
enum Numero {ZERO, UM, DOIS};

int main(){
    Cor minhaCor;
    minhaCor = VERDE;
    if(minhaCor==UM){
        cout << "minha cor eh verde!";
    }else{
        cout << "minha cor nao eh verde!";
    }
    return 0;
}
```
Resposta no console:
```
minha cor eh verde!
```
`minhaCor` foi inivializada como `VERDE` mas no a expressão lógica `minhaCor==UM` é verdadeira.

>**Por que isso funciona, mesmo minhaCor sendo VERDE e não UM?**
O problema ocorre porque enum tradicional (`enum`) em C++ armazena valores como `int` e não tem verificação de tipo estrita. Como os valores de `Cor` e `Numero` são apenas números inteiros no fundo, o compilador permite comparar minhaCor (que é VERDE = 1) com UM = 1 e considera a comparação verdadeira.

> Para resolver isso, temos que implementar o conceito de classe ou `class` mais adiante
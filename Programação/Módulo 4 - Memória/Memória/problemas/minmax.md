# MinMax por Referência 📊

Muitas vezes precisamos que uma função em C retorne mais de uma informação. Como o comando `return` só permite enviar um único valor, utilizamos ponteiros para modificar variáveis criadas no escopo da `main`. Neste programa, você criará uma função que calcula e retorna simultaneamente o menor e o maior valor entre dois números.

## Especificação
Em um arquivo chamado `minmax.c`, crie um programa que execute as seguintes tarefas:
1. Declare quatro variáveis inteiras na `main`: `num1`, `num2`, `min` e `max`.
2. Solicite os dois números ao usuário usando a função `get_int`.
3. Escreva a função `void encontrar_min_max(int a, int b, int *menor, int *maior)` que:
    - Compara os valores `a` e `b`.
    - Armazena o menor valor no endereço apontado por `menor`.
    - Armazena o maior valor no endereço apontado por `maior`.
4. Chame a função passando os valores informados e os endereços de `min` e `max`.
5. Exiba na tela os valores encontrados para `min` e `max`.

## Demonstração
```bash
$ ./minmax
Primeiro numero: 42
Segundo numero: 18
Menor valor: 18
Maior valor: 42

$ ./minmax
Primeiro numero: -5
Segundo numero: 10
Menor valor: -5
Maior valor: 10
```
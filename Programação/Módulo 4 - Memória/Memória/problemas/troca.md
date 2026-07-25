# Troca Invertida 🔄

Quando enviamos variáveis para uma função em C por valor, ela recebe apenas cópias. Para alterar as variáveis do programa principal (`main`), precisamos passar seus endereços (ponteiros). Neste desafio, você criará uma função que recebe dois números e inverte seus valores e sinais no escopo principal.

## Especificação
Em um arquivo chamado `troca.c`, crie um programa que faça o seguinte:
1. Solicite dois números inteiros ao usuário usando `get_int`.
2. Escreva uma função chamada `inverter_sinais(int *a, int *b)` que:
    - Troque os valores contidos nos dois endereços recebidos (o valor de `a` vai para `b` e vice-versa).
    - Inverta o sinal de ambos os números.
3. Na função `main`, chame a função `inverter_sinais` passando os endereços de memória das duas variáveis (operador `&`).
4. Imprima os novos valores na `main` para comprovar que a alteração ocorreu na memória de origem.

## Demonstração
```bash
$ ./troca
Digite o primeiro numero (A): 5
Digite o segundo numero (B): 10
Valores alterados:
A = -10
B = -5

$ ./troca
Digite o primeiro numero (A): -3
Digite o segundo numero (B): 8
Valores alterados:
A = -8
B = 3
```
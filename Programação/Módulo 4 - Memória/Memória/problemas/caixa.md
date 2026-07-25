# Simulador de Caixa Eletrônico 🏦

Neste desafio avançado, você criará a lógica de um caixa eletrônico. Ao realizar um saque, precisamos verificar o saldo do cliente e atualizar o valor disponível em sua conta, além de determinar a quantidade de cedulas entregues. Como precisamos atualizar o saldo e "retornar" a quantidade de cada nota, você aplicará a passagem por referência.

## Especificação
Em um arquivo chamado `caixa.c`, crie um programa que faça o seguinte:
1. Defina uma variável local `saldo` na `main` inicializada com **R$ 500**.
2. Peça ao usuário o valor que ele deseja sacar através do `get_int`.
3. Crie a função `int realizar_saque(int *saldo_ptr, int valor_saque, int *notas_50, int *notas_10)` que:
    - Verifica se o valor apontado por `saldo_ptr` é maior ou igual ao `valor_saque`. Se não for, a função deve retornar `0` (indicando erro por saldo insuficiente).
    - Se houver saldo, calcula a quantidade de notas de **R$ 50** e **R$ 10** necessárias para cobrir o saque e guarda esses números nos ponteiros `notas_50` e `notas_10`.
    - Deduz o valor sacado diretamente da variável `saldo` utilizando o ponteiro `saldo_ptr`.
    - Retorna `1` (indicando saque bem-sucedido).
4. Na `main`, se o saque for realizado com sucesso, exiba quantas notas de cada valor foram entregues e o **novo saldo atualizado**.

## Demonstração
```bash
$ ./caixa
Saldo atual: R$ 500
Valor do saque: R$ 130
--- Saque Realizado ---
Notas de R$ 50: 2
Notas de R$ 10: 3
Novo Saldo: R$ 370

$ ./caixa
Saldo atual: R$ 500
Valor do saque: R$ 600
Operação cancelada: Saldo insuficiente!
```
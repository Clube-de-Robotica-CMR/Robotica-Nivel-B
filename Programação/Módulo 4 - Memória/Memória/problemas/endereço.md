# Endereço de Memória 📍

Em linguagem C, variáveis armazenam valores em locais específicos da memória RAM. Neste desafio introdutório, você deve criar um programa que captura uma idade informada pelo usuário, exibe o endereço de memória onde esse valor foi guardado e atualiza essa idade diretamente através do ponteiro.

## Especificação
Em um arquivo chamado `endereco.c`, crie um programa que execute os seguintes passos:
1. Solicite ao usuário uma idade utilizando a função `get_int("Digite sua idade: ")`.
2. Declare um ponteiro de inteiro que armazene o endereço dessa variável.
3. Imprima na tela o endereço de memória da variável utilizando o especificador de formato `%p`.
4. Altere o valor da variável de idade para mais 5 anos **utilizando apenas o ponteiro** (operador de desreferenciação `*`).
5. Exiba o novo valor atualizado da variável na tela.

## Demonstração
```bash
$ ./endereco
Digite sua idade: 20
Endereço de memória: 0x7ff7bfe1874c
Nova idade: 25
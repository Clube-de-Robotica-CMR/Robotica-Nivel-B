# Olá, C++! 👋

Bem-vindo ao C++! Para começar sua jornada nesta nova linguagem, você irá criar o seu primeiro programa, ajustando a sintaxe para utilizar as ferramentas nativas da biblioteca `<iostream>`.

## Especificação
Em um arquivo chamado `ola.cpp`, crie um programa que faça o seguinte:
1. Inclua a biblioteca `<iostream>` e utilize o namespace padrão (`using namespace std;`).
2. Solicite o nome do usuário utilizando `cout <<` para exibir a mensagem.
3. Declare uma variável do tipo `string` e leia o nome digitado usando `cin >>`.
4. Exiba na tela a mensagem `"Olá, [nome]!"` utilizando `cout` e `endl` (ou `\n`) para pular linha.
5. Compile seu código utilizando o compilador `g++`: `g++ ola.cpp -o ola`.

## Demonstração
```bash
$ ./ola
Digite seu nome: Maria
Olá, Maria!
```
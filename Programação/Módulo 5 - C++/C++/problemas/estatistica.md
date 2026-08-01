# Estatísticas de Vetor em C++ 📊

Embora o C++ ofereça novos recursos de entrada e saída, a lógica de programação permanece essencial. Neste desafio, você vai combinar a leitura dinâmica de múltiplos dados com `cin` e a exibição simplificada com `cout` para analisar um conjunto de números.

## Especificação
Em um arquivo chamado `estatisticas.cpp`, crie um programa que execute as seguintes tarefas:
1. Peça ao usuário a **quantidade de elementos** que ele deseja inserir.
2. Declare um `vector` de inteiros.
3. Utilize um laço de repetição e `cin >>` para ler cada um dos números informados pelo usuário.
4. Crie uma função (ou processe no `main`) que percorra o vetor e calcule:
    - O **maior** valor digitado.
    - O **menor** valor digitado.
    - A **média aritmética** de todos os valores (exibida como número decimal).
5. Imprima todos os resultados formatados na tela utilizando apenas `cout`.

## Demonstração
```bash
$ ./estatisticas
Quantos numeros deseja inserir? 4
Digite o numero 1: 10
Digite o numero 2: 5
Digite o numero 3: 20
Digite o numero 4: 15

--- Resultados ---
Maior numero: 20
Menor numero: 5
Media: 12.5
```
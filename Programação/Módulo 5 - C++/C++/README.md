# C++ ➕

Nesta aula, iniciamos nossa jornada pelo Módulo de C++, explorando como a linguagem evolui a partir do C. Analisamos as mudanças na sintaxe de entrada e saída de dados, a introdução de namespaces, os fundamentos de Programação Orientada a Objetos (POO) e como a sobrecarga de operadores (*operator overload*) desmistifica comandos como `std::cout <<`.

## Conceitos de Programação Explorados

**- Compilação com `g++`:** A transição do compilador `gcc` para o `g++`, adequado para a compilação de código nativo em C++.

**- Entrada e Saída de Dados (`<iostream>`):** A substituição do `<stdio.h>` pela biblioteca `<iostream>`, utilizando `std::cout` para exibição, `std::endl` ou `\n` para quebras de linha, e `std::cin` para leitura do teclado sem a necessidade de especificadores de formato.

**- Da `struct` à `class` (POO Básica):** Compreendemos como evoluímos de estruturas simples em C (que agrupam apenas variáveis) para classes em C++, permitindo encapsular atributos (dados) e métodos/funções (comportamentos, como o método `miar()` no exemplo do `Gato`).

**- Sobrecarga de Operadores (*Operator Overload*):** Descobrimos que o C++ permite redefinir o comportamento de operadores. Entendemos que `std::cout << "Olá\n";` é uma sintaxe simplificada para a chamada de método `std::cout.operator<<("Olá\n");`.

**- Organização com `namespaces`:** A utilização de `std::` como um espaço de nomes da biblioteca padrão para evitar conflitos de escopo, e o uso de `using namespace std;` para simplificar a escrita no código.

**- Manipulação Nativa de Strings:** Uso do tipo `std::string` para representar textos de forma nativa e segura, sem a necessidade de gerenciar ponteiros de caracteres manualmente.

**- Vectors (arrays dinâmicos):** Uso do tipo `std::vector` para criar listas de elementos de forma dinâmica, sem se preocupar com o tamanho ou capacidade.

### 🏆 Conjunto de problemas
Para consolidar seu conhecimento sobre C++, realize o **conjunto de problemas do Módulo 5**.

Adquira mais informações clicando [aqui!](./PSET5.md)
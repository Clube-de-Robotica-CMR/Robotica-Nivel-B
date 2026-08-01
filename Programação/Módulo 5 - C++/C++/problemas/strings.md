# Manipulador de Strings 🔤

Uma das maiores vantagens do C++ em relação ao C é o tipo `std::string`. Não precisamos mais manipular arrays de caracteres terminados em `\0` nem ponteiros complexos para trabalhar com texto. Neste exercício, você praticará a concatenação e a medição de tamanho de textos nativos.

## Especificação
Em um arquivo chamado `texto.cpp`, crie um programa que faça o seguinte:
1. Peça ao usuário para digitar seu **primeiro nome** e seu **sobrenome** (em leituras separadas usando `cin`).
2. Unifique os dois textos em uma terceira variável `nome_completo` utilizando o operador de adição (`+`).
3. Exiba o nome completo resultante.
4. Utilize o método `.length()` ou `.size()` da própria variável do tipo `string` para exibir a quantidade total de caracteres do nome completo (desconsiderando ou incluindo o espaço).

## Demonstração
```bash
$g++ texto.cpp -o texto$ ./texto
Digite seu primeiro nome: Ana
Digite seu sobrenome: Silva
Nome completo: Ana Silva
Total de caracteres: 9
```
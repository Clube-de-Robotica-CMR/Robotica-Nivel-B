//Printando o tamanho de uma string usando string.h

#include <stdio.h>
#include <string.h>
#include "lib/cs50.h"

int main(void)
{
    string nome = get_string("Nome: ");
    int tamanho = strlen(nome);

    printf("%i\n", tamanho);
}
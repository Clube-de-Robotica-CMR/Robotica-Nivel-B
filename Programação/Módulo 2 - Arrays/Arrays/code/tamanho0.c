//Printando o tamanho de uma string

#include <stdio.h>
#include "lib/cs50.h"

int main(void)
{
    string nome = get_string("Nome: ");

    int n = 0;
    while (nome[n] != '\0')
    {
        n++;
    }

    printf("%i\n", n);
}
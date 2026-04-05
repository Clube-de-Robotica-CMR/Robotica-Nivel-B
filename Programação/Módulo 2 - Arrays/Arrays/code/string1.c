//Printando uma string usando um loop,  mas declarando mais de uma variável

#include <stdio.h>
#include <string.h>
#include "lib/cs50.h"

int main(void)
{
    string nome = get_string("Nome: ");

    for (int i = 0, n = strlen(nome); i < n; i++)
    {
        printf("%c", nome[i]);
    }

    printf("\n");
}
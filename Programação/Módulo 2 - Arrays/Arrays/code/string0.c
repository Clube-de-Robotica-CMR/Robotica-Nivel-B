//Printando uma string usando um loop

#include <stdio.h>
#include <string.h>
#include "lib/cs50.h"

int main(void)
{
    string nome = get_string("Nome: ");

    for (int i = 0; i < strlen(nome); i++)
    {
        printf("%c", nome[i]);
    }

    printf("\n");
}
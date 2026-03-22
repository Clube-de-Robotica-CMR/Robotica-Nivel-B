#include <stdio.h>
#include "lib/cs50.h"

int main ()
{
    int x = get_int("Digite o valor de x: ");
    int y = get_int("Digite o valor de y: ");

    if (x < y)
    {
        printf("x menor que y\n");
    }
    else
    {
        printf("x maior ou igual a y\n");
    }
}
//Printando caractere por caractere de um array de strings

#include <stdio.h>
#include "lib/cs50.h"

int main(void)
{
    string palavras[2];
    palavras[0] = "OI!";
    palavras[1] = "ATE!";

    printf("%c%c%c\n", palavras[0][0], palavras[0][1], palavras[0][2]);
    printf("%c%c%c%c\n", palavras[1][0], palavras[1][1], palavras[1][2], palavras[1][3]);
}
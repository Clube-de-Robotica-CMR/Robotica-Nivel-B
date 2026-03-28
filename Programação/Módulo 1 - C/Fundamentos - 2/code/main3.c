#include <stdio.h>
#include "lib/cs50.h"
#include "gato7.h"
#include "utils1.h"

int main()
{
    saudacao = "Eae, mano, sou um gato que pode miar uma quantidade n de vezes.\n";
    printf("%s", saudacao);
    int n = pegar_natural("n: ");
    miar(n);
}
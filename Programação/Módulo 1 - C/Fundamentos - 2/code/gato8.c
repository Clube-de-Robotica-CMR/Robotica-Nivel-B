#include <stdio.h>
#include "lib/cs50.h"

string saudacao = "Eae, mano, sou um gato que pode miar uma quantidade n de vezes.\n";

void miar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("miau\n");
    }
}
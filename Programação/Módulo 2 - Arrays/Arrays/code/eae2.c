// Printando "Eae, {nome}" usando command-line argumments, mas verificando a quantidade de argumentos

#include <stdio.h>
#include "lib/cs50.h"

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("Eae, %s\n", argv[1]);
    }
    else 
    {
        printf("Eae, mano\n");
    }
}

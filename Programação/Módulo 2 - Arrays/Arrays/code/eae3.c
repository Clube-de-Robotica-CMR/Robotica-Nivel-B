// Verificando a quantidade de argumentos antes de printar

#include <stdio.h>
#include "lib/cs50.h"

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Como usar: ./eae nome\n");
        return 1;
    }

    printf("Eae, %s\n", argv[1]);
    return 0;
}

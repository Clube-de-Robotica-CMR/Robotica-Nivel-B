//média de três pontos com input do usuário usando loop

#include <stdio.h>
#include "lib/cs50.h"

int main(void)
{
    int pontos[3];
    for (int i = 0; i < 3; i++)
    {
        pontos[i] = get_int("Ponto: ");
    }

    printf("Media: %f\n", (pontos[0] + pontos[1] + pontos[2]) / 3.0);
}
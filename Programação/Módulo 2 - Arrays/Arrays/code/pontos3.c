//média de três pontos com input do usuário

#include <stdio.h>
#include "lib/cs50.h"

int main(void)
{
    int pontos[3];
    pontos[0] = get_int("Ponto: ");
    pontos[1] = get_int("Ponto: ");
    pontos[2] = get_int("Ponto: ");

    printf("Media: %f\n", (pontos[0] + pontos[1] + pontos[2]) / 3.0);
}
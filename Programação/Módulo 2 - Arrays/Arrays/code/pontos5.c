//média de três pontos usando uma constante

#include <stdio.h>
#include "lib/cs50.h"

int main(void)
{
    const int N = 3;

    int pontos[N];
    for (int i = 0; i < N; i++)
    {
        pontos[i] = get_int("Ponto: ");
    }

    printf("Media: %f\n", (pontos[0] + pontos[1] + pontos[2]) / 3.0);
}
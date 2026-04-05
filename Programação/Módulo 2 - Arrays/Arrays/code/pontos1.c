//média de três pontos (hardcoded) usando um array, inicializando cada elemento do array separadamente

#include <stdio.h>

int main(void)
{
    int pontos[3];
    pontos[0] = 79;
    pontos[1] = 73;
    pontos[2] = 33;

    printf("Media: %f\n", (pontos[0] + pontos[1] + pontos[2]) / 3.0);
}
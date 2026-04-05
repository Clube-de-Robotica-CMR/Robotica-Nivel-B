//média de três pontos (hardcoded) usando um array, declarando os valores junto dele

#include <stdio.h>

int main(void)
{
    int pontos[] = {79, 73, 33};

    printf("Media: %f\n", (pontos[0] + pontos[1] + pontos[2]) / 3.0);
}
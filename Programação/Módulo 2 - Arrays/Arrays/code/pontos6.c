//média de três pontos usando uma função como auxiliar

#include <stdio.h>
#include "lib/cs50.h"

float media(int numeros[], int tamanho);

int main(void)
{
    const int N = 3;

    int pontos[N];
    for (int i = 0; i < N; i++)
    {
        pontos[i] = get_int("Ponto: ");
    }

    printf("Media: %f\n", media(pontos, N));
}

float media(int numeros[], int tamanho)
{
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += numeros[i];
    }

    return soma / (float) tamanho;
}
#include <stdio.h>
#include "lib/cs50.h"

int main() 
{
    int n = get_int("Digite o valor de n: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
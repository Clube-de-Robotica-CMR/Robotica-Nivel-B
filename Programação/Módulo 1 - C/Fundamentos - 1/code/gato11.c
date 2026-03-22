#include <stdio.h>
#include "lib/cs50.h"

int main() 
{
    int n;
    do 
    {
        n = get_int("Digite o valor de n: ");
    } while (n < 0);

    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
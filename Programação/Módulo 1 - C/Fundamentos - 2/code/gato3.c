#include <stdio.h>
#include "lib/cs50.h"

void miar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("miau\n");
    }
}

int main()
{
    int n; 
    do
    {
        n = get_int("n: ");
    } while (n < 0);

    miar(n);
}


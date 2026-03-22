#include <stdio.h>
#include "lib/cs50.h"

int main() 
{
    int n;
    while (true)
    {
        n  = get_int("Digite o valor de n: ");
        if (n >= 0)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
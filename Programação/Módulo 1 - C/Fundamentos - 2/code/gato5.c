#include <stdio.h>
#include "lib/cs50.h"

void miar(int n);
int pegar_natural(string msg);

int main()
{
    int n = pegar_natural("n: "); 
    miar(n);
}

void miar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("miau\n");
    }
}

int pegar_natural(string msg)
{
    int num;
    do
    {
        num = get_int(msg);
    } while (num < 0);

    return num;
}
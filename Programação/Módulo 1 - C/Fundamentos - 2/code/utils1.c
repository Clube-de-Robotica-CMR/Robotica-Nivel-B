#include <stdio.h>
#include "lib/cs50.h"

int pegar_natural(string msg)
{
    int num;
    do
    {
        num = get_int(msg);
    } while (num < 0);

    return num;
}
#include <stdio.h>
#include "lib/cs50.h"

int main() 
{
    int x = get_int("Digite x: ");

    printf("%i\n", x * 2);
}
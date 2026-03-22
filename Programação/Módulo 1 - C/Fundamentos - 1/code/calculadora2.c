#include <stdio.h>
#include "lib/cs50.h"

int main() 
{
    int x = get_int("Digite x: ");
    int y = get_int("Digite y: ");

    printf("%i\n", x + y);
}
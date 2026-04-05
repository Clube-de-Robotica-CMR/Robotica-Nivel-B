//Printando o NUL terminator

#include <stdio.h>
#include "lib/cs50.h"

int main(void)
{
    string s = "Oi!";

    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}
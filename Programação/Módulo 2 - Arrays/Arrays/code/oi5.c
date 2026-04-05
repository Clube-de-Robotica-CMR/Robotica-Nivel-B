//Tratando "OI!" e "ATE!" como arrays

#include <stdio.h>
#include "lib/cs50.h"

int main(void)
{
    string s = "Oi!";
    string t = "ATE!";

    printf("%c%c%c\n", s[0], s[1], s[2]);
    printf("%c%c%c%c\n", t[0], t[1], t[2], t[3]);
}
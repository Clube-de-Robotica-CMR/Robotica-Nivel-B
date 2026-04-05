//Convertendo minúsculas para maiúsculas usando ctype.h com condicionais desnecessárias

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "lib/cs50.h"

int main(void)
{
    string s = get_string("s: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
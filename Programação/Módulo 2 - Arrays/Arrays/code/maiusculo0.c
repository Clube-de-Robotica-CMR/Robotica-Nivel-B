//Convertendo minúsculas para maiúsculas

#include <stdio.h>
#include <string.h>
#include "lib/cs50.h"

int main(void)
{
    string s = get_string("s: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
//Convertendo minúsculas para maiúsculas usando ctype.h sem condicionais desnecessárias

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "lib/cs50.h"

int main(void)
{
    string s = get_string("s: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}
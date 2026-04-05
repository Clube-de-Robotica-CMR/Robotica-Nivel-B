// Printando "Eae, {nome}"

#include <stdio.h>
#include "lib/cs50.h"

int main(void)
{
    string nome = get_string("Nome: ");
    printf("Eae, %s\n", nome);
}

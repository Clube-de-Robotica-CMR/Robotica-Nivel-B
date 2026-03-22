#include <stdio.h>
#include "lib/cs50.h"

int main ()
{
    string nome = get_string("Digite seu nome: ");
    printf("Oi, %s\n", nome);
}
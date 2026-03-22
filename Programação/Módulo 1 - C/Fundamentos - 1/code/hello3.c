#include <stdio.h>
#include "lib/cs50.h"

int main ()
{
    const string nome_site = "Davizera.com";

    string nome = get_string("Digite seu nome: ");
    printf("Oi, %s! Seja bem vindo ao %s\n", nome, nome_site);
}
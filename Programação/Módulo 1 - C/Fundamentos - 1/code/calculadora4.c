#include <stdio.h>
#include "lib/cs50.h"

int main() 
{
    int reais = 1;
    while (true) 
    {
        char resp = get_char("Temos R$%i. Quer dobrar e passar pro proximo? ", reais);
        if (resp == 's')
        {
            reais *= 2;
        }
        else 
        {
            break;
        }
    }
    
}
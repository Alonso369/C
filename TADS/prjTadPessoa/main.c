#include <stdio.h>
#include <stdlib.h>
#include "Pessoa.h"

int main()
{
    Pessoa *p = criaPessoa("Fulano", 20);
    imprimePessoa(p);
    liberaPessoa(p);

    p = criaPessoa("Ciclano", 19);
    imprimePessoa(p);
    liberaPessoa(p);

    printf("\n");
    return 0;
}

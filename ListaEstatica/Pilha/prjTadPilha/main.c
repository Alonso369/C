#include <stdio.h>
#include <stdlib.h>
#include "itemPilha.h"

int main()
{
    Pilha *p = criaPilhaVazia();
    printf("Empilhando 5 itens: \n.");
    empilha(p, 1);
    empilha(p, 2);
    empilha(p, 3);
    empilha(p, 4);
    empilha(p, 5);
    imprimePilha(p);
    printf("Tentando empilhar mais um item: \n.");
    empilha(p, 6);

    imprimePilha(p);
    printf("\nDesempilhando: \n");
    for(int i = 0; i <= 4; i++)
    {
        desempilha(p);
    }

    imprimePilha(p);


    return 0;
}

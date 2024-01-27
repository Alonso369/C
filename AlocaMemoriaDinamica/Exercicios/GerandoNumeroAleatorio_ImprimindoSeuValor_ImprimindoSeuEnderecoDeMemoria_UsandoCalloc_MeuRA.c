#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Crie um vetor do tipo inteiro com 50 itens valorizados aleatoriamente usando a função
//malloc. Percorra o vetor imprimindo endereço e valor de cada item.

int main()
{
    int *vet;

    vet = (int *) calloc (50, sizeof(int));

    srand(time(NULL));

    printf("Dados Gerados.\n");
    for(int i = 0; i < 50; i++){
        vet[i] = 2416875;
    }

    for(int i = 0; i < 50; i++){
        printf("%d\t %ld", vet[i], &vet[i]);
        printf("\n");

    }

    return 0;
}

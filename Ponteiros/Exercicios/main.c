#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que imprime um vetor. Percorra o vetor através da aritmética de ponteiros

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};
    int *soma = vet;

    //Exemplo de incremento de poteiro
    for(int i = 0; i < 5; i++){
        soma++;//Movendo o ponteiro para o proximo indice
        printf("Vetor esta na posicao: %d\n", soma);//Imprimindo o proximo indíce
        printf("Valor do vetor: %d\n", vet[i]);
        printf("\n");
    }

    //Fazendo adição de ponteiros, ele pula as posições do vetor, conforme for solicitado.
    printf("\n");
    for(int i = 0; i < 5; i++){
        soma = soma + 2;//Movendo o ponteiro para o proximo indice
        printf("Vetor esta na posicao: %d\n", soma);//Imprimindo o proximo indíce
        printf("Valor do vetor: %d\n", vet[i]);
        printf("\n");
    }

    //
    int *pont1 = &vet[1];
    int *pont2 = &vet[5];

    int diff = pont2 - pont1;

    printf("Valor: %d\n", diff);

    return 0;
}

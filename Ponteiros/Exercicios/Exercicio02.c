#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que imprime um vetor. Percorra o vetor através da aritmética de ponteiros

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};
    int *soma = vet;

    //Exemplo de incremento de poteiro, você pode usar o decremente e incremento para
    //fazer o ponteiro se mover para o próximo elementos do Array
    for(int i = 0; i < 5; i++){
        soma++;//Movendo o ponteiro para o proximo indice
        printf("Vetor esta na posicao: %d\n", soma);//Imprimindo o proximo indíce
        printf("Valor do vetor: %d\n", vet[i]);
        printf("\n");
    }

    //Você pode somar ou subtrair um valor de um ponteiro para mover-se por uma quantidade
    //especifica da quantidade de elementos do arrays
    printf("\n");
    for(int i = 0; i < 5; i++){
        soma = soma + 2;//Movendo o ponteiro para o proximo indice
        printf("Vetor esta na posicao: %d\n", soma);//Imprimindo o proximo indíce
        printf("Valor do vetor: %d\n", vet[i]);
        printf("\n");
    }

    //Subtrair um ponteiro de outro ponteiro resulta na diferença entre os Ínidices
    //dos elementos aos quais eles apontam
    //Bom para calcular a distancia netre dos arrays
    int *pont1 = &vet[1];
    int *pont2 = &vet[5];

    int diff = pont2 - pont1;

    printf("Valor: %d\n", diff);

    return 0;
}

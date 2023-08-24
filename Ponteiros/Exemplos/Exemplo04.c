#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int vet[]={20, 30, 40, 50, 60};//short int ocupa 2 bytes
    short int *p = vet;//Como o nome eh um ponteiro, nao precisa &

    printf("p aponta para o endereco: %ld\n", p);//Endereco vet[0]
    printf("O valor guardado no endereco acima eh: %d\n\n", *p);//Valor de vet[0]

    printf("Avanca duas casas nas posi��es do vetor, usando a matem�tica de ponteiros.\n");
    p = p + 2; //Avan�a duas casas nas posi��es do vetor, usando arim�tica de ponteiro
    printf("p aponta para o endereco: %ld\n", p);//Endereco vet[2]
    printf("O valor guardado no endereco acima eh: %d\n\n", *p);//Valor de vet[2]

    printf("Volta uma casa na posi��o do vetor, usando a matem�tica de ponteiros.\n");
    p = p - 1; //Recua uma casa nas posi��es do vetor
    printf("p aponta para o endereco: %ld\n", p);//Endereco vet[1]
    printf("O valor guardado no endereco acima eh: %d\n", *p);//Valor de vet[1]

    return 0;
}

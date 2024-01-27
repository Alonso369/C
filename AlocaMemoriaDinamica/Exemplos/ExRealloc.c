#include <stdio.h>
#include <stdlib.h>

//Exemplo de uso da fun��o realloc para realocar din�micamente
//quantidade de mem�ria alocada anteriormente usando o malloc
//ou calloc de acordo com o n�mero de elementos desejado

int main()
{
    int *p;
    int num = 5;

    //o ponteiro de inteiro recebe o retorno da fun��o malloc
    //que traz o endere�o do primeiro endere�o de mem�ria dos numeros alocados
    p = (int *) malloc(num * sizeof(int)); // p � um vetor de tamanho num
    if(p){
        int i;
        for(i = 0; i < num; i++){
            p[i] = i + 1;
        }
        printf("\nDados do vetor: ");
        for(i = 0; i < num; i++){
            printf("\nPosicao %d: %d", i, p[i]);
        }
        printf("\n- Diminui o tamanho do vetor");
        num = 3;
        p = realloc(p, num * sizeof(int));
        printf("\nDados do vetor: ");
        for(i = 0; i < num; i++){
            printf("\nPosicao %d: %d", i, p[i]);
        }
        printf("\n- Aumenta o tamanho do vetor");
        num = 10;
        p = realloc(p, num * sizeof(int));
        printf("\nDados do vetor: ");
        for(i = 0; i < num; i++){
            printf("\nPosicao %d: %d", i, p[i]);
        }
    }

    free(p);


    return 0;
}

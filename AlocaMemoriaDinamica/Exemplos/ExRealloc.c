#include <stdio.h>
#include <stdlib.h>

//Exemplo de uso da função realloc para realocar dinâmicamente
//quantidade de memória alocada anteriormente usando o malloc
//ou calloc de acordo com o número de elementos desejado

int main()
{
    int *p;
    int num = 5;

    //o ponteiro de inteiro recebe o retorno da função malloc
    //que traz o endereço do primeiro endereço de memória dos numeros alocados
    p = (int *) malloc(num * sizeof(int)); // p é um vetor de tamanho num
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

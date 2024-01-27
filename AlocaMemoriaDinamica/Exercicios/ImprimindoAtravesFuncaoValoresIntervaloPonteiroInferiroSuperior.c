#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Crie uma função que recebe o limite inferir e o limite superior de um intervalo
//e tem como objeto retornar um vetor com todos os inteiros pertencentes ao intervalo

int *retornaPonteiro(int limiteInferior, int limiteSuperior){

    int num = limiteSuperior - limiteInferior;
    int *limite = (int *) malloc(num * sizeof(int));
    int j = 0;
    for(int i = limiteInferior; i < limiteSuperior; i++){
        limite[j] = i;
        j++;
    }
    return limite;
}

int main()
{
    int limiteInferior, limiteSuperior;

    printf("Informe o limite inferiro: ");
    scanf("%d", &limiteInferior);

    printf("Informe o limite superior: ");
    scanf("%d", &limiteSuperior);

    int *limite = retornaPonteiro(limiteInferior, limiteSuperior);

    int num = limiteSuperior - limiteInferior;
    printf("\nDados Gerados: \n");

    for(int i = 0; i < num; i++){
        printf("Numero: %d, posicao: %d\n", limite[i], i);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Crie um programa que armazena um número dinâmico de notas escolares
//e retorna a média simples das notas, maior e menor nota

int main()
{
    int numNotas = 1, i = 0;
    float media, soma, *notas;
    int decisao;

    notas = (float *) malloc(1 * sizeof(float));

    do{
        printf("Informe a nota da prova: ");
        scanf("%f", &notas[i]);

        printf("Deseja informar mais uma nota?\n 1 - pra sim\n:  ");
        scanf("%d", &decisao);

        if(decisao == 1){
            numNotas++;
            notas = realloc(notas,numNotas * sizeof(float));
            i++;
        }
    }while(decisao == 1);

    int aux = 0;
    float maiorNota = 0.0;
    float menorNota = 11.0;
    for(int i = 0; i < numNotas; i++){
        soma += notas[i];
        aux++;
        if(notas[i] > maiorNota){
            maiorNota = notas[i];
        }
        if(notas[i] < menorNota){
            menorNota = notas[i];
        }
    }

    media =  soma / (float) aux;

    printf("A media das notas esolares eh: %.2f\n", media);
    printf("A maior nota eh: %.2f\n", maiorNota);
    printf("A menor nota eh: %.2f\n", menorNota);


    return 0;
}

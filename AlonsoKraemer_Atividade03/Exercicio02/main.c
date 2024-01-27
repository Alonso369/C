#include <stdio.h>
#include <stdlib.h>


//Solução de forma RECURSIVA
int palindromoRecursivo(int v[], int a, int b)
{
    if (a >= b)
    {
        return 1;
    }
    if (v[a] == v[b])
    {
        return palindromoRecursivo(v, a+1, b-1);
    }
    return 0;
}

//Solução de forma ITERATIVA
int palindromoIterativo(int v[5], int a, int b)
{
    int aux = 0;
    for(int i = a; i <= b; i++)
    {
        if(v[a] == v[b]){
            aux++;
        }
    }
    if(aux == 5){
        return 1;
    }
    return 0;
}


int main()
{
    //Declaração de variáveis
    int v[5]= {0,1,2,1,0};
    int v2[5] = {0,2,3,5,4};
    int a;
    int b;

    a = 0;
    b = 4;
    int palindromo2 = palindromoRecursivo(v2, a, b);
    int palindromo = palindromoIterativo(v2, a, b);

    //Diz se um vetor é palindromo modelo RECURSIVO
    if(palindromo == 1){
        printf("\nAlgortmo iterativo");
        printf("\nVetor eh um palindromo\n");
    }
    else{
        printf("\nAlgortmo iterativo");
        printf("\nNAO eh palindromo\n");
    }

    if(palindromo2 == 1){
        printf("\nAlgoritmo recursivo");
        printf("\nVetor eh um palindromo\n");
    }
    else{
        printf("\nAlgoritmo recursivo");
        printf("\nNAO eh palindromo\n");
    }

    return 0;
}

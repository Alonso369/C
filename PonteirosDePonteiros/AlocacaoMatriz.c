#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exemplo de Alocação Dinâmica de Mómeria de Matriz de inteiros

int **alocaMatriz(int nLinhas, int nColunas)
{
    int **m, l, c;

    //1)Alocamos um vetor com um ponteiro para cada linha
    m = (int *) malloc(nLinhas * sizeof(int));
    //2)Fazemos cada ponteiros aponta para um linha
    for(l = 0; l < nLinhas; l++)
    {
        m[l]= calloc(nColunas, sizeof(int));//matriz de 0s
    }
    return m;
}

void imprime(int **m, int nLinhas, int nColunas)
{
    for(int l = 0; l < nLinhas; l++)
    {
        for(int c = 0; c < nColunas; c++)
        {
            printf("%ld\t", &m[l][c]);
        }
        printf("\n");
    }
}
void liberaMatriz(int **m, int nLinhas)
{
    for(int i = 0; i < nLinhas; i++)
    {
        free(m[i]);
    }
    free(m);
}


int main()
{
    int nLinhas = 4;
    int nColunas = 5;
    int **m = alocaMatriz(nLinhas, nColunas);
    imprime(m, nLinhas, nColunas);//Imprime sem ter colocado valores
    liberaMatriz(m, nLinhas);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//Solu��o iterativa para imprimir um vetor ao contr�rio
void imprime_iterativo(int v[], int n)
{
    //vetor com n elementos, posi��o de 0 a n -1
    for(int i = n-1; i >= 0; i--)
    {
        printf("%d\t", v[i]);
    }
}

//Solu��o recursiva para imprimri um vetor ao contr�rio
void imprime_recursivo(int v[], int n)
{
    if(n == 0)//menor inst�ncia, caso base
    {
        return;
    }
    else//chama fun��o novamente para imprimir posi��o n - 1
    {
        //printf_s("%d\t", v[n-1]);
        imprime_recursivo(v, n-1);
        printf("%d\t", v[n-1]);
    }
}

int main()
{
    int n;
    printf("Informe o numero de elementos desejados para o vetor: ");
    scanf("%d", &n);
    int *vet = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
    {
        vet[i] = i;
    }

    printf("\nImpresao de vetor ao contr�rio usando o algoritmo iterativo.");
    imprime_iterativo(vet, n);
    printf("\nImpresao de vetor ao contr�rio usando o algoritmo recursivo.");
    imprime_recursivo(vet, n);
    free(vet);

    return 0;

}

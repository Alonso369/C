#include <stdio.h>
#include <stdlib.h>

//Solução iterativa para imprimir um vetor ao contrário
void imprime_iterativo(int v[], int n)
{
    //vetor com n elementos, posição de 0 a n -1
    for(int i = n-1; i >= 0; i--)
    {
        printf("%d\t", v[i]);
    }
}

//Solução recursiva para imprimri um vetor ao contrário
void imprime_recursivo(int v[], int n)
{
    if(n == 0)//menor instância, caso base
    {
        return;
    }
    else//chama função novamente para imprimir posição n - 1
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

    printf("\nImpresao de vetor ao contrário usando o algoritmo iterativo.");
    imprime_iterativo(vet, n);
    printf("\nImpresao de vetor ao contrário usando o algoritmo recursivo.");
    imprime_recursivo(vet, n);
    free(vet);

    return 0;

}

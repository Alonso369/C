#include <stdio.h>
#include <stdlib.h>

//Solução iterativa do cálculo de fatorial de um número
int fatorial_iterativo(int n)
{
    int fat = n;
    for(int i = n -1; i > 0; i--)
    {
        fat *= i;
    }
    return fat;
}

//Solução recursiva do cálculo de fatorial
int fatorial_recursivo(int n)
{
    if(n == 1)//menor instância, já retorna o resultado;
    {
        return 1;
    }
    else //chama função novamente para clacular n*(n-1)
    {
        return n * fatorial_recursivo(n - 1);//chamada recursiva
    }
}

int main()
{
    int n;
    printf("Informe o numero para calcular o fatorial: ");
    scanf("%d", &n);

    printf("\nFatorial de %d usando algoritmo iterativo: %d", n, fatorial_iterativo(n));
    printf("\nFatorial de %d usando algoritmo recursivo: %d", n, fatorial_recursivo(n));
    return 0;
}

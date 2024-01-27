#include <stdio.h>
#include <stdlib.h>

//Solu��o iterativa do c�lculo de fatorial de um n�mero
int fatorial_iterativo(int n)
{
    int fat = n;
    for(int i = n -1; i > 0; i--)
    {
        fat *= i;
    }
    return fat;
}

//Solu��o recursiva do c�lculo de fatorial
int fatorial_recursivo(int n)
{
    if(n == 1)//menor inst�ncia, j� retorna o resultado;
    {
        return 1;
    }
    else //chama fun��o novamente para clacular n*(n-1)
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

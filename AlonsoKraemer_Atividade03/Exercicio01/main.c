#include <stdio.h>
#include <stdlib.h>

//Solu��o iterativa para o c�clulo do digitos
int contagemDigito_iterativo(int n)
{
    int fat = 1;
    while (n / 10 > 0)
    {
        n = n / 10;
        fat++;
    }
    return fat;
}

//Solu��o recursiva pra a solu��o de contar os dig�tos
int contagemDigito_recursivo(int n)
{
    if(n < 10)
    {
        return 1;
    }
    else
    {
        return 1 + contagemDigito_recursivo(n / 10);
    }
}

int main()
{
    int num, numContado, numContado2;
    printf("Informe um numero: ");
    scanf("%d", &num);

    numContado = contagemDigito_recursivo(num);
    numContado2 = contagemDigito_recursivo(num);

    printf("\nContagem da funcao ITERATIVA\n");
    printf("Quantidade de digitos no numero: %d\n", numContado);

    printf("\nContagem da funcao RECURSIVA");
    printf("\nQuantidade de digitos no numero: %d\n", numContado2);

    return 0;
}

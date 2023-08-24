#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que some dois valores usando ponteiros

int main()
{
    int valor1;
    int valor2;
    int *ponteiro1 = &valor1;
    int *ponteiro2 = &valor2;
    int soma  = 0;

   printf("Informe o primeiro valor: ");
   scanf("%d", &valor1);
   printf("Informe o segundo valor: ");
   scanf("%d", &valor2);

   soma = *ponteiro1 + *ponteiro2;

    printf("o valor %d + %d eh: %d.", *ponteiro1, *ponteiro2, soma);

    //para mostrar o endereçamento de memória é só colcoar o & comercial na frente
    //printf("o valor %d + %d eh: %d.", &ponteiro1, &ponteiro2, soma);

    return 0;
}

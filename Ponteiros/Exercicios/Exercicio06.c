#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Crie um programa que copie o valor de uma string de origem para uma string de destino

void copiaValor(char *origem, char *destino) {

    strcpy(destino, origem);//Copiando a string origem na string destino

    printf("O conteudo da string de origem eh: %s.\n", origem);
    printf("O conteudo da string de destino eh: %s.\n", destino);
}

int main()
{
    //char vet[]="Tal Joao de Santo Cristo";
    char origem[30];
    char destino[30];
    printf("Informe um frase: ");
    gets(origem);

    copiaValor(origem, destino);

    return 0;
}

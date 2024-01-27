#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Crie um programa que copie o valor de uma string de origem para uma string de destino

void copiaValor(char *origem, char *destino) {
    int tam = strcpy(origem);
    int aux = 0;

    for(int i = 0; i < tam; i++){

    }
    printf("O tamanho da strig eh: %s.", origem);
    printf("O tamanho da strig eh: %s.", destino);
}

int main()
{
    //char vet[]="Tal Joao de Santo Cristo";
    char oriegem[30];
    char destino[30];
    printf("Informe um frase: ");
    gets(origem);

    copiaValor(origem, destino);

    return 0;
}

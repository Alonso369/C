#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Escreva uma fun��o que imprime uma string. Percorre a string atrav�s da matem�tica de ponteiros

void percorreStr(char vet[]/*poderia passar dessa forma tamb�m *vet*/) {

    int tam = strlen(vet);

    for(int i = 0; i < tam; i++){
        printf("%c", *(vet+i));
    }
}

int main()
{
    //char vet[]="Tal Joao de Santo Cristo";
    char vet[30];
    printf("Informe um frase: ");
    gets(vet);

    percorreStr(vet);

    return 0;
}

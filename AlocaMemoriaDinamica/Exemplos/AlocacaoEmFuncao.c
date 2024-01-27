#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exemplo de de aloca��o de mem�ria em fun��o

char * inverteString(char s[]){

    int i, j, tamanho;
    tamanho = strlen(s);//tamanho, quantos caracteres...
    //char sInvertida[tamanho]; //Aloca��o est�tica n�o funciona
    //� preciso usar aloca��o din�mica
    char *sInvertida = malloc(tamanho * sizeof(char));

    j = 0;
    //Percorre a string original S de tr�s pra frente
    //atribuindo a �ltima posi��o at� a primeira � nova string sInvertida
    for(i = tamanho - 1; i >= 0; i--){
        sInvertida[j] = s[i];
        j++;
    }
    sInvertida[j] = '\0';//caractere indicado fim da String
    return sInvertida;
}

int main()
{
    char *s = "SocorraMeSubInoOnibusEmMarrocos";
    char *sInvertida = inverteString(s);
    printf("%s", sInvertida);

    return 0;
}

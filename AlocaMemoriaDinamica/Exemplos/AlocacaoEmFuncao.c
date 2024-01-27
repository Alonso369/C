#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exemplo de de alocação de memória em função

char * inverteString(char s[]){

    int i, j, tamanho;
    tamanho = strlen(s);//tamanho, quantos caracteres...
    //char sInvertida[tamanho]; //Alocação estática não funciona
    //É preciso usar alocação dinâmica
    char *sInvertida = malloc(tamanho * sizeof(char));

    j = 0;
    //Percorre a string original S de trás pra frente
    //atribuindo a última posição até a primeira à nova string sInvertida
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

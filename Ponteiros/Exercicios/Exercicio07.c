#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Implemente uma função que concatena uma string "B" no final de uma string "A";

void concatenaString(char *sa, char *sb) {

    strcat(sa, " ");//Concatenação de strings
    strcat(sa, sb);

    printf("As duas strings concatenada fica: %s.\n", sa);

}

int main()
{
    //char vet[]="Tal Joao de Santo Cristo";
    char sa[30];
    char sb[30];
    printf("Informe a primeira frase: ");
    gets(sa);
    printf("Informe a segunda frase: ");
    gets(sb);

    concatenaString(sa, sb);

    return 0;
}

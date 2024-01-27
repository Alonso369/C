#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Implemente uma função que concatena uma string "B" no final de uma string "A";

int comparaString(char *sa, char *sb)
{
    char *o = sb;
    char *c;

    for(c = sa; *c != '\0'; c++)
    {
        printf("%c", *c);
        if(*c != *o){
            return 0;

        }
        o++;
    }
    return 1;
}

int main()
{
    //char vet[]="Tal Joao de Santo Cristo";
    char sa[30];
    char sb[30];
    printf("Informe a primeira frase: ");
    gets(sa);
    //scanf("%^[s\n]", sa);
    printf("Primeira: %s\n", sa);
    setbuf(stdin, NULL);
    printf("Informe a segunda frase: ");
    gets(sb);
    setbuf(stdin, NULL);
    //scanf("%^[s\n]", sb);
    printf("Segunda: %s\n", sb);
    if(comparaString(sa, sb) == 1)
    {
        printf("\nSao iguais");
    }
    else{
        printf("Nao sao iguais.");
    }

    return 0;
}

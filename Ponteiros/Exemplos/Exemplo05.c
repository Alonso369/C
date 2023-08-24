#include <stdio.h>
#include <stdlib.h>

//Retorna o restante de uma String a partir de um determinado caractere
//Passado por par�metro
//char * indica que a fun��o retorna um ponteiro de char
char *match(char c, char *s)
{
    while( c != *s && *s)//S� para se o C for igual ao conte�do do ponteiro ou a string acabar
    {
        s = s + 1; //Avan�a o pornteiro uma posi��o na me
    }
    return s;
}


int main()
{
    char str[] = "Boa Noite";
    char c = 'a';
    char *pc;

    pc = match(c, str);
    if(*pc)//Se � diferente de \0, ou seja, tema algo v�lido
    {
        printf("\n%s", pc);//imprime a string a partir do endere�o de pc
    }
    else{
        printf("\nNao encontrou.\n");
    }
    return 0;
}

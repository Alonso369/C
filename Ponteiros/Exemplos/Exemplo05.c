#include <stdio.h>
#include <stdlib.h>

//Retorna o restante de uma String a partir de um determinado caractere
//Passado por parâmetro
//char * indica que a função retorna um ponteiro de char
char *match(char c, char *s)
{
    while( c != *s && *s)//Só para se o C for igual ao conteúdo do ponteiro ou a string acabar
    {
        s = s + 1; //Avança o pornteiro uma posição na me
    }
    return s;
}


int main()
{
    char str[] = "Boa Noite";
    char c = 'a';
    char *pc;

    pc = match(c, str);
    if(*pc)//Se é diferente de \0, ou seja, tema algo válido
    {
        printf("\n%s", pc);//imprime a string a partir do endereço de pc
    }
    else{
        printf("\nNao encontrou.\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//-------------------------------
struct livro
{
    char titulo[30];
    int ano;
    char autor[20];
};
typedef struct livro Livro;
//---------------------------------

int main()
{
    Livro livros[3];
    int decisao = 0;
    char livroProcurado[20];
    int anoProcurado;
    int j = 0;
    do
    {
        printf("\nInforme o que deseja fazer:\n1 - Para cadastrar um livro. \n2 - Para buscar livros pelo título. \n3 - Para buscar livros pelo ano. \n0 - Para sair.\n:");
        scanf("%d", &decisao);
        setbuf(stdin, NULL);

        switch(decisao)
        {

        case 1:
            printf("\n");

                printf("Informe o titulo do livro: ");
                gets(livros[j].titulo);
                setbuf(stdin, NULL);
                printf("Informe o ano do livro: ");
                scanf("%d", &livros[j].ano);
                setbuf(stdin, NULL);
                printf("Informe o autor do livro: ");
                gets(livros[j].autor);
                setbuf(stdin, NULL);
                j++;

            break;

        case 2:


            printf("\nInforme o nome do livro que deseja: ");
            gets(livroProcurado);
            setbuf(stdin, NULL);
            for(int i = 0; i < 3; i++)
            {
                if(strcmp(livroProcurado, livros[i].titulo) == 0)
                {
                    printf("\nTitulo: %s\nAutor: %s\nAno de publicacao: %d\n", livros[i].titulo, livros[i].autor, livros[i].ano);
                }
            }
            break;
        case 3:
            printf("\nDigite o ano do livro: ");
            scanf("%d", &anoProcurado);
            setbuf(stdin, NULL);

            for(int i = 0; i < 3; i++)
            {
                if((int) anoProcurado == (int) livros[i].ano)
                {
                    printf("\nTitulo: %s\nAutor: %s\nAno de publicacao: %d\n", livros[i].titulo, livros[i].autor, livros[i].ano);
                }
            }
        }

    }
    while(decisao != 0);



    return 0;
}

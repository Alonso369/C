#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//-------------------------------
struct filme
{
    char titulo[30];
    char diretor[20];
    char genero[15];
    int duracao;
    int estrelas;
};
typedef struct filme Filme;
//---------------------------------

//-----------FUNÇÕES---------------
//Buscar o filme mais longo
int retorno(Filme vet[]){
    int aux = 0;
    int indice = 0;
    for(int i = 0; i < 2; i++){
        if(vet[i].duracao > aux){
            aux = vet[i].duracao;
            indice = i;
        }
    }
    return indice;
}

//buscar os filmes de com cinco estrelas
void cincoEstrelas(Filme vet[]){
    for(int i = 0; i < 2; i++){
            if(vet[i].estrelas == 5){
                printf("\nFilmes com 5 estrelas: %s", vet[i].titulo);
                setbuf(stdin,NULL);
            }
    }
}

//buscar os filmes de com uma estrelas
void umaEstrela(Filme vet[]){
    for(int i = 0; i < 2; i++){
            if(vet[i].estrelas == 1){
                printf("\nFilmes com uma estrelas: %s", vet[i].titulo);
                setbuf(stdin,NULL);
            }
    }
}
//buscar diretor
void buscarDiretor(Filme vet[]){

    char dir[15];

    printf("\nInforme um diretor: ");
    gets(dir);
    setbuf(stdin,NULL);

    for(int i = 0; i < 2; i++){
        if(strcmp(vet[i].diretor, dir) == 0){
            printf("Filme: %s.\nDiretor: %s.\n", vet[i].titulo, vet[i].diretor);
            setbuf(stdin,NULL);
        }
    }
}
//buscar filme por Genero
void buscarGenero(Filme vet[]){

    char gen[15];

    printf("\nInforme o genero: ");
    gets(gen);

    for(int i = 0; i < 2; i++){
        if(strcmp(vet[i].genero, gen)== 0){
            printf("Filme: %s.\nDiretor: %s.\n", vet[i].titulo, vet[i].genero);
            setbuf(stdin,NULL);
        }
    }
}

int main()
{
    Filme filmes[2];


    for(int i = 0; i < 2; i++){
        setbuf(stdin,NULL);
        printf("Informe o titulo do filme: ");
        gets(filmes[i].titulo);
        setbuf(stdin,NULL);
        printf("Informe o genero do filme: ");
        gets(filmes[i].genero);
        setbuf(stdin,NULL);
        printf("Informe o diretor do filme: ");
        gets(filmes[i].diretor);
        setbuf(stdin,NULL);
        printf("Informe a duracao do filme em minutos: ");
        scanf("%d", &filmes[i].duracao);
        setbuf(stdin,NULL);
        printf("Quantas estrelas o filme merece 1 - 2 - 3 - 4 ou 5: ");
        scanf("%d", &filmes[i].estrelas);
    }


    int  indice = retorno(filmes);


    //Saída de Dados
    printf("Filme com maior duracao: %s\n", filmes[indice].titulo);


    cincoEstrelas(filmes);
    setbuf(stdin,NULL);

    umaEstrela(filmes);
    setbuf(stdin,NULL);

    buscarDiretor(filmes);
    setbuf(stdin,NULL);

    buscarGenero(filmes);
    setbuf(stdin,NULL);

    return 0;
}

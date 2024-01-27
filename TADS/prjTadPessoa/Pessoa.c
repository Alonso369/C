#include <stdio.h>
#include <stdlib.h>
#include "Pessoa.h"

struct pessoa
{
    char nome[30];
    int idade;
};

Pessoa * criaPessoa(char nome[], int idade)
{
    Pessoa *p = malloc(sizeof(Pessoa));
    strcpy(p->nome, nome);
    p->idade = idade;
    return p;
}

void liberaPessoa(Pessoa *p)
{
    free(p);
}

void imprimePessoa(Pessoa *p)
{
    printf("%s - %d\n", p->nome, p->idade);
}

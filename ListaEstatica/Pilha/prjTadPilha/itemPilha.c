#include <stdio.h>
#include <stdlib.h>
#include "itemPilha.h"

struct item{
    int chave;
    //Demais campos
};

struct pilha{
    Item itens[MAXTAM];
    int topo;
};

Pilha * criaPilhaVazia(){
    Pilha *p = malloc(sizeof(Pilha));

    p->topo = -1;
    return p;
}

//retorna 1 se a pilha está cheia ou 0 se não está
int verificaPilhaCheia(Pilha *p)
{
    return (p->topo == MAXTAM -1);
}

//adiciona um elemento no topo da pilha
void empilha(Pilha *p, int chave)
{
    if(verificaPilhaCheia(p))
    {
        printf("Erro: a pilha esta cheia.\n");
        return;
    }
    Item novoItem;
    novoItem.chave = chave;
    //Demais campos que existem na struct item

    p->topo++;
    p->itens[p->topo] = novoItem;
}

void imprimePilha(Pilha *p)
{
    for(int i = 0; i <= p->topo; i++)
    {
        printf("Chave: %d\n", p->itens[i].chave);
    }
}

//remove um item do topo da pilha
void desempilha(Pilha *p)
{
    if(verificaPilhaVazia(p))
    {
        printf("Erro: a pilha esta vazia.");
    }
    p->topo--;
}

//retorna 1 e a pilha está vazia ou 0 se bão está
int verificaPilhaVazia(Pilha *p)
{
    return p->topo == -1;
}

//Libera espaço alocado
void liberaPilha(Pilha *p)
{
    free(p);
}




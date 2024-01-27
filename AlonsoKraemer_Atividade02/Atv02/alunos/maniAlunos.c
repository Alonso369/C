#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "maniAlunos.h"

struct reservas
{
    int idMatricula;
    char nome[100];
    char descEvento[200];
    int cargaHorariaMin;
};

struct pilha
{
    Reservas reservas[MAXTAM];
    int topo;
};

//Cria a pilha sozinha
Pilha *criaPilhaVazia()
{
    Pilha *p = malloc(sizeof(Pilha));

    p->topo = -1;
    return p;
}

//retorna 1 se a pilha está cheia ou 0 se não está
int verificaPilhaCheia(Pilha *p)
{
    return (p->topo == MAXTAM -1);
}

//inserir um participante, remover e imprimir todos os participantes
//adiciona um elemento no topo da pilha
void empilha(Pilha *p, int idMatricula, char nome[100], char descEvento[200], int cargaHorariaMin)
{
    if(verificaPilhaCheia(p))
    {
        printf("Erro: a pilha esta cheia.\n");
        return;
    }
    Reservas novaReserva;
    novaReserva.idMatricula = idMatricula;
    strcpy(novaReserva.nome, nome);
    strcpy(novaReserva.descEvento, descEvento);
    novaReserva.cargaHorariaMin = cargaHorariaMin;

    p->topo++;
    p->reservas[p->topo] = novaReserva;
}

void imprimePilha(Pilha *p)
{
    for(int i = 0; i <= p->topo; i++)
    {
        printf("\nMatricula: %d", p->reservas[i].idMatricula);
        printf("\nNome: %s", p->reservas[i].nome);
        printf("\nDescricao do evento: %s", p->reservas[i].descEvento);
        printf("\nCarga horaria total do evento: %d\n", p->reservas[i].cargaHorariaMin);
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


int prtTtlEventos(Pilha *p, int idMatricula)
{
    int cargaHorariaTotal = 0;
    for(int i = 0; i <= p->topo; i++)
    {
        if(p->reservas[i].idMatricula == idMatricula)
        {
            cargaHorariaTotal = cargaHorariaTotal + p->reservas[i].cargaHorariaMin;
        }
    }
    return cargaHorariaTotal;
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



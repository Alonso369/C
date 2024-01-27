#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rest.h"

struct produto
{
    int id;
    char nmProduto[50];
    int unidades;
    float custo;
    int notaFiscal;
};

struct lista
{
    Produto prod;
    Lista *prox;
};

struct hashh
{
    int quantidade;
    Lista **listas;
};

//Cria tabela Hash
Hash *criaTabela()
{
    int i;
    Hash *h = malloc(sizeof(Hash));
    h->quantidade = 0;
    h->listas = malloc(TABLESIZE * sizeof(Lista*));
    for(i = 0; i < TABLESIZE; i++)
        h->listas[i] = NULL;
    return h;
}

void liberaTabela(Hash *h)
{
    int i;
    Lista *aux = *removeP;
    for( i = 0; i < TABLESIZE; i++)
    {
        aux = h->listas[i];
        //percorrendo a lista para liberar cada célula
        while(aux != NULL)
        {
            aux = removeP;
            aux = aux->prox;
            free(removeP);
        }
    }
    free(h->listas);
    free(h);
}

//Verifica tabela vazia
int verificaTabelaVazia(Hash *h)
{
    return h->quantidade == 0;
}

//Hashing Divisor
int hashingDivisor(int chave)
{
    return chave % TABLESIZE;
}

//Imprime tabela
void imprimeTabela(Hash *h)
{
    int i;
    for(i = 0; i < TABLESIZE; i++)
    {
        if(h->listas[i] != NULL)
        {
            printf("\nPos: %d", i);
            Lista *aux = h->listas[i];
            while( aux != NULL)
            {
                printf("\n - {ID: %d\t", aux->prod.id);
                printf("Produto: %s\t ", aux->prod.nmProduto);
                printf("Unidades: %d\t", aux->prod.unidades);
                printf("Custo: %.2f\t", aux->prod.custo);
                printf("Numero da Nota Fiscal: %d} - \t\n", aux->prod.notaFiscal);
                aux = aux->prox;
            }
            printf("\n");
        }
    }
}

void atualizaCampo(Hash *h, int id, char nmProduto[50], int unidades, float custo, int notaFiscal)
{
    Produto *prod = busca(h, id);
    strcpy(prod->nmProduto, nmProduto);
    prod->unidades = unidades;
    prod->custo = custo;
    prod->notaFiscal = notaFiscal;
}

//Tratamento de colisões
void insere(Hash *h, int id, char nmProduto[50], int unidades, float custo, int notaFiscal)
{
    int posicao = hashingDivisor(id);
    Produto prod;
    prod.id = id;
    strcpy(prod.nmProduto, nmProduto);
    prod.unidades = unidades;
    prod.custo = custo;
    prod.notaFiscal = notaFiscal;
    Lista *aux = malloc(sizeof(Lista));
    aux->prod = prod;

    aux->prox = h->listas[posicao];//aux->prox recebe tudo que já tinha na lista (inserção do começo)
    h->listas[posicao] = aux; //o ponteiro que indica a primeira célula da lista recebe aux
    h->quantidade++;//continuamos com o campo quantidade para saber com facilidade se a tabela está vazia
}

Produto *busca(Hash *h, int id)
{
    int posicao = hashingDivisor(id);
    if(h->listas[posicao] == NULL)
    {
        return NULL;
    }
    Lista *aux = h->listas[posicao];//percorre até achar a chave buscada e retornar o item correspondente
    while(aux != NULL)
    {
        if(aux->prod.id == id)
            return &aux->prod;
        aux = aux->prox;
    }
    return NULL;
}

//Remove o tratamento
void removeP(Hash *h, int id)
{

    int posicao = hashingDivisor(id);
    if(h->listas[posicao] == NULL)
    {
        printf("ID %d nao encontrado.\n", id);
        return;
    }
    Lista *aux = h->listas[posicao];//inicio da lista
    if(aux->prod.id == id)
    {
        h->listas[posicao] = aux->prox;
        h->quantidade--;
    }
    else //encontre a célula a ser removida
    {
        Lista *anterior;
        while(aux != NULL && aux->prod.id != id)
        {
            anterior = aux;
            aux = aux->prox;
        }
        if(aux == NULL)
            printf("Chave %d nao encontrada.\n", id);
        else  // remove do meio ou final
        {
            h->quantidade--;
        }
    }
    free(aux);
}



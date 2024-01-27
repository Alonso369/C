#include <stdio.h>
#include <stdlib.h>
#include "itemLista.h"

struct item
{
    int chave;
    //demais campos necessários
};

struct lista
{
    Item itens[MAXTAM];//Vetor de struct Item com tamanho MAXTAM
    int ultimo;//MAXTAM é uma constante declarada em itemLista.h
};

void novaLista(Lista *lst, Lista *copia, Lista *nova)
{
    for(int i = 0; i <= lst->ultimo; i++)
    {
        for(int j = 0; j <= copia->ultimo; j++)
        {
            if(lst->itens[i].chave == copia->itens[j].chave)
            {
                adicionaItemFimLista(nova, copia->itens[i].chave);
                break;
            }
        }
    }
}

void novaUniao(Lista *lst, Lista *copia, Lista *uniao)
{
    copiaLista(lst, uniao);
    copiaLista(copia, uniao);
}

void copiaLista(Lista *lst, Lista *copia)
{
    for(int i = 0; i <= lst->ultimo; i++)
    {
        adicionaItemFimLista(copia, lst->itens[i].chave);
    }
}

Lista *criaListaVazia()
{
    Lista *lst = malloc(sizeof(Lista));
    lst->ultimo = -1;
    return lst;
}

//retorna 1 se a lista está cheia ou 0 se não
int verificaListaCheia(Lista *lst)
{
    //verifica se lista ja´tem o número máximo de intens inseridos
    return (lst->ultimo == (MAXTAM - 1));
}

//adiciona um elementos no fim da lista
void adicionaMeioLista(Lista *lst, int chave, int posicao)
{
    if(verificaListaCheia(lst))
    {
        printf("Erro: a lista esta cheia.\n");
        return;
    }
    for(int i = lst->ultimo; i >= posicao; i--)//I começa da última posição
    {
        lst->itens[i+1] = lst->itens[i];//e aqui ele vai cada vez para uma posição ao lado
    }
    //imprimeLista(lst);
    //até chegar na variávl "posicao" que veio por parâmetro
    Item novoItem;
    novoItem.chave = chave;
    lst->ultimo++;
    lst->itens[posicao] = novoItem;
}

void insereOrdenado(Lista *lst, int chave)
{
    if(verificaListaCheia(lst))
    {
        printf("Erro: a lista esta cheia.\n");
        return;
    }
    if (verificaListaVazia(lst))
    {
        adicionaItemFimLista(lst, chave);
    }
    else
    {
        for(int i = 0; i <= lst->ultimo; i++)
        {
            if(lst->itens[i].chave > chave)
            {
                adicionaMeioLista(lst, chave, i);
                return;
            }
        }
        adicionaItemFimLista(lst, chave);
    }
}

//adiciona um elemento no fim da lista
void adicionaItemFimLista(Lista *lst, int chave)
{
    if(verificaListaCheia(lst))
    {
        printf("Erro: a lista esta cheia.\n");
        return;
    }
    Item novoItem;
    for(int i = 0; i <= lst->ultimo; i++){
        if(lst->itens[i].chave == chave)
        {
            //printf("Esse item já existe. Nao é possivel inserir um elemento repetido.\n");
            return 0;
        }
    }
    novoItem.chave = chave;
    lst->ultimo++;
    lst->itens[lst->ultimo] = novoItem;
}

void imprimeLista(Lista *lst)
{
    for(int i = 0; i < (lst->ultimo + 1); i++)
    {
        printf("Chave: %d\n", lst->itens[i].chave);
    }
}

//retorna o índice do item com a chave buscando ou -1 se não encontro
int buscaItemProvaChave(Lista *lst, int chave)
{
    int i = 0;
    while((i <= lst->ultimo) && (lst->itens[i].chave != chave))
    {
        i++;
    }
    if(i <= lst->ultimo)
    {
        return i;
    }
    else
    {
        return -1;//percorreu todos os elementos e não achou
    }
}

void removeItem(Lista *lst, int chave)
{
    int posicao;
    posicao = buscaItemProvaChave(lst, chave);
    if(posicao == -1)
    {
        printf("Erro: a lista esta vazia ou o item nao existe.");
        return;
    }
    for(int i = posicao; i < (lst->ultimo + 1); i++)
    {
        lst->itens[i] = lst->itens[i+1];//sobreescreve a posicao atual
    }                                   //com o vizinho da direita
    lst->ultimo--;
}


int verificaListaVazia(Lista *lst)
{
    return (lst->ultimo == -1);
}

void liberaLista(Lista *lst)
{
    free(lst);
}





#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BucketList.h"

struct itens{
    int codIdentificacao;
    char descricao[100];
    char categoria[100];
    int ano;
    char situacao[50];
};

struct lista{
    Item itens[MAXTAM];
    int ultimo;
};

Lista *criaListaVazia()
{
    Lista *lst = malloc(sizeof(Lista));
    lst->ultimo = -1;
    return lst;
}

//retorna 1 se a lista est� cheia ou 0 se n�o
int verificaListaCheia(Lista *lst)
{
    //verifica se lista ja�tem o n�mero m�ximo de intens inseridos
    return (lst->ultimo == (MAXTAM - 1));
}

int verificaListaVazia(Lista *lst)
{
    return (lst->ultimo == -1);
}

//adiciona um elemento no fim da lista
void adicionaItemFimLista(Lista *lst, int codIdentificacao, int ano, char descricao[100], char categoria[100], char situacao[50])
{
    if(verificaListaCheia(lst))
    {
        printf("Erro: a lista esta cheia.\n");
        return;
    }
    Item novoItem;
    for(int i = 0; i <= lst->ultimo; i++){
        if(lst->itens[i].codIdentificacao == codIdentificacao)
        {
            printf("Esse item j� existe. Nao � possivel inserir um elemento repetido.\n");
            return 0;
        }
    }

    novoItem.codIdentificacao = codIdentificacao;
    strcpy(novoItem.descricao, descricao);
    strcpy(novoItem.categoria, categoria);
    strcpy(novoItem.situacao, situacao);
    novoItem.ano = ano;

    lst->ultimo++;
    lst->itens[lst->ultimo] = novoItem;
}

//Imprime Lista
void imprimeLista(Lista *lst)
{
    for(int i = 0; i < (lst->ultimo + 1); i++)
    {
        printf("\nC�digo de Identificacao: %d\n", lst->itens[i].codIdentificacao);
        printf("Descricao: %s\n", lst->itens[i].descricao);
        printf("Categoria: %s\n", lst->itens[i].categoria);
        printf("Situacao: %s\n", lst->itens[i].situacao);
        printf("Ano: %d\n", lst->itens[i].ano);
    }
}

//Lista de Copia tarefas realizadas
void copiaRealizada(Lista *lst, Lista *atvRealizadas)
{
    for(int i = 0; i <= lst->ultimo; i++)
    {
        if(strcmp(lst->itens[i].situacao, "Realizada") == 0){
            adicionaItemFimLista(atvRealizadas, lst->itens[i].codIdentificacao,
                lst->itens[i].ano, lst->itens[i].descricao, lst->itens[i].categoria,
                lst->itens[i].situacao);
        }
    }
}

//Imprime um �nico Item da Lista
void imprimeItem(Lista *lst, int indice)
{
    if(indice >= 0 && indice <= indice <= lst->ultimo)
    {
        printf("\nC�digo de Identificacao: %d\n", lst->itens[indice].codIdentificacao);
        printf("Descricao: %s\n", lst->itens[indice].descricao);
        printf("Categoria: %s\n", lst->itens[indice].categoria);
        printf("Situacao: %s\n", lst->itens[indice].situacao);
        printf("Ano: %d\n", lst->itens[indice].ano);
    }
    else
    {
        printf("\nItem n�o encontrado.\n");
    }
}

//retorna o �ndice do item com a chave buscando ou -1 se n�o encontro
int  buscaItemPorCodIdentificacao(Lista *lst, int codIdentificacao)
{
    int i = 0;
    while((i <= lst->ultimo) && (lst->itens[i].codIdentificacao != codIdentificacao))
    {
        i++;
    }
    if(i <= lst->ultimo)
    {
        imprimeItem(lst, i);
        return i;
    }
    else
    {
        return -1;//percorreu todos os elementos e n�o achou
    }
}

void removeItem(Lista *lst, int codIdentificacao)
{
    int posicao;
    posicao = buscaItemPorCodIdentificacao(lst, codIdentificacao);
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

void liberaLista(Lista *lst)
{
    free(lst);
}


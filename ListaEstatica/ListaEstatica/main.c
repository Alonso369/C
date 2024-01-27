#include <stdio.h>
#include <stdlib.h>
#include "itemLista.h"

int main()
{
    Lista *lst;
    Lista *copia;
    Lista *nova;
    Lista *uniao;
    int vazia, cheia, chave;

    printf("Criando lista vazia.\n");
    lst = criaListaVazia();
    copia = criaListaVazia();
    nova = criaListaVazia();
    uniao = criaListaVazia();

    vazia = verificaListaVazia(lst);
    printf("Lista vazia? %d", vazia);

    cheia = verificaListaCheia(lst);
    printf("Lista cheia? %d", cheia);

    printf("\nAdicionando o lo item.\n");
    chave = 8;
//    adicionaItemFimLista(lst, chave);
    insereOrdenado(lst, chave);

    vazia = verificaListaVazia(lst);
    printf("Lista vazia? %d", vazia);

    printf("\nAdicionando o 2o item.\n");
    chave = 2;
//    adicionaItemFimLista(lst, chave);
    insereOrdenado(lst, chave);

    printf("\nAdicionando o 3o item.\n");
    chave = 1;
    //adicionaItemFimLista(lst, chave);
    insereOrdenado(lst, chave);

    printf("\nAdicionando o 4o item.\n");
    chave = 4;
    //adicionaItemFimLista(lst, chave);
    insereOrdenado(lst, chave);

    printf("\nAdicionando o 5o item.\n");
    chave = 5;
    int posicao = 2;
    //adicionaMeioLista(lst, chave, posicao);
    insereOrdenado(lst, chave);

    cheia = verificaListaCheia(lst);
    printf("Lista cheia? %d", cheia);

    printf("\nAdicionando a lo item.\n");
    chave = 3;
//    adicionaItemFimLista(lst, chave);
    insereOrdenado(lst, chave);

    printf("\nAdicionando a lo item.\n");
    chave = 0;
//    adicionaItemFimLista(lst, chave);
    insereOrdenado(lst, chave);

    printf("\nItens da Lista: \n");
    imprimeLista(lst);

    printf("\nBuscando posição do item a partir da chave.\n");
    for(int i = 1; i < 6; i++){
        printf("\nPosicao do item com chave = 3: %d\n", buscaItemProvaChave(lst,i));
    }


    printf("\nTentando remover item com chave = 6.\n");
    removeItem(lst, 6);

    printf("\nImpressao da Lista 01.\n");
    imprimeLista(lst);

    printf("\nTentando remover item com chave = 3.\n");
    removeItem(lst, 3);

    copiaLista(lst, copia);
    printf("Impressao da Lista 02.\n");
    imprimeLista(copia);

    novaLista(lst, copia, nova);
    printf("\nImpressao da interseccao entre as duas outras listas.\n");
    imprimeLista(nova);

    novaUniao(lst, copia, uniao);
    printf("\nImpresao da uniao entre as duas outras listas sem repeticao.\n");
    imprimeLista(uniao);

    liberaLista(lst);
    liberaLista(copia);
    liberaLista(nova);
    liberaLista(uniao);

    return 0;
}

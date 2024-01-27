#ifndef BUCKETLIST_H_INCLUDED
#define BUCKETLIST_H_INCLUDED

#define MAXTAM 10

typedef struct itens Item;
typedef struct lista Lista;
Lista *criaListaVazia();
//retorna 1 se a lista est� cheia ou 0 se n�o
int verificaListaCheia(Lista *lst);
int verificaListaVazia(Lista *lst);
//adiciona um elemento no fim da lista
void adicionaItemFimLista(Lista *lst, int codIdentificacao, int ano, char descricao[100], char categoria[100], char situacao[50]);
//Imprime Lista
void imprimeLista(Lista *lst);
//Lista de Copia tarefas realizadas
void copiaRealizada(Lista *lst, Lista *atvRealizadas);
//retorna o �ndice do item com a chave buscando ou -1 se n�o encontro
int  buscaItemPorCodIdentificacao(Lista *lst, int codIdentificacao);
//Remove item de acordo com o C�digo dele
void removeItem(Lista *lst, int codIdentificacao);
//Imprime um �nico Item
void imprimeItem(Lista *lst, int indice);

#endif // BUCKETLIST_H_INCLUDED

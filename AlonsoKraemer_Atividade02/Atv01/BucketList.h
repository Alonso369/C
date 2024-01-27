#ifndef BUCKETLIST_H_INCLUDED
#define BUCKETLIST_H_INCLUDED

#define MAXTAM 10

typedef struct itens Item;
typedef struct lista Lista;
Lista *criaListaVazia();
//retorna 1 se a lista está cheia ou 0 se não
int verificaListaCheia(Lista *lst);
int verificaListaVazia(Lista *lst);
//adiciona um elemento no fim da lista
void adicionaItemFimLista(Lista *lst, int codIdentificacao, int ano, char descricao[100], char categoria[100], char situacao[50]);
//Imprime Lista
void imprimeLista(Lista *lst);
//Lista de Copia tarefas realizadas
void copiaRealizada(Lista *lst, Lista *atvRealizadas);
//retorna o índice do item com a chave buscando ou -1 se não encontro
int  buscaItemPorCodIdentificacao(Lista *lst, int codIdentificacao);
//Remove item de acordo com o Código dele
void removeItem(Lista *lst, int codIdentificacao);
//Imprime um único Item
void imprimeItem(Lista *lst, int indice);

#endif // BUCKETLIST_H_INCLUDED

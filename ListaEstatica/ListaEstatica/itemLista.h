#ifndef ITEMLISTA_H_INCLUDED
#define ITEMLISTA_H_INCLUDED


#define MAXTAM 30 // N�mero de elementos no vetor de intens da l�sta

typedef struct item Item;
typedef struct lista Lista;

Lista *criaListaVazia();
int verificaListaCheia(Lista *lst);
void adicionaItemFimLista(Lista *lst, int chave);
void imprimeLista(Lista *lst);
int buscaItemProvaChave(Lista *lst, int chave);
void removeItem(Lista *lst, int chave);
int verificaListaVazia(Lista *lst);
void liberaLista(Lista *lst);

#endif // ITEMLISTA_H_INCLUDED

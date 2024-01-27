#ifndef ITEMPILHA_H_INCLUDED
#define ITEMPILHA_H_INCLUDED

#define MAXTAM 6
typedef struct item Item;
typedef struct pilha Pilha;
Pilha * criaPilhaVazia();
//retorna 1 se a pilha está cheia ou 0 se não está
int verificaPilhaCheia(Pilha *p);
//adiciona um elemento no topo da pilha
void empilha(Pilha *p, int chave);
void imprimePilha(Pilha *p);
//remove um item do topo da pilha
void desempilha(Pilha *p);
//retorna 1 e a pilha está vazia ou 0 se bão está
int verificaPilhaVazia(Pilha *p);
void liberaPilha(Pilha *p);



#endif // ITEMPILHA_H_INCLUDED

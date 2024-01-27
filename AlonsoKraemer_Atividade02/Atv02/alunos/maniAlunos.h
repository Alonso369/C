#ifndef MANIALUNOS_H_INCLUDED
#define MANIALUNOS_H_INCLUDED

#define MAXTAM 20

typedef struct reservas Reservas;
typedef struct pilha Pilha;

//Cria a pilha sozinha
Pilha *criaPilhaVazia();
//retorna 1 se a pilha est� cheia ou 0 se n�o est�
int verificaPilhaCheia(Pilha *p);
//inserir um participante, remover e imprimir todos os participantes
//adiciona um elemento no topo da pilha
void empilha(Pilha *p, int idMatricula, char nome[100], char descEvento[200], int cargaHorariaMin);
void imprimePilha(Pilha *p);
//remove um item do topo da pilha
void desempilha(Pilha *p);
//Retorna o total de horas em Eventos de um estudante
int prtTtlEventos(Pilha *p, int idMatricula);
//retorna 1 e a pilha est� vazia ou 0 se b�o est�
int verificaPilhaVazia(Pilha *p);
//Libera espa�o alocado
void liberaPilha(Pilha *p);


#endif // MANIALUNOS_H_INCLUDED

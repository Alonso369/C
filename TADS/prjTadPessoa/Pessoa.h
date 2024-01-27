#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

typedef struct pessoa Pessoa;

Pessoa * criaPessoa(char nome[], int idade);
void liberaPessoa(Pessoa *p);
void imprimePessoa(Pessoa *p);

#endif // PESSOA_H_INCLUDED

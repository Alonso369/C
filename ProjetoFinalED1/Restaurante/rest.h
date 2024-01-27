#ifndef REST_H_INCLUDED
#define REST_H_INCLUDED

#define TABLESIZE 50

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct produto Produto;
typedef struct lista Lista;
typedef struct hashh Hash;
//Cria tabela Hash
Hash *criaTabela();
void liberaTabela(Hash *h);
//Verifica tabela vazia
int verificaTabelaVazia(Hash *h);
//Hashing Divisor
int hashingDivisor(int chave);
//Imprime tabela
void imprimeTabela(Hash *h);
void atualizaCampo(Hash *h, int id, char nmProduto[50], int unidades, float custo, int notaFiscal);
//Tratamento de colisões
void insere(Hash *h, int id, char nmProduto[50], int unidades, float custo, int notaFiscal);
Produto *busca(Hash *h, int id);
//Remove o tratamento
void removeP(Hash *h, int id);

#endif // REST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "Pedido.h"
#include <string.h>

struct pedido
{
    char descricao[100];
    int quantidade;
    float valor;
};

struct data
{
    int dia;
    int mes;
    int ano;
};

struct encontro
{
    Data *dt;
    char local[100];
    float custoTotal;
};

Encontro *novoEncontro(Encontro *enc, Data *dt, char local[], float custoTotal, int nEncontros)
{
    if(nEncontros == 0){
        enc = (Encontro *)malloc(1 * sizeof(Encontro));
    }else{
        enc = (Encontro *)realloc(enc, (nEncontros + 1) * sizeof(Encontro));
    }

    enc[nEncontros].dt = (Data *) dt;
    strcpy(enc[nEncontros].local, local);
    enc[nEncontros].custoTotal = custoTotal;

    return enc;
}

void imprimirEncontros(Encontro *enc, int nEncontros)
{
    for(int i = 0; i < nEncontros; i++){
        printf("\nEncontro %d:", i);
        printf("\nLocal: %s.", enc[i].local);
        //printf("\nData: %.2d/%.2d/%.4d.", enc[i].dt);
        imprimirData(enc[i].dt);
        printf("\nCusto total: %.2f.\n", enc[i].custoTotal);
    }
}

void liberarEncontro(Encontro *encontro)
{
    free(encontro);
}

Data *dataNova( int d, int m, int a)
{
    Data *dt = (Data *)malloc(sizeof(Data));

    dt->dia = d;
    dt->mes = m;
    dt->ano = a;

    return dt;
}

void imprimirData(Data *dt)
{
    printf("\nData do encontro: %.2d/%.2d/%.4d", dt->dia, dt->mes, dt->ano);
}

void liberrarData(Data *dt)
{
    free(dt);
}

Pedido *inserirPedido(Pedido *ped, char descricao[], int quantidade, float valor, int nPedidos)
{
    if(nPedidos == 0){
        ped = (Pedido *)malloc(1 * sizeof(int));
    }else{
        ped = (Pedido *)realloc(ped, (nPedidos + 1) * sizeof(Pedido));
    }

    strcpy(ped[nPedidos].descricao, descricao);
    ped[nPedidos].quantidade = quantidade;
    ped[nPedidos].valor = valor;

    return ped;
}

void imprimirPedido(Pedido *ped, int nPedidos)
{
    for(int i = 0; i < nPedidos; i++){
        printf("Pedido %d:", i);
        printf("\nDescrição: %s.", ped[i].descricao);
        printf("\nQuantidade: %d.", ped[i].quantidade);
        printf("\nValor desse pedido por pessoas: %.2f.\n", ped[i].valor);
    }
}

void liberaPedido(Pedido *ped)
{
    free(ped);
}


float valorConta(Pedido *ped, int nPessoas)
{
    int numPessoas;
    float valorTotal = 0;
    printf("Informe o numero de pessoas que vao dividir a conta: ");
    scanf("%d", &numPessoas);

    for(int i = 0; i < nPessoas; i++){

        //+= primeiro faz a soma e depois atribui
        //=+ primeiro atribui o que tem depois faz a soma
        valorTotal += (ped[i].valor * ped[i].quantidade);
    }
    printf("Valor R$: %.2f", valorTotal);
    float valorFinal = valorTotal / numPessoas;
    printf("\nValor final sem taxa de serviço R$: %.2f", valorFinal);
    float valorFinalTaxa = valorFinal + ((valorFinal * 8) / 100);

    return valorFinalTaxa;
}

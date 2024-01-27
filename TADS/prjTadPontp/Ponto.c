#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"

struct ponto
{
    float x;
    float y;
};

Ponto *criaPonto(float x, float y)
{
    Ponto *p = malloc(sizeof(Ponto));//aloca��o dinamica de mem�ria para poder retornar
    p->x = x;
    p->y = y;
    return p;
}

void imprimePonto(Ponto *p)
{
    printf("x: %.2f, y: %.2f\n", p->x, p->y);
}

float calculaDistancia(Ponto *p1, Ponto *p2)
{
    float dx, dy;
    //Ponteiros de struct dentro de fun��es s�o acessados por -> e n�o
    dx = p2->x - p1->x; // calcula dist�nica entre os valores de x dos dois pontos
    dy = p2->y - p1->y;// calcula dist�nica entre os valores de x dos dois pontos
    //retorna raiz quadrada da soma das duas distancias elevadas ao quadrado
    return sqrt(pow(dx, 2) + pow(dy, 2));
}

void liberaPonto(Ponto *p)
{
    free(p);
}

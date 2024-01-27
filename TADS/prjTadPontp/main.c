#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"
#include <math.h>

int main()
{
    Ponto *p1, *p2;
    float d;

    p1 = criaPonto(10 , 20);
    p2 = criaPonto(10, 37);
    imprimePonto(p1);
    imprimePonto(p2);
    d = calculaDistancia(p1, p2);
    printf("\nDistancia entre os pontos: %.2f", d);

    printf("\n");
    return 0;
}

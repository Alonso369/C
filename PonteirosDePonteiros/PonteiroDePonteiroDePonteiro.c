#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exemplo de ponteiro para ponteiro

typedef struct ponto Ponto;

struct ponto{
    int x;
    int y;
};

int main()
{
    Ponto pto, *p1, **p2, ***p3;
    pto.x = 10;
    pto.y = 20;

    p1 = &pto; //p1 aponta para ponto
    p2 = &p1; //p2 aponta para p1, pois é ponteiro de ponteiro
    p3 = &p2; //p3 aponta para p2, pois é ponteiro de ponteiro de ponterio

    printf("Valor de x e y a partir de *p1: \n");
    printf("x: %d\n", (*p1).x);
    printf("y: %d\n", (*p1).y);

    printf("Valor de x e y a partir de *p2: \n");
    printf("x: %d\n", (*(*p2)).x);
    printf("y: %d\n", (*(*p2)).y);


    printf("Valor de x e y a partir de *p3: \n");
    printf("x: %d\n", (*(*(*p3))).x);
    printf("y: %d\n", (*(*(*p3))).y);

    return 0;
}

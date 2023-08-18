#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//-------------------------------
struct polar
{
    float raio;
    float argumento;
};
typedef struct polar Polar;
//-------------------------------------
//-------------------------------------
struct cartesiano
{
    float x;
    float y;
};
typedef struct cartesiano Cartesiano;
//-------------------------------------
//-------------------------------------

int main()
{
    Polar coordenada;
    Cartesiano cart;

    printf("Informe uma coordenada polar raio argumento: rr aa \n:");
    scanf("%f%f", &coordenada.raio, &coordenada.argumento);

    cart.x = coordenada.raio * cos(coordenada.argumento);
    cart.y = coordenada.raio * sin(coordenada.argumento);

    printf("As coordenadas do plano Polar, convertidas no Palno Cartesiano é: \n %f \n %f.", cart.x, cart.y);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>



struct instrumento{
    char modelo[20];
    char marca[20];
    float preco;
};

typedef struct instrumento Instrumento;


int main()
{
    float p = 10;
    Instrumento instrumentos[5];

    for(int i = 0; i < 5; i++){
        printf("\n");
        printf("Informe a marca do Instrumento: ");
        gets(instrumentos[i].marca);
        printf("Informe o modelo do instrumento: ");
        gets(instrumentos[i].modelo);
        printf("Informe o preco: ");
        scanf("%f", &instrumentos[i].preco);

        printf("\nDados Informados: \n");
        printf("Marca: %s\n", instrumentos[i].marca);
        printf("Modelo: %s\n", instrumentos[i].modelo);
        printf("Preco: %.2f\n", instrumentos[i].preco);

        if(instrumentos[i].preco == 10){
            return 0;
        }
        setbuf(stdin,NULL);
    }







    return 0;
}

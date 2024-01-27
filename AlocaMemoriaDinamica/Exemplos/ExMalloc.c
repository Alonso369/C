#include <stdio.h>
#include <stdlib.h>

//Exemplo de uso da fun��o malloc para aloca��o din�mica de mem�ria
//de acordo com o n�mero de elementos informados pelo usu�rio

int main()
{
    int *p;
    int num;
    printf("Informe o numero de elementos que pretende armazenar: ");
    scanf("%d", &num);

    //o ponteiro de inteiro recebe o retorno da fun��o malloc
    //que traz o endere�o do primeiro endere�o de mem�ria dos numeros alocados

    p = (int *) malloc(num * sizeof(int)); // p � um vetor de tamanho num
    if(p == NULL){
        printf("\nErro: n�o foi poss�vel alocar memoria dinamicamente!");
        system("pause");
        exit(1);
    }
    int i;
    for(i = 0; i < num; i++){
        printf("\nDigite o valor da posicao %d: " , i);
        scanf("%d", &p[i]);
    }
    printf("\nDados informados: \n");

    for(i = 0; i < num; i++){
        printf("\nPosicao %d: %d", i, p[i]);
    }
    printf("\n");

    return 0;
}

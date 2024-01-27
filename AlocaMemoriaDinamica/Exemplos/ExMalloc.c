#include <stdio.h>
#include <stdlib.h>

//Exemplo de uso da função malloc para alocação dinâmica de memória
//de acordo com o número de elementos informados pelo usuário

int main()
{
    int *p;
    int num;
    printf("Informe o numero de elementos que pretende armazenar: ");
    scanf("%d", &num);

    //o ponteiro de inteiro recebe o retorno da função malloc
    //que traz o endereço do primeiro endereço de memória dos numeros alocados

    p = (int *) malloc(num * sizeof(int)); // p é um vetor de tamanho num
    if(p == NULL){
        printf("\nErro: não foi possível alocar memoria dinamicamente!");
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

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *p;
    p = &n; //ponteiro p recebe o endere�o de mem�ria da vari�vel n
    //ou seja, p aponta para n

    printf("O valor da variavel n eh: %d\n", n);
    //&permite acessar o endere�o de mem�ria de uma vari�vel
    printf("O endereco de mem�ria da variavel n eh: %ld\n", &n);
    //o valor de um ponteiro � um endere�o de mem�ria
    printf("O valor do ponteiro p eh %ld\n", p);
    // * � operador de defer�ncia que d� acesso ao valor
    //da vari�vel que � apontada pelo ponteiro
    printf("O valor da variavel n apontada por p eh %ld\n", p);


    return 0;
}

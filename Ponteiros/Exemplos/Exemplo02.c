#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *p;
    p = &n; //ponteiro p recebe o endereço de memória da variável n
    //ou seja, p aponta para n

    printf("O valor da variavel n eh: %d\n", n);
    //&permite acessar o endereço de memória de uma variável
    printf("O endereco de memória da variavel n eh: %ld\n", &n);
    //o valor de um ponteiro é um endereço de memória
    printf("O valor do ponteiro p eh %ld\n", p);
    // * é operador de deferência que dá acesso ao valor
    //da variável que é apontada pelo ponteiro
    printf("O valor da variavel n apontada por p eh %ld\n", p);


    return 0;
}

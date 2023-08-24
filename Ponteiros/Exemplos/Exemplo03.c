#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    char c = 'a';
    int *pn;
    pn = &n;//Atribuição após a declaração
    char *pc = &c;//Atribuição pode ser feita já na declaração
    //pn e pc são ponteiros que guardam o endereço de memória
    //das variáveis n e c respectivamente

    printf("O valor da variavel n eh: %d\n", n);
    printf("O valor da variavel c eh: %c\n", c);

    printf("O endereco de memória da variavel n eh: %ld\n", &n);
    printf("O endereco de memória da variavel c eh: %ld\n", &c);

    printf("pn aponta para o endereco de n que eh: %ld\n", pn);
    printf("pc aponta para o endereco de c que eh: %ld\n", pc);

    printf("No endereco apontado por pn estpa o conteudo: %d\n", *pn);
    printf("No endereco apontado por pn estpa o conteudo: %c\n", *pc);

    //Alteraçãoo do conteúdo da variável n por meio do ponteiro pn
    *pn = 20;
    printf("O conteudo do endereco apontado por pn foi alterado, logo n passou a: %d\n", n);
    //Poderia ser impresso os dois valores n e *pn


    return 0;
}

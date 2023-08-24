#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    char c = 'a';
    int *pn;
    pn = &n;//Atribui��o ap�s a declara��o
    char *pc = &c;//Atribui��o pode ser feita j� na declara��o
    //pn e pc s�o ponteiros que guardam o endere�o de mem�ria
    //das vari�veis n e c respectivamente

    printf("O valor da variavel n eh: %d\n", n);
    printf("O valor da variavel c eh: %c\n", c);

    printf("O endereco de mem�ria da variavel n eh: %ld\n", &n);
    printf("O endereco de mem�ria da variavel c eh: %ld\n", &c);

    printf("pn aponta para o endereco de n que eh: %ld\n", pn);
    printf("pc aponta para o endereco de c que eh: %ld\n", pc);

    printf("No endereco apontado por pn estpa o conteudo: %d\n", *pn);
    printf("No endereco apontado por pn estpa o conteudo: %c\n", *pc);

    //Altera��oo do conte�do da vari�vel n por meio do ponteiro pn
    *pn = 20;
    printf("O conteudo do endereco apontado por pn foi alterado, logo n passou a: %d\n", n);
    //Poderia ser impresso os dois valores n e *pn


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "Pedido.h"

int main()
{
    char descricao[100], local[100];
    int quantidade = 0, decisao, escolha = 0;
    int nPedidos = 0, nEncontros = 0;
    float valor, valorTotal;
    Pedido *ped = NULL;
    int dia, mes, ano;
    Data *dt;
    float valorFinal = 0;
    Encontro *enc;

    do
    {
        nPedidos = 0;
        do
        {
            setbuf(stdin,NULL);
            printf("Informe o que deseja o que vai pedir: ");
            gets(descricao);
            setbuf(stdin,NULL);

            printf("\nInforme a quantidade de itens: ");
            scanf("%d", &quantidade);

            printf("\nInforme o valor do pedido: ");
            scanf("%f", &valor);

            ped = inserirPedido(ped, descricao, quantidade, valor, nPedidos);

            nPedidos++;

            printf("\nDeseja fazer mais um pedido: \n0 - para sair.\n1 - para incluir mais um pedido");
            scanf("%d", &decisao);
            setbuf(stdin,NULL);

        }
        while(decisao == 1);


        imprimirPedido(ped, nPedidos);
        valorFinal = valorConta(ped, nPedidos);

        printf("\nValor final para cada um mais taxa de servico R$: %.2f", valorFinal);

        valorTotal += valorFinal;
        ///////////////////////////////////////////////////////////////////////////////////
        //ATIVIDADE DOIS
        //setbuf(setdin, NULL);


        printf("\nInforme a data do encontro nesse formado: dd mm aaaa\n:");
        scanf("%d%d%d", &dia,&mes,&ano);

        dt = dataNova(dia, mes, ano);

        setbuf(stdin,NULL);
        printf("Informe o local do encontro: ");
        gets(local);

        enc = novoEncontro(enc, dt, local, valorTotal, nEncontros);
        nEncontros++;

        printf("\nDeseja marcar um novo encontro: \n0 - para sair \n1 - para incluir mais um\n:");
        scanf("%d", &escolha);

    }
    while(escolha == 1);

    imprimirEncontros(enc, nEncontros);

    void liberaPedido(ped);
    void liberarEncontro(enc);
    void liberrarData(dt);


    return 0;
}

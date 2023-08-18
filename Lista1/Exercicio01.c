#include <stdio.h>
#include <stdlib.h>

typedef struct pedido Pedido;

struct pedido{
    char nomeCliente[30];
    char descricaoPedido[100];
    float valorTotal;
};



int main()
{
    Pedido pedidos;

    printf("Informe o nome do cliente: ");
    gets(pedidos.nomeCliente);
    setbuf(stdin,NULL);
    printf("Descreva o pedido do cliente: ");
    gets(pedidos.descricaoPedido);
    setbuf(stdin,NULL);
    printf("Informe o valor total do pedido: ");
    scanf("%f", &pedidos.valorTotal);

    printf("\n");

    printf("O nome: %s\n", pedidos.nomeCliente);

    printf("Descricao: %s\n", pedidos.descricaoPedido);

    printf("Valor total: %.2f\n", pedidos.valorTotal);
}

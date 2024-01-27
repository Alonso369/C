#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rest.h"

int main()
{
    //Declaração de variáveis
    int id, decisao, idEx, idAtt;
    char nmProduto[50];
    int unidades;
    float custo;
    int notaFiscal;

    Hash *tabProd = criaTabela();
    int vazia = verificaTabelaVazia(tabProd);

    do
    {
        printf("---------------------------------------\n");
        printf("INFORME O QUE DESEJA FAZER: \n1 - Para inserir\n2 - Para listar\n3 - Para excluir\n4 - Para atualizar\n5 - Para sair\n:");
        scanf("%d", &decisao);

        switch(decisao)
        {
        case 1:
            printf(" Informe o ID do produto: \n");
            scanf("%d", &id);
            printf(" Informe o nome do produto: \n");
            setbuf(stdin, NULL);
            gets(nmProduto);
            printf(" Informe quantas unidades do produto: \n");
            scanf("%d", &unidades);
            printf(" Informe o valor total da compra: \n");
            scanf("%f", &custo);
            printf(" Informe o numero da nota fical: \n");
            scanf("%d", &notaFiscal);
            insere(tabProd, id, nmProduto, unidades, custo, notaFiscal);
            break;
        case 2:
            imprimeTabela(tabProd);
            break;
        case 3:
            printf("Informe o ID do produto que deseja excluir: ");
            scanf("%d", &idEx);
            removeP(tabProd, idEx);
            printf("Removido com sucesso.\n");
            break;
        case 4:
            printf("Informe o ID do produto que você deseja atualizar: ");
            scanf("%d", &idAtt);
            printf("Informe o nome do produto: \n");
            setbuf(stdin, NULL);
            gets(nmProduto);
            printf("Informe quantas unidades do produto: \n");
            scanf("%d", &unidades);
            printf("Informe o valor total da compra: \n");
            scanf("%f", &custo);
            printf("Informe o numero da nota fical: \n");
            scanf("%d", &notaFiscal);
            atualizaCampo(tabProd, idAtt, nmProduto, unidades, custo, notaFiscal);
            break;
        case 5:
            break;
        default:
            printf("Opcao invalida!\n");
        }
    }
    while(decisao != 5);

    liberaTabela(tabProd);
    return 0;
}

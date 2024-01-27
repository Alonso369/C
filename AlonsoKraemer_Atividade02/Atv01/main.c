#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BucketList.h"

int main()
{
    Lista *lst;
    Lista *atvRealizada;
    int codIdentificacao = 0;
    int ano, retorno;
    char descricao[100];
    char categoria[100];
    char situacao[50];
    int sit, desejo, decisao, inf;

    lst = criaListaVazia();
    atvRealizada = criaListaVazia();

    do
    {
        printf("Informe o que voce deseja fazer: \n1 - Inserir um novo elemento do conjunto.\n2 - Excluir um elemento do conjunto.\n3 - Buscar elemento no conjunto.\n4 - Imprimir todas as atividades cadastradas.\n5 - Imprimir as atividades REALIZADAS.\n: ");
        scanf("%d", &decisao);

        switch (decisao)
        {
        case 1:
            do
            {
                codIdentificacao++;
                setbuf(stdin, NULL);
                printf("Informe a descricao da tarefa: ");
                gets(descricao);
                setbuf(stdin, NULL);
                printf("Infomre a categoria da tarefa: ");
                gets(categoria);
                setbuf(stdin, NULL);
                printf("Informe a situacao da tarefa: \n1 - REALIZADA. \n2 - EM ANDAMENTO. \n3 - A REALIZAR.");
                scanf("%d", &sit);
                if(sit == 1)
                {
                    strcpy(situacao, "Realizada");
                }
                else if(sit == 2)
                {
                    strcpy(situacao, "Em andamento");
                }
                else if(sit == 3)
                {
                    strcpy(situacao, "A Realizar.");
                }
                printf("Informe o ano: ");
                scanf("%d", &ano);
                setbuf(stdin, NULL);
                adicionaItemFimLista(lst, codIdentificacao, ano, descricao, categoria, situacao);

                printf("Deseja inserir mais um desejo?\n1 - Para Sim: \n2 - Para não: ");
                scanf("%d", &desejo);

            }
            while(desejo != 2);
            break;
        case 2://excluir
            printf("Informe o codigo de identificacao da atividade que deseja excluir: ");
            scanf("%d", &codIdentificacao);
            removeItem(lst, codIdentificacao);
            break;
        case 3://buscar
            printf("Informe o codigo de identificacao da atividade que deseja buscar: ");
            scanf("%d", &codIdentificacao);
            printf("Busca do Item por chave...");
            printf("\nPosicao do item com chave %d: %d", codIdentificacao, buscaItemPorCodIdentificacao(lst, codIdentificacao));
            break;
        case 4://Imprimir todas as atividades cadastradas
            printf("\nLista de Tarefas geral.");
            imprimeLista(lst);//Imprime a lista de tarefas GERIAS
            break;
        case 5://Imprimir todas as atividades REALIZADAS
            copiaRealizada(lst, atvRealizada);//Copia para outra ista todas as
            printf("\nLista de tarefas Realizadas.");
            imprimeLista(atvRealizada);//Imprime a lista de atividades REALIZADAS
            break;
        case 6://sair
            break;
        }
        printf("Deseja fazer mais alguma informacao?\n1 - Sim. Desejo fazer.\n2 - Quero finalizar.");
        scanf("%d", &inf);
    }while(inf != 2);

    liberaLista(lst);
    liberaLista(atvRealizada);
    printf("\n");

    return 0;
}

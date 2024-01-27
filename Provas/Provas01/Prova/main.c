#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"

int main()
{
    Data *dtAdmi;
    Funcionarios *func = NULL;
    char nome[50];
    char cargo[50];
    int vinculo = 0, nFuncionarios = 0, nData = 0;
    int dia, mes, ano, decisao;
    int atividade;
    int boleano = 3;

    do
    {
        printf("Informe o que deseja fazer: \n1 - para incluir.\n2 - para excluir.\n3 - para consultar.\n4 - sair.");
        scanf("%d", &atividade);

        switch (atividade)
        {
        case 1:

            do
            {
                printf("Informe o nome do funcionario: ");
                gets(nome);
                setbuf(stdin,NULL);
                printf("\nInforme o cargo do funcionario: ");
                gets(cargo);
                setbuf(stdin,NULL);
                printf("\nInforme a data de contratacao do mesmo: dd mm aaaa");
                scanf("%d%d%d", &dia,&mes,&ano);
                dtAdmi = dataNova(dtAdmi, dia, mes, ano, nData);
                printf("\nInforme o vinculo do empregado: \n0 - Contratado.\n1 - Estagiario.\n2 - Frelancer");
                scanf("%d", &vinculo);

                func = inserirFuncionario(func, nome, cargo, vinculo, nFuncionarios);

                nData++;
                nFuncionarios++;

                printf("\nDeseja inserir mais um funcionario?\n: ");
                scanf("%d", &decisao);

            }
            while(decisao == 10);

            break;

        case 2:
            printf("Informe o nome do funcionario: ");
            gets(nome);
            boleano = excluirFuncionario(func, nome, nFuncionarios);
            if(boleano == 1)
            {
                printf("Excluido com sucesso.");
            }
            else
            {
                printf("Nao foi possivel excluir.");
            }
            break;
        case 3:
            imprimirFuncionarios(func, nFuncionarios);
            break;
        case 4:
            printf("Informe o vinculo do funcionario: ");
            scanf("%d", &vinculo);
            consultarFuncionario(func, vinculo, nFuncionarios);
            break;
        case 5:
            break;
        }

        }while(atividade == 0);

        liberarFuncionario(func);
        liberrarData(dtAdmi);

        return 0;
    }

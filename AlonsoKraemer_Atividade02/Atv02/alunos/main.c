#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "maniAlunos.h"

int main()
{
    int idMatricula, decisao;
    char nome[100];
    char descEvento[200];
    int cargaHorariaMin, min;
    Pilha *p;

    int op;

    p = criaPilhaVazia();

    do
    {
        printf("Qual operacao deseja fazer?\n1 - Inserir um aluno.\n2 - Excluir um aluno.\n3 - Imprimir todos os alunos.\n4 - Imprimir a quantidades de hora de evento do aluno.\n: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1://inserir um aluno
            printf("Informe o codigo da sua matricula: ");
            scanf("%d", &idMatricula);
            setbuf(stdin, NULL);
            printf("Informe o nome do aluno: ");
            gets(nome);
            setbuf(stdin, NULL);
            printf("Descreva o evento: ");
            gets(descEvento);
            setbuf(stdin, NULL);
            printf("Informe a duração do evento, em minutos: ");
            scanf("%d", &cargaHorariaMin);
            empilha(p, idMatricula, nome, descEvento, cargaHorariaMin);
            break;
        case 2://Excluir um aluno
            desempilha(p);//Excluir o Aluno que foi colocado mais recente
            printf("Excluido com sucesso.");
            break;
        case 3://Imprimir todos os alunos
            imprimePilha(p);
            break;
        case 4://Exibir a quantidade total de tempo que esse aluno ficou em eventos
            printf("Informe o codigo da matricula do aluno, para calcular o tempo dele: ");
            scanf("%d", &idMatricula);
            min = prtTtlEventos(p, idMatricula);
            printf("\nO total de tempo em eventos foi de %d minutos.", min);
            break;
        }
        printf("\nDeseja fazer mais algum processo?\n1 - SIM\n2 - NAO\n: ");
        scanf("%d", &decisao);
    }
    while(decisao != 2);


    return 0;
}

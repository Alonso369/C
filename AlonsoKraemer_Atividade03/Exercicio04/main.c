#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct t_nome Nome;

struct t_nome
{
    char nome[20];
};

//Ordenação pelo método bolha
void bubbleSort(Nome *vetNomes, int n)
{
    int i, j;
    Nome aux;
    for (i = n-1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (strcmp(vetNomes[j].nome, vetNomes[j+1].nome) > 0)
            {
                aux = vetNomes[j];
                vetNomes[j] = vetNomes[j+1];
                vetNomes[j+1] = aux; //troca
            }
        }
    }
}

//Ordenação pelo método de inserção
void insertionSort(Nome *vetNomes, int n)
{
    int i, j;
    Nome aux;
    for (i = 1; i < n; i++)
    {
        strcpy(aux.nome, vetNomes[i].nome);
        j = i - 1;
        while (j >= 0 && strcmp(vetNomes[j].nome, aux.nome) >0)
        {
            strcpy(vetNomes[j + 1].nome, vetNomes[j].nome);
            j--;
        }
        strcpy(vetNomes[j + 1].nome, aux.nome);
    }
}

int main()
{
    Nome *vetNomes;
    int decisao, num = 1;

    vetNomes = (Nome *) malloc(sizeof(Nome));

    do
    {
        printf("Insira um nome na lista: ");
        gets(vetNomes[num-1].nome);
        setbuf(stdin, NULL);

        printf("Deseja inserir mais algum nome?\n[1]-nao \n[2]-sim\n: ");
        scanf("%d", &decisao);

        setbuf(stdin, NULL);
        if(decisao != 1)
        {
            num++;
            vetNomes = realloc(vetNomes, num * sizeof(Nome));
        }
    }
    while(decisao != 1);

    //METODO BOLHA

    bubbleSort(vetNomes, num);
    printf("Ordenacao pelo Metodo Bolha:\n");
    for(int i = 0; i < num; i++)
    {
        printf("Nome %d: %s\n", i, vetNomes[i].nome);
    }

    insertionSort(vetNomes, num);
    printf("\nOrdencao pelo metodo de insercao\n");
    for(int i = 0; i < num; i++)
    {
        printf("Nome %d: %s\n", i, vetNomes[i].nome);
    }



    free(vetNomes);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Crie uma estrutura dinâmica utilizando struct, para armazenar dados de RA, nome
//telefone, e email de alunos. O número de alunos e dados de cada um devem ser inforados
//pelo usuário. Imprimir posteriormente os dados informados

typedef struct aluno Aluno;

struct aluno{
    char nome[15];
    int ra;
    int telefone;
    char email[20];
};

int main()
{
    Aluno *aluno;
    int num = 0;

    printf("Infomre a quantidade de alunos: ");
    scanf("%d", &num);

    aluno = (int *) malloc(num * sizeof(int));

    for(int i = 0; i < num; i++){
        setbuf(stdin, NULL);
        printf("Informe o nome do aluno: ");
        gets(aluno[i].nome);
        setbuf(stdin, NULL);
        printf("\nInforme o RA: ");
        scanf("%d", &aluno[i].ra);
        printf("Informe o telefone: ");
        scanf("%d", &aluno[i].telefone);
        setbuf(stdin, NULL);
        printf("Informe o e-mail: ");
        gets(aluno[i].email);
        setbuf(stdin, NULL);
    }

    for(int i = 0 ; i < num; i++){
        printf("Aluno: %s\n", aluno[i].nome);
        printf("E-mail: %s\n", aluno[i].email);
        printf("Ra: %d\n", aluno[i].ra);
        printf("Telefone: %d\n", aluno[i].telefone);
    }

    return 0;
}

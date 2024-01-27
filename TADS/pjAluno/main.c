#include <stdio.h>
#include <stdlib.h>
#include <string.h>//strcpy copia uma string para outra

typedef struct aluno Aluno;

//Estrutura de Dados
struct aluno{
    char nome[30];
    int RA;
    float notas[3];
    float media;
};

Aluno cadastraAluno(char nome[], int RA, float notas[3])
{
    Aluno novoAluno;
    strcpy(novoAluno.nome, nome);
    novoAluno.RA = RA;
    novoAluno.notas[0] = notas[0];
    novoAluno.notas[1] = notas[1];
    novoAluno.notas[2] = notas[2];
    return novoAluno;
}

void imprimeAluno(Aluno aluno){
    printf("Aluno: %s - %d", aluno.nome, aluno.RA);
    printf("\nMedia: %.2f", aluno.media);
}

Aluno calculaMedia(Aluno aluno)
{
    float soma = 0;
    for(int i = 0; i < 3; i++){
        soma += aluno.notas[i];
    }
    aluno.media = soma / 3;
    return aluno;
}

int main()
{
    Aluno aluno1;
    char nome[30];
    int RA;
    float notas[3];

    printf("Informe o nome do aluno: ");
    gets(nome);
    printf("\nInforme o RA do aluno: ");
    scanf("%d", &RA);
    printf("\nInforme 3 notas do aluno: ");
    scanf("%f %f %f", &notas[0], &notas[1], &notas[2]);
    aluno1 = cadastraAluno(nome, RA, notas);

    aluno1 = calculaMedia(aluno1);
    imprimeAluno(aluno1);

    printf("\n");
    return 0;
}

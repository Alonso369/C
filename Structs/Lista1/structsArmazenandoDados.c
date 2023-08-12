#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[40];
    int id;
    float nota1;
    float nota2;
    float nota3;
};

typedef struct aluno Aluno;

int main()
{
    Aluno alunos[5];
    float maiorNota = 0, media, maiorMedia = 0;
    int IMaiorNota = 0, iMaiorMedia = 0;

    for(int i = 0; i < 5; i++){
        printf("\nInforme o nome: ");
        gets(alunos[i].nome);
        printf("Informe o codigo da Matricula: ");
        scanf("%d", &alunos[i].id);
        printf("Informe a nota da primeira prova: ");
        scanf("%f", &alunos[i].nota1);
        printf("Informe a nota da segunda prova: ");
        scanf("%f", &alunos[i].nota2);
        printf("Informe a nota da terceira prova: ");
        scanf("%f", &alunos[i].nota3);
        setbuf(stdin,NULL);
    }


    for(int i = 0; i < 5; i++){
        if(alunos[i].nota1 > maiorNota){
            maiorNota = alunos[i].nota1;
            IMaiorNota = i;
        }
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;
        if(media > maiorMedia){
            maiorMedia = media;
            iMaiorMedia = i;
        }

    }

    printf("O Aluno com a maior nota foi: %s\t%.2f\n", alunos[IMaiorNota].nome, alunos[IMaiorNota].nota1);
    //---------------------------------------------------------------------------------------------
    printf("O Aluno com a maior media foi:\nNome: %s \nMedia de: %.2f\n", alunos[iMaiorMedia].nome, maiorMedia);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//-------------------------------
struct aluno{
    char nome[30];
    int idMatricula;
    float mediaFinal;
};
typedef struct aluno Aluno;
//---------------------------------

int main()
{
    Aluno alunos[3];
    Aluno aprovados[3];
    Aluno reprovados[3];

    for(int i = 0; i < 3; i++){
        printf("Informe o nome do aluno: ");
        gets(alunos[i].nome);
        setbuf(stdin,NULL);
        printf("Informe o codigo da matricula: ");
        scanf("%d", &alunos[i].idMatricula);
        printf("Informe a media final: ");
        scanf("%f", &alunos[i].mediaFinal);


        if(alunos[i].mediaFinal >= 5){
            aprovados[i] = alunos[i];
        }
        else{
            reprovados[i] = alunos[i];
        }
        setbuf(stdin,NULL);
    }

    for(int i = 0 ; i < 3; i++){
        if(alunos[i].mediaFinal >= 6){
            printf("\nAprovado: %s com media %2.f", aprovados[i].nome, aprovados[i].mediaFinal);
        }else{
            printf("\nReprovado: %s com media %2.f", reprovados[i].nome, reprovados[i].mediaFinal);
        }
    }
    printf("\n");

    return 0;
}

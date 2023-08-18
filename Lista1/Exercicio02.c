#include <stdio.h>
#include <stdlib.h>



struct dosesDeVacina{
    char nome[40];
    char cidade[30];
    int idade;
};

typedef struct dosesDeVacina Doses;

Doses cadastroPaciente(int i){
    Doses d;
    printf("Informe o nome do paciente: ");
    gets(d.nome);
    printf("Informe a cidade do paciente: ");
    gets(d.cidade);
    printf("Infomre a idade do paciente: ");
    scanf("%d", &d.idade);
    return d;
}

void imprimeDados(Doses doses){
    printf("Nome: %s\n", doses.nome);
    printf("Cidade: %s\n", doses.cidade);
    printf("Idade: %d\n", doses.idade);
}


int main()
{
    Doses doses[5];
    for(int i = 0; i < 2; i++){
        doses[i] = cadastroPaciente(i);
        setbuf(stdin, NULL);
    }

    printf("\nDados Informados: \n");

    for(int i = 0; i < 2; i++){
        imprimeDados(doses[i]);
        printf("\n");
    }
    return 0;
}

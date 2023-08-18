#include <stdio.h>
#include <stdlib.h>
//-------------------------------
struct data{
    int dia, mes, ano;
};
typedef struct data Data;
//-------------------------------
struct atleta{
    char nome[40];
    float cpf;
    float salario;
    char modalidadeEsportiva[30];
    Data data;
};
typedef struct atleta Atleta;
//---------------------------------


int main()
{

    Atleta atleta;

    printf("Informe o nome do atleta: ");
    gets(atleta.nome);
    printf("Informe o cpf: ");
    scanf("%f", &atleta.cpf);
    printf("Informe o salário do atleta: ");
    scanf("%f", &atleta.salario);
    setbuf(stdin,NULL);
    printf("Informe a modalidade esportiva do atleta: ");
    gets(atleta.modalidadeEsportiva);
    printf("Informe a data de nascimento nesse formato: dd mm aaaa");
    scanf("%d%d%d", &atleta.data.dia, &atleta.data.mes, &atleta.data.ano);

    printf("\nRelatorio: \n");
    printf("Nome: %s\n", atleta.nome);
    printf("CPF: %0.f\n", atleta.cpf);
    printf("Salario: %2.f\n", atleta.salario);
    printf("Modalidade esportiva: %s\n", atleta.modalidadeEsportiva);
    printf("Data de nascimento: %d/%d/%d\n", atleta.data.dia, atleta.data.mes, atleta.data.ano);

    return 0;
}

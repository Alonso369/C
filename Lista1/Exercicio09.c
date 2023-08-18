#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//-------------------------------
struct horario
{
    int segundo;
    int minuto;
    int hora;
};
typedef struct horario Horario;
//---------------------------------
//---------------------------------
struct data{
    int dia;
    int mes;
    int ano;
};
typedef struct data Data;
//----------------------------------
//----------------------------------
struct compromisso{
    Data marcado;
    Horario hora;
    char descricao[100];
};
typedef struct compromisso Compromisso;


int main()
{

    Compromisso compromisso[3];

    for(int i =0; i < 3; i++){
        setbuf(stdin,NULL);
        printf("\nDescreva o compromiso: ");
        gets(compromisso[i].descricao);
        setbuf(stdin,NULL);
        printf("\nInforme a hora dessa forma(hora, minuto, segundos): hh mm ss");
        scanf("%d%d%d", &compromisso[i].hora.hora, &compromisso[i].hora.minuto, &compromisso[i].hora.segundo);
        setbuf(stdin,NULL);
        printf("\nO a data dessa forma(dia, mes, ano) dd mm aaaa: ");
        scanf("%d%d%d", &compromisso[i].marcado.dia, &compromisso[i].marcado.mes, &compromisso[i].marcado.ano);
        setbuf(stdin,NULL);
    }

    for(int i = 0; i < 3; i++){
        printf("\nDescricao do compromisso: %s", compromisso[i].descricao);
        printf("\nHorario: %d:%d:%d.", compromisso[i].hora.hora, compromisso[i].hora.minuto, compromisso[i].hora.segundo);
        printf("\nData: %d/%d/%d.", compromisso[i].marcado.dia, compromisso[i].marcado.mes, compromisso[i].marcado.dia);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funcoes.h"

struct funcionarios
{
    Data *dataAdmissao;
    char nome[50];
    char cargo[50];
    int vinculo;
};

struct data {
 int dia;
 int mes;
 int ano;
};

void consultarFuncionario(Funcionarios *func, int vinculo, int nFuncionarios)
{
    int cont = 0;
    for(int i = 0; i < nFuncionarios; i++)
    {
        if(func[i].vinculo == vinculo){
            cont++;
        }
    }
    printf("Há %d funcionarios com esse vinculo.", cont);
}

Funcionarios *inserirFuncionario(Funcionarios *func, char nome[], char cargo[], int vinculo, int nFuncionarios)
{
    if(nFuncionarios == 0){
        func = (Funcionarios *)malloc(1 * sizeof(Funcionarios));
    }else{
        func = (Funcionarios *)realloc(func, (nFuncionarios + 1) * sizeof(Funcionarios));
    }

    strcpy(func[nFuncionarios].nome, nome);
    strcpy(func[nFuncionarios].cargo, cargo);
    func[nFuncionarios].vinculo = vinculo;

    return func;
}
//srtcmp se o resulado delas for igual a zero elas são iguais
int excluirFuncionario(Funcionarios *func, char nome[], int nFuncionarios)
{
    for(int i = 0; i < nFuncionarios; i++){
        if(srtcmp(func[i].nome, nome) == 0){
            func[i].delete;
            return 1;
        }
    }
    return 0;
}

void imprimirFuncionarios(Funcionarios *func, int nFuncionarios)
{
    for(int i = 0; i < nFuncionarios; i++){
        printf("\nFuncionario: %d\n", i);
        printf("Nome do funcionario: %s", func[nFuncionarios].nome);
        printf("Cargo: %s", func[nFuncionarios].cargo);
        imprimirData(func[i].dtAdmi);
        printf("Veiculo: %d", func[nFuncionarios].vinculo);
    }
}

void liberarFuncionario(Funcionarios *funconario)
{
    free(funconario);
}


Data *dataNova(Data *dtAdmi, int d, int m, int a, int nData)
{
    if(nData = 0){
        dtAdmi = (Data *)malloc(sizeof(Data));
    }else{
        dtAdmi = (Data *)realloc(dtAdmi, (nData + 1) * sizeof(Data));
    }

    dtAdmi->dia = d;
    dtAdmi->mes = m;
    dtAdmi->ano = a;

    return dtAdmi;
}

void imprimirData(Data *dtAdmi)
{
    printf("\nData do encontro: %.2d/%.2d/%.4d", dtAdmi->dia, dtAdmi->mes, dtAdmi->ano);
}

void liberrarData(Data *dtAdmi)
{
    free(dtAdmi);
}






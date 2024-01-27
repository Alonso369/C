#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

typedef struct funcionarios Funcionarios;
typedef struct data Data;

void consultarFuncionario(Funcionarios *func, int vinculo, int nFuncionarios);
Funcionarios *inserirFuncionario(Funcionarios *func, char nome[], char cargo[], int vinculo, int nFuncionarios);
int excluirFuncionario(Funcionarios *func, char nome[], int nFuncionarios);
void imprimirFuncionarios(Funcionarios *func, int nFuncionarios);
void liberarFuncionario(Funcionarios *funconario);
Data *dataNova(Data *dtAdmi, int d, int m, int a, int nData);
void imprimirData(Data *dtAdmi);
void liberrarData(Data *dtAdmi);


#endif // FUNCOES_H_INCLUDED

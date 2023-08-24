#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cliente Cliente;

struct cliente
{
    char nome[30];
    char rua[30];
    int numero;
};

void alteraEndereco(Cliente *cliente, char rua[], int numero){
    strcpy(cliente-> rua, rua);
    cliente->numero = numero;
}

void imprimeCliente(Cliente *cliente){
    printf("\nNome: %s", cliente->nome);
    printf("\nRua: %s", cliente->rua);
    printf("\nNumero: %d\n", cliente->numero);
}

int main()
{
    Cliente c1;
    strcpy(c1.nome, "Maria");
    strcpy(c1.rua, "Rua Guarani");
    c1.numero = 10;

    imprimeCliente(&c1);
    alteraEndereco(&c1, "Avenida Tupi", 20);
    imprimeCliente(&c1);
    return 0;
}

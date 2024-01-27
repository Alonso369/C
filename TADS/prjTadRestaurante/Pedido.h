#ifndef PEDIDO_H_INCLUDED
#define PEDIDO_H_INCLUDED

typedef struct pedido Pedido;
typedef struct data Data;
typedef struct encontro Encontro;

Data *dataNova(int d, int m, int a);
void imprimirData(Data *dt);
void liberrarData(Data *dt);

Encontro *novoEncontro(Encontro *enc, Data *dt, char local[], float custoTotal, int nEncontros);
void imprimirEncontros(Encontro *enc, int nEncontros);
void liberarEncontro(Encontro *encontro);

Pedido *inserirPedido(Pedido *ped, char descricao[], int quantidade, float valor, int aux);
void imprimirPedido(Pedido *ped, int nPedidos);
void liberaPedido(Pedido *ped);
float valorConta(Pedido *ped, int nPessoas);

#endif // PEDIDO_H_INCLUDED

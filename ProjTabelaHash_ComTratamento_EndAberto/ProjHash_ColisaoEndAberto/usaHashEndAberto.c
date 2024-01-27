#include <stdio.h>
#include <stdlib.h>
#include "HashEndAberto.h"


int main(void)
{
    printf("Exemplo de uso de Tabela Hash - Tratamento de Colisoes por enderecamento aberto.\n\n");
    Hash *h = cria_tabela();
    int vazia = verifica_tabela_vazia(h);
    printf("Hash vazia? %d \n", vazia);
    printf("Inserindo itens 92, 10, 2 e 60.\n");
    insere_enderecamento_aberto(h, 92);
    insere_enderecamento_aberto(h, 10);
    insere_enderecamento_aberto(h, 2);
    insere_enderecamento_aberto(h, 60);
    vazia = verifica_tabela_vazia(h);
    printf("Hash vazia? %d\n", vazia);
    printf("Imprime itens.\n");
    imprime_tabela(h);
    printf("\nBusca item 100:\n");
    imprime_item(busca_enderecamento_aberto(h, 100));
    printf("\nBusca item 60:\n");
    imprime_item(busca_enderecamento_aberto(h, 60));

    libera_tabela(h);

    return 0;
}

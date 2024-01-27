#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprimeLinhaRecursiva(int tam, int linha, int coluna, char vetC[])
{
    if (coluna == tam)
    {
        printf("\n");
        return;
    }
    else
    {
        printf("%c ",vetC[linha*tam+coluna]);
        imprimeLinhaRecursiva(tam, linha, coluna+1, vetC);
    }
}

void imprimeLinhaIterativa(int tam, int linha, int coluna, char vetC[])
{
    for(int coluna = 0; coluna < tam; coluna++){
        printf("%c ", vetC[linha*tam+coluna]);
    }
    printf("\n");
    return;
}


void imprimeCaractere(int tam, char vetC[])
{

        for (int lin = 0; lin < tam; lin++)
        {
            imprimeLinhaIterativa(tam, lin, 0, vetC);
            //imprimeLinhaRecursiva(tam, lin, 0, vetC);
        }
}

int main()
{
    int bitpattern = 279;
    int escala = 3;
    int geracoes = 3; //simular com 3
    int i;
    int tam = 1;
    for (i=0; i < geracoes; i++)
    {
        tam*=escala;
    }

    char *vetC = malloc(tam*tam); //sizeof(char) = 1, entãonão precisa especificar

    for (i=0; i < tam*tam; i++)
    {
        vetC[i] = '.';
    }

    int tamBloco = tam/escala;
    int localX, localY, localPos;

    for (i=0; i<geracoes; i++)
    {
        for (int lin = 0; lin < tam; lin++)
        {
            for (int col = 0; col < tam; col++)
            {
                localX = (col/tamBloco);
                localX %= escala;
                localY = (lin/tamBloco);
                localY %= escala;
                localPos = localY*escala + localX;
                if (((int)(bitpattern / (pow(2, localPos))) % 2) == 0)
                {
                    vetC[lin*tam + col] = ' ';
                }
            }
        }
        tamBloco = (tamBloco / escala);
    }

    imprimeCaractere(tam, vetC);

    return 0;
}

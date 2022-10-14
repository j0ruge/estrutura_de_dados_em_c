#include <stdio.h>
#include <stdlib.h>

 /*
 * Estrutura de Dados com Algoritmos e C, PDF pág 34
 * Programa 1.4: Exemplo de uso de matrizes com várias dimensões,
 */

#define DIMENSAO_1 2
#define DIMENSAO_2 5
#define DIMENSAO_3 3
#define DIMENSAO_4 4

int main()
{
	int i, j, k, l;
	int iDeterminante;

	int aMatriz[DIMENSAO_1][DIMENSAO_2][DIMENSAO_3][DIMENSAO_4];

    /* Código para zerar uma matriz de quatro dimensões */
    for(i=0;i < DIMENSAO_1; i++)
    {
        for(j=0;j < DIMENSAO_2; j++)
        {
            for(k=0;k < DIMENSAO_3; k++)
            {
                for(l=0;l < DIMENSAO_4; l++)
                {
                    aMatriz[i][j][k][l] = i + j + k + l;
                }
            }
        }
    }

    /*
    *  Uma regra que se pode sempre levar em consideração: para cada
    *  dimensão de uma matriz, sempre haverá um laço (normalmente um for).
    *  Se houver quatro dimensoes então haverá quatro laços
    */

    for(i=0;i < DIMENSAO_1; i++)
    {
        for(j=0;j < DIMENSAO_2; j++)
        {
            for(k=0;k < DIMENSAO_3; k++)
            {
                for(l=0;l < DIMENSAO_4; l++)
                {
                    printf("\nValor para matriz em [%d] [%d] [%d] [%d] = %d", i, j, k, l, aMatriz[i][j][k][l]);
                }
            }
        }
    }
	return EXIT_SUCCESS;
}

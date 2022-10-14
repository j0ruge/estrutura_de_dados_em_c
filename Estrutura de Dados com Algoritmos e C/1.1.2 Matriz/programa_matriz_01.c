#include <stdio.h>
#include <stdlib.h>

 /*
 * Estrutura de Dados com Algoritmos e C, PDF pág 33
 * Programa 1.3: Exemplo de uso de matrizes,
 */


#define DIMENSAO_LINHA 2
#define DIMENSAO_COLUNA 2

int main()
{
	int iLinha, iColuna;
	int iDeterminante;

	int iValorA;
	int aMatriz[DIMENSAO_LINHA][DIMENSAO_COLUNA];

	/* Uma regra que se pode sempre levar em consideração:
     * para cada dimensão de uma matriz, sempre haverá um laço
     * (normalmente um for). Se houver duas dimensões, então haverá dois laços.
    */

    for(iLinha=0; iLinha < DIMENSAO_LINHA; iLinha++)
    {
        for(iColuna=0; iColuna < DIMENSAO_COLUNA; iColuna++)
        {
            printf("Entre item %d %d: ",iLinha + 1, iColuna + 1);
            scanf("%d", &iValorA);
            aMatriz[iLinha][iColuna]=iValorA;
        }
    }

    iDeterminante = ( aMatriz[0][0] * aMatriz[1][1] ) - (aMatriz[0][1] * aMatriz[1][0]);
    printf("Determinante : %d\n", iDeterminante);

	return EXIT_SUCCESS;
}

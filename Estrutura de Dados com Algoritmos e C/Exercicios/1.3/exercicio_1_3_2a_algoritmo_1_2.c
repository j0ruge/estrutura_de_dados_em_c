#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define DIMENSAO_LINHA 2
#define DIMENSAO_COLUNA 2
 /*
 * Estrutura de Dados com Algoritmos e C, PDF pág 42
 * Exercício 1.3.2a
 * Algoritmo 1.2: Cálculo da posição de índices de uma matriz na memória
 */

void imprime_matriz_elemento_estatica(int *[*][2], int *, int *);

int aMatriz[DIMENSAO_LINHA][DIMENSAO_COLUNA];




int main()
{
    setlocale(LC_ALL, "Portuguese");

    aMatriz[0][0]=5;
    aMatriz[0][1]=7;
    aMatriz[1][0]=12;
    aMatriz[1][1]=32;

    int iLine = 1;
    int iColumn = 1;


    imprime_matriz_elemento_estatica(&aMatriz[DIMENSAO_LINHA][DIMENSAO_COLUNA], &iLine, &iColumn);

	return EXIT_SUCCESS;
}

void imprime_matriz_elemento_estatica(int *paMatriz[2][2], int *piLinha, int *piColuna)
{
    int indiceLinha;
    int indiceColuna;



    printf("Endereço da Matrix em %d\n",paMatriz);
    printf("%d\n",matriz_index_memory_location(paMatriz, piLinha, piColuna));

    for(indiceLinha=0; indiceLinha < DIMENSAO_LINHA; indiceLinha++)
    {
        for(indiceColuna=0; indiceColuna < DIMENSAO_COLUNA; indiceColuna++)
        {
            printf("%d, %d - Alocado na memória em: %d\n", indiceLinha, indiceColuna, matriz_index_memory_location(paMatriz, 2, indiceLinha, indiceColuna));
        }
    }

};


int matriz_index_memory_location(int aMatriz, int totalColumns, int lineIndex,  int columnIndex){
    return  aMatriz + ( (lineIndex*totalColumns*sizeof(int) ) + ( columnIndex*sizeof(int) ) );
}

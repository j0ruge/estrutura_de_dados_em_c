#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

 /*
 * Estrutura de Dados com Algoritmos e C, PDF p�g 46.
 * Programa 2.2: Declara��o de matriz como ponteiro
 */


 /*
    Quando se quer criar estruturas com dois �ndices (matrizes), tr�s �ndices
    (tijolos) etc. A declara��o da matriz seria algo como int aMatriz[2][3];,
    utilizando ponteiros para declarar uma matriz deve-se usar:
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int **aMatriz;

    aMatriz = (int**) malloc(2 * sizeof(int)); /* 2 linhas */
    int i;
    for (i=0; i < 2; i++)
    {
        aMatriz[i] = (int*) malloc(3 * sizeof(int)); /* 3 colunas */
    }


	return EXIT_SUCCESS;
}

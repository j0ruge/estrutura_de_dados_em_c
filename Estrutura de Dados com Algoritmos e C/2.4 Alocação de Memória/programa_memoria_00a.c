#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

 /*
 * Estrutura de Dados com Algoritmos e C, PDF pág 46
 * Programa 2.1: Declaração de vetor como ponteiro
 */


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *aVetor;

    aVetor = (int*) malloc(10 * sizeof(int));


	return EXIT_SUCCESS;
}

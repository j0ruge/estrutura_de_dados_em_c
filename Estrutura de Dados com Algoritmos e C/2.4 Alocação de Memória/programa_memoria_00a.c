#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

 /*
 * Estrutura de Dados com Algoritmos e C, PDF p�g 46
 * Programa 2.1: Declara��o de vetor como ponteiro
 */


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *aVetor;

    aVetor = (int*) malloc(10 * sizeof(int));


	return EXIT_SUCCESS;
}

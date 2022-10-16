#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

 /*
 * Estrutura de Dados com Algoritmos e C, PDF pág 39
 * Programa 1.8: Vetor como ponteiro
 */


int main()
{
    setlocale(LC_ALL, "Portuguese");

    char t[5];

    strcpy(t,"abcde");

    printf("\n%ld %c", t, *t);
    printf("\n%ld %c", t+1, *(t+1));
    printf("\n%ld %c", t+2, *(t+2));
    printf("\n%ld %c", t+3, *(t+3));
    printf("\n%ld %c", t+4, *(t+4));


	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

 /*
 * Estrutura de Dados com Algoritmos e C, PDF pág 36
 * Programa 1.5: Exemplo de uso de ponteiros.
 */


int main()
{
    int *piValor; /* ponteiro para inteiro */

    int iVariavel = 27121975;


    piValor=&iVariavel; /* pegando o endereço de memória da variável */

    printf ("Endereco de piValor: %d\n", piValor);
    printf ("Valor apontado por piValor: %d\n", *piValor);

    *piValor=18011982;
    printf ("\nValor alterado de iVarivael: %d\n", iVariavel);
    printf ("Endereco de piValor: %d\n", piValor);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 /*
 * Estrutura de Dados com Algoritmos e C, PDF pág 38
 * Programa 1.7: Aritmética com ponteiros.
 */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *piValor;
    int iValor;

    char *pcValor;
    char cValor;

    piValor = &iValor;
    pcValor = &cValor;


    printf ("Endereco de piValor = %d\n", piValor);
    printf ("Endereco de pcValor = %d\n", pcValor);

    piValor++; /* somando uma unidade (4 bytes) na memória */
    pcValor++; /* somando uma unidade (1 byte) na memória */
    printf ("\nApós incremento de piValor e pcValor\n");
    printf ("====================================\n");


    printf ("Endereco de piValor = %d\n", piValor);
    printf ("Endereco de pcValor = %d\n", pcValor);


	return EXIT_SUCCESS;
}



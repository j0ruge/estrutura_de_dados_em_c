#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

 /*
 * Estrutura de Dados com Algoritmos e C, PDF p�g 41
 * Programa 1.10: Exemplo de uso de estruturas com vetores
 */

 struct DADO
 {
     char sNome[40];
     int iIdade;
 };


int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct DADO sDados[5];
    int iIndice;

    /*  A estrutura � dividida em duas partes por um ponto (.).
        Tem-se o nome da estrutura � esquerda e o nome do campo � direita.
        Neste exemplo, como est� sendo manipulado um vetor de estruturas, tamb�m tem �ndice para cada linha do vetor. */

    for(iIndice=0;iIndice<5;iIndice++)
    {
        printf("\nEntre com o Nome -> ");
        scanf("%s", &sDados[iIndice].sNome);
        printf("\nEntre com a Idade -> ");
        scanf("%d", &sDados[iIndice].iIdade);
    }

        for(iIndice=0;iIndice<5;iIndice++)
    {
        printf("\n%s tem %d anos", sDados[iIndice].sNome, sDados[iIndice].iIdade);
    }


	return EXIT_SUCCESS;
}

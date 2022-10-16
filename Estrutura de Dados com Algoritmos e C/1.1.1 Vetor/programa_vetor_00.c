#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

 /*
 * Estrutura de Dados com Algoritmos e C, PDF pág 28
 * Programa 1.1: Declaração de vetor em C
 */


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i[3];
    i[0]=21;
    i[1]=22;
    i[2]=24;

    char c[4];
    c[0]='a';
    c[1]='b';
    c[2]='c';
    c[3]='d';

    int position;
    for(position=0;position<3;position++)
    {
            printf("%d\n", i[position]);
    }

    for(position=0;position<4;position++)
    {
            printf("%c\n", c[position]);
    }



	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO_ARRAY 10
 /*
 * Estrutura de Dados com Algoritmos e C, PDF p�g 42
 * Exerc�cio 1.3.1
 * Algoritmo 1.1: C�lculo da posi��o de �ndices de um vetor na mem�ria
 */

 void imprime_array_elemento(int *, int);
 int int_memory_array_index_position(int, int);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int aNumerosPares[TAMANHO_ARRAY] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    imprime_array_elemento(&aNumerosPares, 6);
	return EXIT_SUCCESS;
}

void imprime_array_elemento(int *aArray, int iElemento){
    int memoryPosition = 0;
    int iIndice;
    for(iIndice=0; iIndice < TAMANHO_ARRAY; iIndice++)
    {
    	if( iIndice == (iElemento-1))
		{
    		printf("\nElemento desejado tem Valor %d e foi encontrado no �ndice %d do Array.\n", aArray[iIndice], iIndice);
            printf("Este valor est� alocado no endere�o de mem�ria: %ld\n", int_memory_array_index_position(aArray, iIndice));
		}
    }
    printf("\nTodos elementos\n");
    for(iIndice=0; iIndice < TAMANHO_ARRAY; iIndice++)
    {
        printf("Indice: %d, Elemento: %d, Valor: %d, Endere�o de Mem�ria: %d\n",
                iIndice,
                (iIndice+1),
                aArray[iIndice],
                int_memory_array_index_position(aArray, iIndice)
               );
    }
    printf("\nEndereco do Array: %d\n", aArray);
};

int int_memory_array_index_position(int aArray,int index){
	return  aArray + ((index)*sizeof(int));
}
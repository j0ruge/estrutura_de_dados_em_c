
/* Estudo do uso da função malloc */

#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>


int *vetor;
#define INT_BYTE_SIZE 4;


void printIntegerVectorAddressAndValue(int vector[], int numberOfVectorElements){	
	int index;	
	
	for(index=0; index < numberOfVectorElements ; index++){
		printf("\n Index: %d | Memory Address: %d | Value: %d\n", index, &vector[index], vector[index]);
	}
}


	
int main ( void )
{
	vetor = (int *) malloc(10 * sizeof(int) );
	if (vetor==NULL)
	{		
		printf("Memoria insuficiente.\n");
		exit(1); /* aborta o programa e retorna 1 para o sist. operacional */
	}
		
	printIntegerVectorAddressAndValue(vetor, 10);
	free(vetor);
	return 0;
}

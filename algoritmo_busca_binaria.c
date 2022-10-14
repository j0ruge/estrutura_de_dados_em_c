
/* https://pt.khanacademy.org/computing/computer-science/algorithms/binary-search/a/implementing-binary-search-of-an-array 

	https://blog.pantuza.com/artigos/busca-binaria

	1) Defina min = 0 e max = n-1.
	2) Calcule chute como sendo a média entre max e min, arrendonde para baixo (então será um número inteiro).
	3) Se array[chute] for igual ao alvo, então pare. Você o encontrou! Retorne chute.
	4) Se o chute for muito baixo, ou seja, array[chute] < alvo, então defina min = chute + 1.
	5) Caso contrário, o chute foi muito alto. Defina max = chute - 1.
	6) Volte para o passo 2.
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>


int binarySearch(int array[], int target){
	
	int min_array_size = 0;
	int max_array_size = sizeof(array)/sizeof(int);
	int media = (min_array_size+(max_array_size-1)/2);	
	int guess = media;
	
	
	while (guess > -1 )	
{
	
	if (array[guess] == target)	
	{
		printf("Code here");
		return guess;
	}
	if (array[guess] < target)	{
		min_array_size = guess + 1;
	} else {
		
	}	
}
	
} 

int array;

int array_elements_qtd; 

int vetor_primes_numbers[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
#define INT_BYTE_SIZE 4;


void printIntegerVectorAddressAndValue(int vector[], int numberOfVectorElements){	
	int index;	
	
	for(index=0; index < numberOfVectorElements ; index++){
		printf("\n Index: %d | Memory Address: %d | Value: %d\n", index, &vector[index], vector[index]);
	}
}


	
int main ( void )
{	
	
	
	printf("%d", vetor_primes_numbers[12]);	
	binarySearch(vetor_primes_numbers, 41);
		
	
	//free(vetor_primes_numbers);
	//return 0;
}

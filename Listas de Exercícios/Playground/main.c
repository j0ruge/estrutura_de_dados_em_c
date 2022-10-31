#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "tools.h"

#define ARRAY_SIZE 25


int array;

int array_elements_qtd;

int vetor_primes_numbers[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
//int vetor_primes_numbers[] = { 2, 3, 5, 7, 11, 13, 17, 2, 23, 29, 31, 37, 41, 2, 47, 53, 59, 61, 2, 71, 73, 1, 83, 89, 97 };
#define INT_BYTE_SIZE 4;


void printIntegerVectorAddressAndValue(int vector[], int numberOfVectorElements) {
	int index;

	for (index = 0; index < numberOfVectorElements; index++) {
		printf("\n Index: %d | Memory Address: %d | Value: %d\n", index, &vector[index], vector[index]);
	}
}

int main(int argc, char* argv[])
{	
	setlocale(LC_ALL, "Portuguese");

	imprimir_vetor(vetor_primes_numbers, ARRAY_SIZE);
	//int result = binarySearch(vetor_primes_numbers, 100, 25);
	//printf("\nO resultado da busca binária é: %d\n", result);

	printf("\nDepois de excluir o elemento");
	imprimir_vetor(vetor_primes_numbers, ARRAY_SIZE);

	int menor = buscar_menor_elemento(vetor_primes_numbers, ARRAY_SIZE);
	printf("\nO menor elemento é: %d", menor);

	
	return 0;
}



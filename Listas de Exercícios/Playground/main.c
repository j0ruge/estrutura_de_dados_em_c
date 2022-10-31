#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "tools.h"

#define ARRAY_SIZE 25

int array;
int array_elements_qtd;
int vetor_primes_numbers[ARRAY_SIZE] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };

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

	//VETOR DINÂMICO
	int quantidade_elementos;
	int quantidade_total_elementos;
	int* vetor_dinamico = NULL;

	vetor_dinamico = incluir_valor(vetor_dinamico, 46, &quantidade_elementos, &quantidade_total_elementos);
	vetor_dinamico = incluir_valor(vetor_dinamico, 22, &quantidade_elementos, &quantidade_total_elementos);
	vetor_dinamico = incluir_valor(vetor_dinamico, 720, &quantidade_elementos, &quantidade_total_elementos);
	vetor_dinamico = incluir_valor(vetor_dinamico, 88, &quantidade_elementos, &quantidade_total_elementos);
	vetor_dinamico = incluir_valor(vetor_dinamico, 2015, &quantidade_elementos, &quantidade_total_elementos);
	vetor_dinamico = incluir_valor(vetor_dinamico, 13, &quantidade_elementos, &quantidade_total_elementos);	

	imprimir_vetor(vetor_dinamico, quantidade_elementos);

	exluir_elemento(vetor_dinamico, quantidade_elementos, 13);
	exluir_elemento(vetor_dinamico, quantidade_elementos, 720);

	//int result = binarySearch(vetor_primes_numbers, 100, 25);
	//printf("\nO resultado da busca binária é: %d\n", result);

	printf("\nDepois de excluir o elemento");

	vetor_dinamico = incluir_valor(vetor_dinamico, 1984, &quantidade_elementos, &quantidade_total_elementos);
	vetor_dinamico = incluir_valor(vetor_dinamico, 1880, &quantidade_elementos, &quantidade_total_elementos);
	imprimir_vetor(vetor_dinamico, quantidade_elementos);

	int menor = buscar_menor_elemento(vetor_dinamico, quantidade_total_elementos);
	printf("\nO menor elemento é: %d", menor);
	alterar_elemento(vetor_dinamico, quantidade_elementos, 1880, 65234);
	imprimir_vetor(vetor_dinamico, quantidade_elementos);
	
	return 0;
}



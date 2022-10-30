
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NOT_FOUND -1


int binarySearch(int array[], int target_element, int max_array_size) {
	int min_array_size = 0;
	max_array_size = max_array_size - 1;
	int media = 0;
	int guess = 0;

	while (min_array_size <= max_array_size)
	{
		media = (min_array_size + max_array_size) / 2;
		guess = media;

		if (array[guess] == target_element)
		{
			return guess;
		}
		if (array[guess] < target_element) {
			min_array_size = guess + 1;
		}
		else {
			max_array_size = guess;
		}
	}
	return NOT_FOUND;
}

int array;

int array_elements_qtd;

//int vetor_primes_numbers[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
int vetor_primes_numbers[] = { 2, 3, 5, 7, 11, 13, 17, 2, 23, 29, 31, 37, 41, 2, 47, 53, 59, 61, 2, 71, 73, 79, 83, 89, 97 };
#define INT_BYTE_SIZE 4;


void printIntegerVectorAddressAndValue(int vector[], int numberOfVectorElements) {
	int index;

	for (index = 0; index < numberOfVectorElements; index++) {
		printf("\n Index: %d | Memory Address: %d | Value: %d\n", index, &vector[index], vector[index]);
	}
}

void imprimir_vetor(int* vetor, int quantidade_total_elementos) {
	printf("\nTotal de elementos do vetor = %d", quantidade_total_elementos);
	int indice;
	for (indice = 0; indice < quantidade_total_elementos; indice++) {
		printf("\nVET[%d] = %d", indice, vetor[indice]);
	}
}

void exluir_elemento(int* vetor, int quantidade_elementos, int elemento);

int main(int argc, char* argv[])
{	
	setlocale(LC_ALL, "Portuguese");

	imprimir_vetor(vetor_primes_numbers, 25);
	//int result = binarySearch(vetor_primes_numbers, 100, 25);
	//printf("\nO resultado da busca binária é: %d\n", result);
	exluir_elemento(vetor_primes_numbers, 25, 41);
	exluir_elemento(vetor_primes_numbers, 25, 43);
	exluir_elemento(vetor_primes_numbers, 25, 47);
	exluir_elemento(vetor_primes_numbers, 25, 2);
	printf("\nDepois de excluir o elemento");
	imprimir_vetor(vetor_primes_numbers, 25);
	
	return 0;
}


void exluir_elemento(int* vetor, int quantidade_elementos, int elemento) {
	int indice_procurado;
	int indice;
	int ELEMENTO_EXCLUIDO = -1;
	for (indice = 0; indice < quantidade_elementos; indice++) {
		if (vetor[indice] == elemento) {
			vetor[indice] = ELEMENTO_EXCLUIDO;			
		}
	}	
}
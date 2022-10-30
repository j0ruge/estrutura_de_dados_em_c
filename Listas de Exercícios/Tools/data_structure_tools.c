#include <stdio.h>
#include "data_structure_tools.h"


void imprimir_vetor(int* vetor_estatico, int quantidade_total_elementos) {
	printf("\nTotal de elementos do vetor = %d", quantidade_total_elementos);
	int indice;
	for (indice = 0; indice < quantidade_total_elementos; indice++) {
		printf("\nVET[%d] = %d", indice, vetor_estatico[indice]);
	}
}

/*Objetivo: buscar um elemento no vetor
entrada: vetor, a quantidade de elementos do vetor e o elemento a ser procurado
saida: se encontrou o elemento, retornar o índice onde o mesmo está localizado.
Caso contrário, retornar -1
*/
int buscar_elemento(int* vetor, int quantidade_elementos, int elemento) {
	int indice_procurado;
	int indice;
	for (indice = 0; indice < quantidade_elementos; indice++) {
		if (vetor[indice] == elemento) {
			indice_procurado = indice;
			return indice_procurado;
		}
	}
	return NOT_FOUND;
}

int buscar_maior_elemento(int* vetor, int quantidade_elementos) {
	int maior_elemento = vetor[0];
	int indice;
	for (indice = 1; indice < quantidade_elementos; indice++) {
		if (vetor[indice] > maior_elemento) {
			maior_elemento = vetor[indice];
		}
	}
	return maior_elemento;
}
int buscar_menor_elemento(int* vetor, int quantidade_elementos) {
	int menor_elemento = vetor[0];
	int indice;
	for (indice = 1; indice < quantidade_elementos; indice++) {
		if (vetor[indice] < menor_elemento) {
			menor_elemento = vetor[indice];
		}
	}
	return menor_elemento;
}

/*TERMINAR DE REFATORAR*/
void bubble_sort(int* vetor, int quantidade_elementos) {
	int i, j, aux;

	for (i = quantidade_elementos - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (vetor[j] > vetor[j + 1]) {
				aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
			}
		}
	}
}

int binarySearch(int array[], int target_element, int array_size) {
	int array_begin_position = 0;
	int array_end_position = array_size - 1;
	int media = 0;
	int guess_index_position = 0;

	while (array_begin_position <= array_end_position)
	{
		media = (array_begin_position + array_end_position) / 2;
		guess_index_position = media;

		if (array[guess_index_position] == target_element)
		{
			return guess_index_position;
		}
		if (array[guess_index_position] < target_element) {
			array_begin_position = guess_index_position + 1;
		}
		else {
			array_end_position = guess_index_position - 1;
		}
	}
	return NOT_FOUND;
}
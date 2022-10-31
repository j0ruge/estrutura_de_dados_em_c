#include "tools.h"

void exluir_elemento(int* vetor, int quantidade_elementos, int elemento) {	
	int indice;
	int ELEMENTO_EXCLUIDO = -1;
	for (indice = 0; indice < quantidade_elementos; indice++) {
		if (vetor[indice] == elemento) {
			vetor[indice] = ELEMENTO_EXCLUIDO;
		}
	}
}

int buscar_menor_elemento(int* vetor, int quantidade_elementos) {
	int menor_elemento = 0;
	int const ELEMENTO_EXCLUIDO = -1;
	int indice = 0;
	indice = findFirstVectorValidValue(vetor, quantidade_elementos, indice, &menor_elemento, ELEMENTO_EXCLUIDO);

	for (indice; indice < quantidade_elementos; indice++) {
		if (vetor[indice] < menor_elemento && (vetor[indice] > ELEMENTO_EXCLUIDO)) {
			menor_elemento = vetor[indice];
		}
	}
	return menor_elemento;
}

int findFirstVectorValidValue(int* vetor, int quantidade_elementos, int indice, int* menor_elemento, int const ELEMENTO_EXCLUIDO) {
	if (vetor[0] == ELEMENTO_EXCLUIDO) {
		for (indice = 1; indice < quantidade_elementos; indice++) {
			if (vetor[indice] > ELEMENTO_EXCLUIDO) {
				*menor_elemento = vetor[indice];
				break;
			}
		}
	}
	else
	{
		*menor_elemento = vetor[0];		
	}
	return ++indice;
};

// Acessórios
void imprimir_vetor(int* vetor, int quantidade_total_elementos){
	printf("\nTotal de elementos do vetor = %d", quantidade_total_elementos);
	int indice;
	for (indice = 0; indice < quantidade_total_elementos; indice++) {
		printf("\nVET[%d] = %d", indice, vetor[indice]);
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
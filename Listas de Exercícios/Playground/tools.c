#include "tools.h"



int vetor_vazio(int* vetor) {
	return vetor == NULL;
}

int* incluir_valor(int* vetor_dinamico, int valor, int* quantidade_elementos, int* quantidade_total_elementos) {
	if (vetor_vazio(vetor_dinamico)) //ou poderia ser if(qtd==0) ou if(!qtd)
	{
		printf("\nO vetor estava vazio - primeira alocação!");
		vetor_dinamico = (int*)malloc(FATOR_REALLOC * sizeof(int));
		if (!vetor_dinamico) { //não conseguiu espaço em memória
			return NULL;
		}
		*quantidade_total_elementos = 2;
		*quantidade_elementos = 0;
	}
	int excluded_value_index = findFirstVectorExcludedValue(vetor_dinamico, *quantidade_elementos);
	if (*quantidade_elementos == *quantidade_total_elementos && excluded_value_index == NOT_FOUND) { //meu vetor está cheio
		printf("\nO vetor precisa de realocação!");
		vetor_dinamico = (int*)realloc(vetor_dinamico, (*quantidade_total_elementos * FATOR_REALLOC) * sizeof(int));
		if (!vetor_dinamico) { //não conseguiu espaço em memória
			return NULL;
		}
		*quantidade_total_elementos = *quantidade_total_elementos * FATOR_REALLOC;
	}
	if (excluded_value_index != NOT_FOUND) {
		vetor_dinamico[excluded_value_index] = valor;
	}
	else {
		vetor_dinamico[*quantidade_elementos] = valor;
		*quantidade_elementos = *quantidade_elementos + 1;
	}
	return vetor_dinamico;
}


int findFirstVectorExcludedValue(int* vetor, int quantidade_elementos) {
	if (quantidade_elementos == 0) {
		return NOT_FOUND;
	}
	int const ELEMENTO_EXCLUIDO = -1;
	int index;
	for (index = 0; index < quantidade_elementos; index++) {
		if (vetor[index] == ELEMENTO_EXCLUIDO) {
			return index;
			break;
		}
	}	
	return NOT_FOUND;
};


int alterar_elemento(int* vetor, int quantidade_elementos, int elemento_original, int elemento_substituto) {
	int indice;
	int ultimo_indice_atualizado;	
	for (indice = 0; indice < quantidade_elementos; indice++) {
		if (vetor[indice] == elemento_original) {
			vetor[indice] = elemento_substituto;
			ultimo_indice_atualizado = indice;
			return ultimo_indice_atualizado;
		}
	}
	return NOT_FOUND;
}


int exluir_elemento(int* vetor, int quantidade_elementos, int elemento) {
	int indice;
	int ultimo_indice_exluido;
	int ELEMENTO_EXCLUIDO = -1;
	for (indice = 0; indice < quantidade_elementos; indice++) {
		if (vetor[indice] == elemento) {
			vetor[indice] = ELEMENTO_EXCLUIDO;
			ultimo_indice_exluido = indice;
			return ultimo_indice_exluido;
		}
	}
	return NOT_FOUND;
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
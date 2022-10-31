#define __GETCHAR__ if (getchar()=='\n') (void*) getchar();
#define NOT_FOUND -1
#define FATOR_REALLOC 2



int vetor_vazio(int* vetor);
int* incluir_valor(int* vetor_dinamico, int valor, int* quantidade_elementos, int* quantidade_total_elementos);
void imprimir_vetor(int* vetor, int quantidade_elementos);
int buscar_elemento(int* vetor, int quantidade_elementos, int elemento);
int exluir_elemento(int* vetor, int quantidade_elementos, int elemento);
int buscar_maior_elemento(int* vetor, int quantidade_elementos);
int buscar_menor_elemento(int* vetor, int quantidade_elementos);
void bubble_sort(int* vetor, int quantidade_elementos);

/*	
	📝 IMPORTANT NOTE: Before using this function, ensure that the array is ordinarily sorted first.
	Return the index of the target element, if it exists, otherwise return NOT_FOUND (-1).	
*/
int binarySearch(int array[], int target_element, int array_size);
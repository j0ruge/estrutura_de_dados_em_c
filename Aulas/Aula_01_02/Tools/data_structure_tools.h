#define __GETCHAR__ if (getchar()=='\n') (void*) getchar();

void imprimir_vetor(int* vetor, int quantidade_elementos);
int buscar_elemento(int* vetor, int quantidade_elementos, int elemento);
int buscar_maior_elemento(int* vetor, int quantidade_elementos);
int buscar_menor_elemento(int* vetor, int quantidade_elementos);
void bubble_sort(int* vetor, int quantidade_elementos);
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <conio.h>
#include <locale.h>
#define NOT_FOUND -1;

//const int NOT_FOUND = -1;


/*OBJETIVO: Vetor Estático*/

void informar_dados_vetor(int* vetor_estatico, int qtd);
void imprimir_vetor(int* vetor_estatico, int quantidade);
int buscar_elemento(int* vetor_estatico, int quantidade, int elemento);

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Portuguese");

	int* vetor_estatico = NULL;
	int quantidade = 5;

	vetor_estatico = (int*)malloc(quantidade * sizeof(int));

	informar_dados_vetor(vetor_estatico, quantidade);
	imprimir_vetor(vetor_estatico, quantidade);

	int resultado = buscar_elemento(vetor_estatico, quantidade, 13);

	printf("\nÍndice do elemento no vetor estático: %d", resultado);

	return 0;
};

void imprimir_vetor(int* vetor_estatico, int quantidade) {
	printf("\nTotal de elementos do vetor = %d", quantidade);
	int indice;
	for (indice = 0; indice < quantidade; indice++) {
		printf("\nVET[%d] = %d", indice, vetor_estatico[indice]);
	}
	getchar();	
}

void informar_dados_vetor(int* vetor_estatico, int qtd) {
	printf("\nTotal de elementos do vetor = %d\n", qtd);
	int i;
	for (i = 0; i < qtd; i++) {
		printf("VET[%d] = ", i);
		scanf_s("%d", &vetor_estatico[i]);
	}
	getchar();	
}

/*Objetivo: buscar um elemento no vetor
entrada: vetor, a quantidade de elementos do vetor e o elemento a ser procurado
saida: se encontrou o elemento, retornar o índice onde o mesmo está localizado.
Caso contrário, retornar -1
*/
int buscar_elemento(int* vetor_estatico, int quantidade, int elemento) {
	int indice;
	for (indice = 0; indice < quantidade; indice++) {
		if (vetor_estatico[indice] == elemento) {
			return indice;
		}
	}
	return NOT_FOUND;
}
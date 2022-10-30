#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

#define __GETCHAR__ if (getchar()=='\n') getchar();
const int NOT_FOUND = -1;

/*OBJETIVO: Vetor Estático*/

void informar_dados_vetor(int* vetor_estatico, int quantidade_elementos);
void imprimir_vetor(int* vetor_estatico, int quantidade_elementos);
int buscar_elemento(int* vetor_estatico, int quantidade_elementos, int elemento);
int buscar_maior_elemento(int* vetor_estatico, int quantidade_elementos);
int buscar_menor_elemento(int* vetor_estatico, int quantidade_elementos);
void bubble_sort(int* vetor_estatico, int quantidade_elementos);
void bubble_sort_v2(int* vetor_estatico, int quantidade_elementos);

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int opcao =0;
	int sair = 0;
	int quantidade_elementos = 0;
	int elemento = 0;

	int* vetor_estatico = NULL;

	do
	{
		system("cls");
		printf("\n(1) Informar quantos elementos tem o vetor");
		printf("\n(2) Informar os elementos do vetor");
		printf("\n(3) Imprimir os elementos do vetor");
		printf("\n(4) Buscar um elemento no vetor");
		printf("\n(5) Buscar o maior elemento do vetor");
		printf("\n(6) Buscar o menor elemento do vetor");
		printf("\n(7) Ordenar o vetor");
		printf("\n(8) Sair");
		printf("\n\nDigite uma opção: ");
		scanf_s("%d", &opcao);
		switch (opcao) {
		case 1:
			do
			{
				system("cls");
				printf("\nInforme a quantidade de elementos do vetor: ");
				scanf_s("%d", &quantidade_elementos);
			} while (quantidade_elementos < 0);
			vetor_estatico = (int*)malloc(quantidade_elementos * sizeof(int));
			__GETCHAR__;
			break;
		case 2:
			informar_dados_vetor(vetor_estatico/*referencia- o nome do vetor, por definição já é um ponteiro*/,
				quantidade_elementos);
			__GETCHAR__;
			break;
		case 3:
			imprimir_vetor(vetor_estatico, quantidade_elementos);
			__GETCHAR__;
			break;
		case 4:
			printf("\nInforme o numero a ser procurado: ");
			scanf_s("%d", &elemento);
			int indice_elemento = buscar_elemento(vetor_estatico, quantidade_elementos, elemento);
			if (indice_elemento != NOT_FOUND) {
				printf("Elemento encontrado na posição %d", indice_elemento);
			}
			else {
				printf("Elemento nao encontrado no vetor!");
			}
			__GETCHAR__;
			break;
		case 5:
			printf("\nO maior elemento do vetor é: %d", buscar_maior_elemento(vetor_estatico, quantidade_elementos));
			__GETCHAR__;
			break;
		case 6:
			printf("\nO menor elemento do vetor eh: %d", buscar_menor_elemento(vetor_estatico, quantidade_elementos));
			__GETCHAR__;
			break;
		case 7:
			bubble_sort(vetor_estatico, quantidade_elementos);
			break;
		case 8:
			printf("Sair");
			sair = 1;
			break;
		default:
			printf("Opcao Invalida!");
			__GETCHAR__;
			sair = 0;
		}
	} while (!sair);

	/*int* vetor_estatico = NULL;
	int quantidade_elementos = 5;

	vetor_estatico = (int*)malloc(quantidade_elementos * sizeof(int));
	*/

	informar_dados_vetor(vetor_estatico, quantidade_elementos);
	imprimir_vetor(vetor_estatico, quantidade_elementos);

	int resultado = buscar_elemento(vetor_estatico, quantidade_elementos, 13);

	printf("\nÍndice do elemento no vetor estático: %d", resultado);

	return EXIT_SUCCESS;
};

void imprimir_vetor(int* vetor_estatico, int quantidade_elementos) {
	printf("\nTotal de elementos do vetor = %d", quantidade_elementos);
	int indice;
	for (indice = 0; indice < quantidade_elementos; indice++) {
		printf("\nVET[%d] = %d", indice, vetor_estatico[indice]);
	}
}

void informar_dados_vetor(int* vetor_estatico, int quantidade_elementos) {
	printf("\nTotal de elementos do vetor = %d\n", quantidade_elementos);
	int i;
	for (i = 0; i < quantidade_elementos; i++) {
		printf("VET[%d] = ", i);
		scanf_s("%d", &vetor_estatico[i]);
	}
}

/*Objetivo: buscar um elemento no vetor
entrada: vetor, a quantidade de elementos do vetor e o elemento a ser procurado
saida: se encontrou o elemento, retornar o índice onde o mesmo está localizado.
Caso contrário, retornar -1
*/
int buscar_elemento(int* vetor_estatico, int quantidade, int elemento) {
	int indice_procurado;
	int indice;
	for (indice = 0; indice < quantidade; indice++) {
		if (vetor_estatico[indice] == elemento) {
			indice_procurado = indice;
			return indice_procurado;
		}
	}
	return NOT_FOUND;
}

int buscar_maior_elemento(int* vetor_estatico, int quantidade_elementos) {
	int maior_elemento = vetor_estatico[0];
	int indice;
	for (indice = 1; indice < quantidade_elementos; indice++) {
		if (vetor_estatico[indice] > maior_elemento) {
			maior_elemento = vetor_estatico[indice];
		}
	}
	return maior_elemento;
}
int buscar_menor_elemento(int* vetor_estatico, int quantidade_elementos) {
	int menor_elemento = vetor_estatico[0];
	int indice;
	for (indice = 1; indice < quantidade_elementos; indice++) {
		if (vetor_estatico[indice] < menor_elemento) {
			menor_elemento = vetor_estatico[indice];
		}
	}
	return menor_elemento;
}

/*TERMINAR DE REFATORAR*/
void bubble_sort(int* vetor_estatico, int quantidade_elementos) {
	int i, j, aux;

	for (i = quantidade_elementos - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (vetor_estatico[j] > vetor_estatico[j + 1]) {
				aux = vetor_estatico[j];
				vetor_estatico[j] = vetor_estatico[j + 1];
				vetor_estatico[j + 1] = aux;
			}
		}
	}
}

/* Ordena o vetor - AINDA NÃO FUNCIONAL */
void bubble_sort_v2(int* vetor_estatico, int quantidade_elementos) {
	const int TROCA_NAO_REALIZADA = 0;
	const int TROCA_REALIZADA = 1;
	int troca;
	int copia;
	int contador = 0;
	int indice, indice_seguinte;
	do
	{
		troca = TROCA_NAO_REALIZADA;
		contador++;
		for (indice = 0; indice < quantidade_elementos; indice++)
		{
			indice_seguinte = indice + 1;
			if (vetor_estatico[indice] > vetor_estatico[indice_seguinte]) {
				copia = vetor_estatico[indice];
				vetor_estatico[indice] = vetor_estatico[indice_seguinte];
				vetor_estatico[indice_seguinte] = copia;
				troca = TROCA_REALIZADA;
			}
		}
	} while (troca); // enquanto não existir pelo menos uma cópia.	
}
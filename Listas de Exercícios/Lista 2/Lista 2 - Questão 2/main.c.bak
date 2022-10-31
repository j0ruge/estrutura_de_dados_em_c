#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include "..\..\Tools\data_structure_tools.h"

/*OBJETIVO: Vetor Dinâmico*/

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	int sair = 0;
	int quantidade_elementos = 0;
	int quantidade_total_elementos = 0;
	int elemento, valor;

	int* vetor_dinamico = NULL;


	do {
		system("cls");
		printf("\n(1) Incluir numero");
		printf("\n(2) Imprimir os elementos do vetor");
		printf("\n(3) Buscar um elemento no vetor");
		printf("\n(4) Buscar o maior elemento do vetor");
		printf("\n(5) Buscar o menor elemento do vetor");
		printf("\n(6) Ordenar o vetor");
		printf("\n(7) Realizar busca binária (Ordenar Primeiro)");
		printf("\n(8) Excluir número");
		printf("\n(9) Sair");
		printf("\n\nDigite uma opcao: ");
		scanf_s("%d", &opcao);

		switch (opcao) {
		case 1:
			printf("\nInforme o valor a ser incluido: ");
			scanf_s("%d", &valor);
			vetor_dinamico = incluir_valor(vetor_dinamico, valor, &quantidade_elementos, &quantidade_total_elementos);
			if (!vetor_dinamico) {
				printf("\nO vetor estava cheio e nao foi possivel realoca-lo");
			}
			printf("\nquantidade de elementos = %d", quantidade_elementos);
			__GETCHAR__;
			break;
		case 2:
			imprimir_vetor(vetor_dinamico, quantidade_elementos);
			__GETCHAR__;
			break;
		case 3:
			printf("\nInforme o numero a ser procurado: ");
			scanf_s("%d", &elemento);
			int indice = buscar_elemento(vetor_dinamico, quantidade_elementos, elemento);
			if (indice != NOT_FOUND) {
				printf("Elemento encontrado na posicão %d", indice);
			}
			else {
				printf("Elemento nao encontrado no vetor!");
			}
			__GETCHAR__;
			break;

		case 4:
			printf("\nO maior elemento do vetor é: %d", buscar_maior_elemento(vetor_dinamico, quantidade_elementos));
			__GETCHAR__;
			break;
		case 5:
			printf("\nO menor elemento do vetor é: %d", buscar_menor_elemento(vetor_dinamico, quantidade_elementos));
			__GETCHAR__;
			break;
		case 6:
			bubble_sort(vetor_dinamico, quantidade_elementos);
			break;
		case 7:
			printf("\nInforme o numero a ser procurado: ");
			scanf_s("%d", &elemento);
			indice = binarySearch(vetor_dinamico, elemento, quantidade_elementos);
			if (indice != NOT_FOUND) {
				printf("Elemento encontrado na posicão %d", indice);
			}
			else {
				printf("Elemento nao encontrado no vetor!");
			}
			__GETCHAR__;
			break;
		case 8:
			printf("\nInforme o numero a ser EXCLUÍDO: ");
			scanf_s("%d", &elemento);
			indice = exluir_elemento(vetor_dinamico, quantidade_elementos, elemento);
			if (indice != NOT_FOUND) {
				printf("A última posição que o elemento foi encontrado: %d", indice);
			}
			else {
				printf("Elemento nao encontrado no vetor!");
			}
			__GETCHAR__;
			break;
		case 9:
			printf("Sair");
			sair = 1;
			break;
		default:
			printf("Opcao Invalida!");
			__GETCHAR__;
			sair = 0;
		}
	} while (!sair);

	return EXIT_SUCCESS;
};
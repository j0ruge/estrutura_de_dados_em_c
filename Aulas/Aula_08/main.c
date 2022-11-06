#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "tipo_lista_simplesmente_encadeada.h"

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, ".utf-8");
	TLSE* lista_simplesmente_encadeada = inicializa();

	lista_simplesmente_encadeada = insere_inicio(lista_simplesmente_encadeada, 2015);
	lista_simplesmente_encadeada = insere_inicio(lista_simplesmente_encadeada, 45);
	lista_simplesmente_encadeada = insere_inicio(lista_simplesmente_encadeada, 19875);
	printf("\Imprimir Lista: \n");
	imprimir(lista_simplesmente_encadeada);

	return EXIT_SUCCESS;
};
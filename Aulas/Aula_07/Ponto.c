/* ********************************************************************* */
/* Disciplina: Linguagem de Programacao 3                                */
/* Professor: André Lucio                                                */
/* Objetivo de Programa: Implementacao da TAD ponto                      */
/* Tópico da Disciplina: Tipos Abstratos de Dados                        */
/* ********************************************************************* */


#include <stdlib.h> /* malloc, free, exit */
#include <stdio.h> /* printf */
#include <math.h> /* sqrt */
#include "Ponto.h"

struct ponto {
	float coordenada_x;
	float coordenada_y;
};

Ponto* cria(float x, float y) {

	Ponto* ponto = (Ponto*)malloc(sizeof(Ponto));

	if (ponto == NULL) {
		printf("Memoria insuficiente!\n");
		exit(1);
	}

	ponto->coordenada_x = x;
	ponto->coordenada_y = y;
	return ponto;
}

void libera(Ponto* ponto) {
	free(ponto);
}

void acessa(Ponto* ponto, float* x, float* y) {
	*x = ponto->coordenada_x;
	*y = ponto->coordenada_y;
}

void atribui(Ponto* ponto, float x, float y) {
	ponto->coordenada_x = x;
	ponto->coordenada_y = y;
}

float distancia(Ponto* ponto1, Ponto* ponto2) {
	float distancia_x, distancia_y, distancia;
	distancia_x = ponto2->coordenada_x - ponto1->coordenada_x;
	distancia_y = ponto2->coordenada_y - ponto1->coordenada_y;
	distancia = (float)sqrt(distancia_x * distancia_x + distancia_y * distancia_y);
	return distancia;
}

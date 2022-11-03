
#include <stdio.h>
#include <stdlib.h> /* malloc, free, exit */
#include "matriz.h"

struct matriz {
	int linha;
	int coluna;
	float* vetor;
};


Matriz* cria(int m_quantidade_linhas, int n_quantidade_colunas) {
	int quantidade_elementos = m_quantidade_linhas * n_quantidade_colunas;
	Matriz* matriz = (Matriz*)malloc(sizeof(Matriz));
	if (matriz == NULL) {
		printf("Memória insuficiente!\n");
		exit(EXIT_FAILURE);
	}
	matriz->linha = m_quantidade_linhas;
	matriz->coluna = n_quantidade_colunas;
	matriz->vetor = (float*) malloc(quantidade_elementos * sizeof(float));
	if (matriz->vetor == NULL) {
		printf("Memória insuficiente!\n");
		exit(EXIT_FAILURE);
	}
	return matriz;
};


void libera(Matriz* matriz) {
	free(matriz->vetor);
	free(matriz);
};

float acessa(Matriz* matriz, int linha_i, int coluna_j)
{
	int linha, coluna, posicao_vetor = 0;
	for (linha = 0; linha <= linha_i; linha++)
	{
		for (coluna = 0; coluna <= coluna_j; coluna++)
		{
			if (linha == linha_i && coluna == coluna_j) {
				return matriz->vetor[posicao_vetor];
				break;
			}
			else {
				posicao_vetor++;
			}
		}
	}
	return NOT_FOUND;
};

void atribui(Matriz* matriz, int linha_i, int coluna_j, float valor) {

	if (linha_i > matriz->linha)
	{
		printf("Numero invalido para linha.\n");
		exit(EXIT_FAILURE);
	}
	else if (coluna_j > matriz->coluna)
	{
		printf("Numero invalido para coluna.\n");
		exit(EXIT_FAILURE);
	}

	int linha, coluna, posicao_vetor = 0;

	for (linha = 0; linha <= linha_i; linha++)
	{
		for (coluna = 0; coluna <= coluna_j; coluna++)
		{
			if (linha == linha_i && coluna == coluna_j) {
				matriz->vetor[posicao_vetor] = valor;
				break;
			}
			else {
				posicao_vetor++;
			}			
		}
	}
};

int linhas(Matriz* matriz) {
	return matriz->linha;
}

int colunas(Matriz* matriz) {
	return matriz->coluna;
};



imprimir_vetor_matriz(Matriz* matriz) {
	int linha;
	int coluna;	
	int total_elementos = matriz->linha * matriz->coluna;
	int total_linhas = matriz->linha;
	int total_coluna = matriz->coluna;
	for (linha = 0; linha <= total_linhas; linha++)
	{
		for (coluna = 0; coluna <= total_coluna; coluna++)
		{
			printf("%.2f\n", acessa(matriz, linha, coluna));									
		}
	}
}
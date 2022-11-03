#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include "matriz.h"



int main(int argc, char* argv[]) {
	setlocale(LC_ALL, ".utf-8");



	Matriz* matriz_01;

	matriz_01 = cria(4, 4);


	atribui(matriz_01, 0, 0, 1);
	atribui(matriz_01, 0, 1, 2);
	atribui(matriz_01, 0, 2, 3);
	atribui(matriz_01, 0, 3, 4);
	atribui(matriz_01, 0, 4, 5);
	atribui(matriz_01, 1, 0, 6);
	atribui(matriz_01, 1, 1, 7);
	atribui(matriz_01, 1, 2, 8);

	float resultado = acessa(matriz_01, 0, 3);

	
	printf("Resultado do Acessa() %.2f\n", resultado);
	printf("Quantidade de Linhas %.d\n", linhas(matriz_01));

	


	//imprimir_vetor_matriz(matriz_01);


	libera(matriz_01);


	 
	
	
	/*int bidimensional_array[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int unidimensional_array[16];
	int row, column, index, unidimensional_position =0;
	printf("2D-Array\n");
	for (row = 0; row < 4; row++)
	{
		for (column = 0; column < 4; column++)
		{
			printf("%d   ", bidimensional_array[row][column]);
			unidimensional_array[unidimensional_position] = bidimensional_array[row][column];
			unidimensional_position++;
		}
		printf("\n");
	}
	printf("1D-Array\n");
	for (index = 0; index < 16; index++)
		printf("%d ", unidimensional_array[index]);*/
	

	return EXIT_SUCCESS;
}


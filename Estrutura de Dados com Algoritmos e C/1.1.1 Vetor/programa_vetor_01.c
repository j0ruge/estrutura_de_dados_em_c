#include <stdio.h>

 /*
 * Estrutura de Dados com Algoritmos e C, PDF pág 29
 * Programa 1.2: Exemplo de uso de vetores,
 */


#define TAMANHO 5

int main()
{
	int iIndice;
	int iValorA;
	int iSoma;
	int aVetor[TAMANHO];
	float fMedia;

	for (iIndice = 0; iIndice < TAMANHO; iIndice++)
	{
		printf("Entre com o valor %d: ", iIndice + 1);
		scanf("%d", &iValorA);
		aVetor[iIndice] = iValorA;
	}

	iSoma = 0;

	for (iIndice = 0; iIndice < TAMANHO; iIndice++)
	{
		iSoma += aVetor[iIndice];
	}

	fMedia = iSoma / TAMANHO;

	printf("Media: %.2f", fMedia);
	return 0;
}

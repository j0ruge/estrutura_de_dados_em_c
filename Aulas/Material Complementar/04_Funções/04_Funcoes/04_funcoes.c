/* programa que le um numero e imprime seu fatorial */
#include <stdio.h>

void fatorial(int numero);

/* Fun��o principal */
int main(void)
{
	int numero;
	scanf_s("%d", &numero);
	fatorial(numero);
	return 0;
}
/* Fun��o para imprimir o valor do fatorial */
void fatorial(int numero)
{
	int indice;
	int fatorial = 1;
	for (indice = 1; indice <= numero; indice++)
	{
		fatorial *= indice;
	}		
	printf("Fatorial = %d\n", fatorial);
}
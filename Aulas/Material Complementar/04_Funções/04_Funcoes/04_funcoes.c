/* programa que le um numero e imprime seu fatorial */
#include <stdio.h>

void fatorial(int numero);

/* Função principal */
int main(void)
{
	int numero;
	scanf_s("%d", &numero);
	fatorial(numero);
	return 0;
}
/* Função para imprimir o valor do fatorial */
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
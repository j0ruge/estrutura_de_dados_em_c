/* programa que le um numero e imprime seu fatorial */
#include <stdio.h>

void fatorial(int numero);
int fatorial_v2(int numero);

/* Função principal */
int main(void)
{
	int numero, resultado;
	scanf_s("%d", &numero);	
	fatorial(numero);

	resultado = fatorial_v2(numero);

	printf("Fatorial ver2 = %d\n", resultado);
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
	printf("Fatorial ver1 = %d\n", fatorial);
}

/* programa que le um numero e imprime seu fatorial (versão 2) */
int fatorial_v2(int numero)
{
	int indice;
	int fatorial = 1;
	for (indice = 1; indice <= numero; indice++)
	{
		fatorial *= indice;
	}
	return fatorial;
}
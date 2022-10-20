/* programa que le um numero e imprime seu fatorial */
#include <stdio.h>

void fatorial(int numero);
int fatorial_v2(int numero);
int fatorial_v3(int numero);

/* Função principal */
int main(void)
{
	int numero, resultado, resultado_v3;
	scanf_s("%d", &numero);	
	fatorial(numero);

	resultado = fatorial_v2(numero);
	resultado_v3 = fatorial_v3(numero);

	printf("Fatorial ver2 de %d = %d\n", numero,  resultado);
	printf("Fatorial ver3 de %d = %d\n", numero, resultado_v3);
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


/* programa que le um numero e imprime seu fatorial (versão 3) */
int fatorial_v3(int numero)
{
	int float_number = 1.0;
	while (numero != 0)
	{
		float_number *= numero;
		numero--;
	}
	return float_number;
}

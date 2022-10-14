#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	/* Cálculo da media e da variância de 10 números reais */
	
	float v[10]; /* declara vetor com 10 elementos */
	float med, var; /* variáveis para armazenar a média e a variância */
	int i; /* variável usada como índice do vetor */
	
	/* leitura dos valores */
	for (i = 0; i < 10; i++) /* faz índice variar de 0 a 9 */
	scanf("%f", &v[i]); /* lê cada elemento do vetor */
	
	/*
		Devemos observar que passamos para a função scanf o endereço de cada elemento do
		vetor (&v[i]), pois desejamos que os valores capturados sejam armazenados nos
		elementos do vetor. Se v[i] representa o (i+1)-ésimo elemento do vetor, &v[i] representa
		o endereço de memória onde esse elemento está armazenado.	
	*/
	
	
	
	/* cálculo da média */
	med = 0.0; /* inicializa média com zero */
	for (i = 0; i < 10; i++)
	med = med + v[i]; /* acumula soma dos elementos */
	med = med / 10; /* calcula a média */
	
	/* cálculo da variância */
	var = 0.0; /* inicializa variância com zero */
	for ( i = 0; i < 10; i++ )
	var = var+(v[i]-med)*(v[i]-med); /* acumula quadrado da diferença */
	var = var / 10; /* calcula a variância */
	
	printf ( "Media = %f Variancia = %f \n", med, var );
	
	return 0;
}
	
	
	
	

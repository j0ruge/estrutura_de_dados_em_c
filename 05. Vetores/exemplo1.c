#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	/* C�lculo da media e da vari�ncia de 10 n�meros reais */
	
	float v[10]; /* declara vetor com 10 elementos */
	float med, var; /* vari�veis para armazenar a m�dia e a vari�ncia */
	int i; /* vari�vel usada como �ndice do vetor */
	
	/* leitura dos valores */
	for (i = 0; i < 10; i++) /* faz �ndice variar de 0 a 9 */
	scanf("%f", &v[i]); /* l� cada elemento do vetor */
	
	/*
		Devemos observar que passamos para a fun��o scanf o endere�o de cada elemento do
		vetor (&v[i]), pois desejamos que os valores capturados sejam armazenados nos
		elementos do vetor. Se v[i] representa o (i+1)-�simo elemento do vetor, &v[i] representa
		o endere�o de mem�ria onde esse elemento est� armazenado.	
	*/
	
	
	
	/* c�lculo da m�dia */
	med = 0.0; /* inicializa m�dia com zero */
	for (i = 0; i < 10; i++)
	med = med + v[i]; /* acumula soma dos elementos */
	med = med / 10; /* calcula a m�dia */
	
	/* c�lculo da vari�ncia */
	var = 0.0; /* inicializa vari�ncia com zero */
	for ( i = 0; i < 10; i++ )
	var = var+(v[i]-med)*(v[i]-med); /* acumula quadrado da diferen�a */
	var = var / 10; /* calcula a vari�ncia */
	
	printf ( "Media = %f Variancia = %f \n", med, var );
	
	return 0;
}
	
	
	
	

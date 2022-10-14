/* C�lculo da m�dia e da vari�ncia de n reais */
#include <stdio.h>
/* Fun��o para c�lculo da m�dia */

float media (int n, float* vetor)
{
	int index;
	float s = 0.0;
	for (index = 0; index < n; index++)
		s += vetor[index];
	return s/n;
}

/* Fun��o para c�lculo da vari�ncia */
float variancia (int n, float* v, float m)
{
	int i;
	float s = 0.0;
	for (i = 0; i < n; i++)
	s += (v[i] - m) * (v[i] - m);
	return s/n;
}

int main ( void )
{
	int i, n;
	float *v;
	float med, var;
	
	/* leitura do n�mero de valores */
	scanf("%d", &n);
	
	/* aloca��o din�mica */	
	v = (float*) malloc(n*sizeof(float));
	if (v==NULL) {
		printf("Memoria insuficiente.\n�);
		return 1;
	}
	
	/* leitura dos valores */
	for (i = 0; i < n; i++)
	scanf("%f", &v[i]);
	
	med = media(n,v);
	var = variancia(n,v,med);
	printf("Media = %f Variancia = %f \n", med, var);
	
	/* libera mem�ria */
	free(v);
	return 0;
}

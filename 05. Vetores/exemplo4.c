/* Cálculo da média e da variância de n reais */
#include <stdio.h>
/* Função para cálculo da média */

float media (int n, float* vetor)
{
	int index;
	float s = 0.0;
	for (index = 0; index < n; index++)
		s += vetor[index];
	return s/n;
}

/* Função para cálculo da variância */
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
	
	/* leitura do número de valores */
	scanf("%d", &n);
	
	/* alocação dinâmica */	
	v = (float*) malloc(n*sizeof(float));
	if (v==NULL) {
		printf("Memoria insuficiente.\n”);
		return 1;
	}
	
	/* leitura dos valores */
	for (i = 0; i < n; i++)
	scanf("%f", &v[i]);
	
	med = media(n,v);
	var = variancia(n,v,med);
	printf("Media = %f Variancia = %f \n", med, var);
	
	/* libera memória */
	free(v);
	return 0;
}

/* Incrementa elementos de um vetor */
#include <stdio.h>
void increment_vetor ( int qtd_index_incrementos, int *vetor )
{
	int index;
	for (index = 0; index < qtd_index_incrementos; index++)
	vetor[index]++;
}
	
int main ( void )
	{
	int vetor[ ] = {1, 3, 5};
	increment_vetor(3, vetor);
	printf("%d %d %d \n", vetor[0], vetor[1], vetor[2]);
	return 0;
}

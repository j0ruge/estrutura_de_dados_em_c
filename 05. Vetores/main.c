#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void printIntegerVectorAddressAndValue(int vector[], int numberOfVectorElements){	
	int index;	
	
	for(index=0; index < numberOfVectorElements ; index++){
		printf("\n Index: %d | Memory Address: %d | Value: %d\n", index, &vector[index], vector[index]);
	}
}

int main(int argc, char *argv[]) {
	
	
	
	/*
		A declaração abaixo diz que "vetor" é um vetor de inteiros dimensionado com 10 elementos, isto
		é, reservamos um espaço de memória contínuo para armazenar 10 valores inteiros. Assim,
		se cada int ocupa 4 bytes, a declaração acima reserva um espaço de memória de 40 bytes.	
	*/
	
	int vetor[10] = { 0 };
	int counter;
	
	/*
		v[0] ¨ acessa o primeiro elemento de v
		v[1] ¨ acessa o segundo elemento de v
		...
		v[9] ¨ acessa o ultimo elemento de v	
	*/
	
	for (counter=0; counter < (sizeof(vetor)/4); counter++ ){
		printf("%d \n", vetor[counter]);
	}
	
	
	//	v[10] ¨ esta ERRADO (invasao de memoria)
	printf("\n %d \n", vetor[10]);
	
	
	vetor[8]=2015;
	//&vetor[9] = 2016;
	//&vetor[11] = 2018;
	printIntegerVectorAddressAndValue(vetor, 30);
	
	
	
	printf("\nSlot 8 %d\n", &vetor[8]);
	printf("\nSlot 8 %d\n", vetor+8);
	printf("\nPróximo slot \n%d\n", vetor+(8+1));
	printf("\n*(v+8) %d\n",   *(vetor+8));
	
	
	
	return 0;
}
	
	
	
	

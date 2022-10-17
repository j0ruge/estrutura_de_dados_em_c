#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


#define TAMANHO_ARRAY 10
 /*
 * Estrutura de Dados com Algoritmos e C, PDF pág 42
 * Exercício 1.3.1
 * Algoritmo 1.1: Cálculo da posição de índices de um vetor na memória
 *
 * Ref.: https://pt.stackoverflow.com/questions/336172/para-que-serve-o-sscanf-e-sprintf
 */

 void imprime_array_elemento(int *, int);
 int int_memory_array_index_position(int, int);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int aNumerosPares[TAMANHO_ARRAY] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    imprime_array_elemento(&aNumerosPares, 8);
	return EXIT_SUCCESS;
}

void imprime_array_elemento(int *aArray, int iElemento){
    int *result;
    int **ppResult;
    int memoryPosition = 0;
    int temp = 2;
    int enderecoElemento;
    ppResult = &temp;
    result = &temp;

    char strMemoryAddress[10];
    int iIndice;
    for(iIndice=0; iIndice < TAMANHO_ARRAY; iIndice++)
    {
    	if( iIndice == (iElemento-1))
		{
    		printf("\nElemento desejado tem Valor %d e foi encontrado no Índice %d do Array.\n", aArray[iIndice], iIndice);
    		enderecoElemento = int_memory_array_index_position(aArray, iIndice);
            printf("Este valor está alocado no endereço de memória: %ld\n", enderecoElemento);
		}
    }
    printf("\nTodos elementos\n");
    for(iIndice=0; iIndice < TAMANHO_ARRAY; iIndice++)
    {
        printf("Indice: %d, Elemento: %d, Valor: %d, Endereço de Memória: %d\n",
                iIndice,
                (iIndice+1),
                aArray[iIndice],
                int_memory_array_index_position(aArray, iIndice)
               );
    }

    sprintf(strMemoryAddress,"%d",enderecoElemento );
    printf("%s\n", strMemoryAddress);
    printf("\nEndereco do Array: %d\n", aArray);
    printf("\nEndereco do Elemento dentro do Array: %x\n", enderecoElemento);

    printf("Inserir o endereço de memória do Elemento: \n");
   // scanf("%x", &result);
    sscanf(strMemoryAddress, "%d", &result);
    printf("Valor recuperado: %d\n", *result );
};

int int_memory_array_index_position(int aArray,int index){
	return  aArray + ((index)*sizeof(int));
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>
#include "adt_sample.h"

//typedef struct StackStruct_t * StackPtr_t;


StackPtr_t Stack;
//Stack = (StackPtr_t) malloc(50 * sizeof(StackStruct_t));

//STRUCTS
typedef struct produto{
	int codigo;
	char descricao[50];
	int qtd_estoque;
	float preco;
}Produto;

struct myArray
{
	int total_size;
	int used_size;
	int *ptr;
};

void createArray(struct myArray * array, int tSize, int uSize)
{
	//(*a).total_size = tSize;
	//(*a).used_size = uSize;
	//(*a).ptr = (int *) malloc(tSize*sizeof(int));
	array->total_size = tSize;
	array->used_size = uSize;
	array->ptr = (int *) malloc(tSize * sizeof(int));
};


void show(struct myArray *array)
{
	int i;
	for( i = 0; i < array->used_size; i++)
	{
		printf("%d\n", (array->ptr)[i]);
	}
}

void setVal(struct myArray *array)
{
	int input;
	int i;
	for (i = 0; i < array->used_size; i++)
	{
		printf("Enter element %d: ", i);
		scanf("%d", &input); 
		(array->ptr)[i] = input;
	}
}

int main(int argc, char *argv[])
{
	printf("Gabiru Mundano!");	
	struct myArray marks;
	createArray(&marks, 10, 2);
	printf("We are running setVal now\n");
	setVal(&marks);
	printf("We are running setVal now\n");
	show(&marks);
	//Stack_Init(Stack);
	//Stack_Push(Stack, 0x15);
	return EXIT_SUCCESS;
}

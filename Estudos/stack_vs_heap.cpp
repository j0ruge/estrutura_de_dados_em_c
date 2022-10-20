#include <stdio.h>
#include <iostream>
#include <string>

struct Vector3
{
	float x, y, z;

	Vector3()
		: x(10), y(11), z(12) {}
};

int main()
{
	/*Stack*/
	int value = 5; // Stack Allocation
	int array[5];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	Vector3 vector;


	/*Heap*/
	int* heap_value = new int; // Heap Allocation, o new faz a aloca��o da mem�ria ser no Heap, malloc em C
	*heap_value = 5;
	int* heap_array = new int[5];
	heap_array[0] = 1;
	heap_array[1] = 2;
	heap_array[2] = 3;
	heap_array[3] = 4;
	heap_array[4] = 5;
	Vector3* heap_vector = new Vector3();

	delete heap_value;
	delete[] heap_array;
	delete heap_vector;

	std::cin.get();
	return EXIT_SUCCESS;
}
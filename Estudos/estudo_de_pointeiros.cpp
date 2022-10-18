#include <stdio.h>
#include <iostream>


int main_old() 
{
	char *buffer = new char[8];	
	memset(buffer, 0, 8);	

	char** prt = &buffer;

	delete[] buffer;
	std::cin.get();
	return EXIT_SUCCESS;
}
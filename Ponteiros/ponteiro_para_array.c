//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main(int argc, char *argv[]) {
	int A[5] = {2,4,6,8,10};
	int *p;
	int other_pointer;
	other_pointer= (int*) malloc(5*sizeof(int));
	other_pointer[0]=10;
	other_pointer[1]=15;
	other_pointer[2]=14;
	other_pointer[3]=21;
	other_pointer[4]=31;		
	
	//Ao atribuir a um array, não é necessária a utilização de &
	p=A;
	
	printf("%d\n", &A);
	printf("%d\n", *p );
	
	for(int i=0; i < 5; i++){
		printf("%d\n", p[i]);
	}
	return 0;	
}

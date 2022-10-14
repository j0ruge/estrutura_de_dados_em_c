#include <stdio.h>
#include <stdlib.h>
//#include <iostream>


int main(int argc, char *argv[]) {
	int x, y, *px;
	char c;
	long z;
	double d;
	float f;
	
	x=23;
	px = &x;
	
	printf("&x (Enderco de x) =  %d\n", &x);
	printf("&px (Endereco de px) = %d\n", &px);
	printf("px  (conteudo de px)= %d\n", px);
	printf("*px (conteudo do apontado por px) = %d\n", *px);
	//printf("%#d\n", &y);
	//printf("%#d\n", &c);
	//printf("%#d\n", &z);
	//printf("%#d\n", &d);
	//printf("%#d\n", &f);
	
	/*********************************/
	
	int a = 10;
	int *p;
	p=&a;
	
	//cout<<a;
	printf("using pointer %d\n", *p);
	a = 23;
	printf("using pointer %d %d\n" ,p, &a);
	return 0;	
}

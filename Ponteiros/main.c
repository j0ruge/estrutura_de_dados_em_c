#include <stdio.h>
#include <stdlib.h>

/* Estudos de ponteiros usando o livro C Completo total, Capítulo 5, página 126 do PDF */


int count = 100;
int m;
int q;

//m = &count;
// Assim, o comando de atribuição anterior significa "m recebe o endereço de count".

//q = *m;
//Nesse caso, o comando anterior significa "q recebe o valor que está no endereço m".
 


int main_(int argc, char *argv[]) {
	float x, y;
	int *p;	
	
	/* O próximo comando faz com que p (que é ponteiro
	para inteiro} aponte para um float. */
	//p = &x;
	
	/* O próximo comando não funciona como esperado. */
	y = *p;	
	
	
	//printf("%#X\n", m);
	//printf("%#X\n",&count);
	
	return 0;	
}

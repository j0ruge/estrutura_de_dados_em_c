#include <stdio.h>
#include <stdlib.h>

/* Estudos de ponteiros usando o livro C Completo total, Cap�tulo 5, p�gina 126 do PDF */


int count = 100;
int m;
int q;

//m = &count;
// Assim, o comando de atribui��o anterior significa "m recebe o endere�o de count".

//q = *m;
//Nesse caso, o comando anterior significa "q recebe o valor que est� no endere�o m".
 


int main_(int argc, char *argv[]) {
	float x, y;
	int *p;	
	
	/* O pr�ximo comando faz com que p (que � ponteiro
	para inteiro} aponte para um float. */
	//p = &x;
	
	/* O pr�ximo comando n�o funciona como esperado. */
	y = *p;	
	
	
	//printf("%#X\n", m);
	//printf("%#X\n",&count);
	
	return 0;	
}

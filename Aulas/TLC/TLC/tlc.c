#include <stdio.h>
#include <stdlib.h>

typedef struct lc {
	int info;
	struct lc* prox;
}TLC;








/*Libera - versão iterativa*/
void libera(TLC* l) {
	if (l) {
		TLC* p = l->prox, * t;
		while (p != l) {
			t = p;
			p = p->prox;
			free(t);
		}
		free(l);
	}
}























/*Inserir com complexidade O(1) - */

TLC* insere_01(TLC* l, int x) {
	TLC* novo = (TLC*)malloc(sizeof(TLC));
	novo->info = x;
	if (!l) {
		novo->prox = novo;
		return novo;
	}
	novo->prox = l->prox;
	l->prox = novo;
	return 1;
}























































































































void imprime(TLC* l) {
	if (l) {
		printf("%d", l->prox);
		TLC* p = l->prox;
		while (p != l) {
			printf("%d", p->info);
			p = p->prox;
		}

	}
}







void ira(TLC* l, TLC* head) {
	if (l != head) {
		printf()
	}
}

/* Imprime - versão recursiva */
void imprime_rec(TLC* l) {
	if (l) {
		printf("%d ", l->info);
		ira(l->prox, );
	}
}
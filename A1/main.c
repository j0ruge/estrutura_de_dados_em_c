#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	struct lista *prox; //PONTEIRO DO PROXIMO
	int info; //CONTEUDO UTIL
}Lista;

Lista* inicializa(){
	return NULL;
}

Lista* inserir_inicio(Lista* lista, int valor){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	if(!novo) exit(1);
	
	//APONTAR PARA O PROXIMO DA LISTA
	novo->prox = lista;
	novo->info = valor;
	lista = novo;
		
	return novo;
}

Lista* inserir_ordenado(Lista* l, int valor){
	Lista* paux = l;
	Lista* ant = NULL;
	while((paux) && (paux->info < valor)){
		ant = paux;
		paux = paux->prox;
	}
	if(!ant){
		return inserir_inicio(l, valor);	
	}
	else{
		ant->prox = inserir_inicio(paux, valor);	
	}
	return l;
}

Lista* inserir_fim(Lista* l, int valor){
	if(!l){
		return inserir_inicio(l,valor);
	}
	Lista* paux = l;
	while(paux->prox){
		paux = paux->prox;
	}
	paux->prox = inserir_inicio(NULL, valor);
	return l;
}

Lista* libera(Lista* l){
	Lista* paux = l;
	while(paux){
		Lista* texc = paux;
		paux = paux->prox;
		free(texc);
	}
	return NULL;
}

void imprimir_v1(Lista* l){
	Lista* paux = l;
	if(!paux) printf("\nLISTA VAZIA!!!");
	while(paux){
		printf("\n%d", paux->info);
		paux = paux->prox;
	}
}

void imprimir_v2(Lista* l){
	Lista* paux = l;
	if(!paux) printf("\nLISTA VAZIA!!!");
	for(paux=l; paux!=NULL;paux=paux->prox){
		printf("\n%d", paux->info);
	}
}

int main (){	
	//COMECAR LIMPANDO A LISTA
	Lista* l = inicializa();
	int i = 0;
	for(i = 0; i <= 5; i++){
		l = inserir_inicio(l, i);
	}
	
	l = inserir_ordenado(l, 4);
	
	printf("V1\n");
	imprimir_v1(l);
	
	printf("\n\nLIBERANDO");
	l = libera(l);
	
	printf("\n\nV2\n");
	imprimir_v2(l);
	
	return 0;	
}

#include <stdio.h>
#include <stdlib.h>
#include "tipo_lista_simplesmente_encadeada.h"

struct lista {
	struct lista* proximo_elemento;
	int conteudo_util;	
};

/*Inicializar Lista*/
TLSE* inicializa(void){
	return NULL;
}

/*Inserir no início - versão iterativa*/
TLSE* insere_inicio(TLSE* lista_simplesmente_encadeada, int elemento) {
	TLSE* novo_elemento = (TLSE*)malloc(sizeof(TLSE));
	if (!novo_elemento) exit(EXIT_FAILURE);
	novo_elemento->conteudo_util = elemento;
	novo_elemento->proximo_elemento = lista_simplesmente_encadeada;
	return novo_elemento;
}

/*Inserir no fim - versão iterativa*/
TLSE* insere_fim(TLSE* lista_simplesmente_encadeada, int elemento) {
	if (!lista_simplesmente_encadeada)
	{
		return insere_inicio(lista_simplesmente_encadeada, elemento);
	};
	TLSE* novo_noh = lista_simplesmente_encadeada;
	while (novo_noh->proximo_elemento)
	{
		novo_noh = novo_noh->proximo_elemento;
	}
	novo_noh->proximo_elemento = insere_inicio(NULL, elemento);
	return lista_simplesmente_encadeada;
}

/*Liberar a lista da memória - versão iterativa*/
void libera(TLSE* lista_simplesmente_encadeada) {
	TLSE* copia_noh = lista_simplesmente_encadeada;
	while (copia_noh) {
		TLSE* copia_noh_auxiliar = copia_noh;
		copia_noh = copia_noh->proximo_elemento;
		free(copia_noh_auxiliar);
	}
}

/*Inserir ordenado - versão iterativa*/
TLSE* insere_ordenado(TLSE* lista_simplesmente_encadeada, int elemento) {
	TLSE* copia_noh = lista_simplesmente_encadeada;
	TLSE* noh_anterior = inicializa();
	while ((copia_noh) && (copia_noh->conteudo_util < elemento))
	{
		noh_anterior = copia_noh;
		copia_noh = copia_noh->proximo_elemento;
	}
	if (!noh_anterior)
	{
		return insere_inicio(lista_simplesmente_encadeada, elemento);
	}		
	else
	{
		noh_anterior->proximo_elemento = insere_inicio(copia_noh, elemento);
	}		
	return lista_simplesmente_encadeada;
}

/*Imprimir  - Versão iterativa*/
TLSE* imprimir(TLSE* lista_simplesmente_encadeada) {
	TLSE* copia_noh = lista_simplesmente_encadeada;
	while (copia_noh) {
		printf("%d \n", copia_noh->conteudo_util);
		copia_noh = copia_noh->proximo_elemento;
	}
}
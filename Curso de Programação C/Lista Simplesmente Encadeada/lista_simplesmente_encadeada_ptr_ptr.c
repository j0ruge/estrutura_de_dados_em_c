#include "lista_simplesmente_encadeada_ptr_ptr.h"


// N� que vai compor a lista
struct no {
	int valor;
	struct no* proximo;
};

// Procedimento para inserir no in�cio
// Por ser um procedimento retorna void

void inserir_no_inicio(No** lista, int num) {
	No* novo = malloc(sizeof(No));
	if (novo) {
		//Preecnher n� e fazer inser��o aqui.
		novo->valor = num;
		// Como queremos inserir no in�cio, este novo elemento deve apontar para o primeiro elemento da lista atual. 
		novo->proximo = *lista;
		*lista = novo;
	}
	else
		printf("Erro ao alocar mem�ria!\n");
}


// Procedimento para inserir no fim
// Por ser um procedimento retorna void

void inserir_no_fim(No** lista, int num) {
	No* novo = malloc(sizeof(No));
	No* aux = malloc(sizeof(No));

	if (novo)
	{
		//Preecnher n� e fazer inser��o aqui.
		novo->valor = num;
		// Como queremos inserir no fim, este novo elemento deve ter seu proximo apontando para NULL que � indica que este � o �ltimo elemento da atual. 
		novo->proximo = NULL;

		// � o primeiro?
		if (*lista == NULL)
		{
			*lista = novo;
		}
		else
		{
			// Para poder percorer a lista e n�o perder a cabe�a da lista, eu crio uma c�pia dela no ponteiro "aux".
			aux = *lista;
			while (aux->proximo)
				aux = aux->proximo;

			// Pendura o novo como pr�ximo do �ltimo elemento da lista. 
			aux->proximo = novo;
		}
	}
	else
		printf("Erro ao alocar mem�ria\!n");
}


// Procedimento para inserir no meio
// Por ser um procedimento retorna void

void inserir_no_meio(No** lista, int num, int ant) {
	No* novo = malloc(sizeof(No));
	No* aux = malloc(sizeof(No));

	if (novo)
	{
		//Preecnher n� e fazer inser��o aqui.
		// J� podemos colocar o novo->valor, mas at� este momento n�o sabemos quem ser� o pr�ximo. 
		novo->valor = num;

		// � o primeiro?
		if (*lista == NULL)
		{
			novo->proximo = NULL; // Agora sabemos que este � o primeiro elemento, a� sim novo->proximo = NULL, que � o fim da lista. 
			*lista = novo;
		}
		else
		{
			// Para poder percorer a lista e n�o perder a cabe�a da lista, criamos uma c�pia dela no ponteiro "aux".
			aux = *lista;

			//Procurando o elemento refer�ncia para a inser��o, 
			//se o aux->proximo for NULL, o elemento procurado n�o exite na lista, a inser��o ser� no final. 
			while (aux->valor != ant && aux->proximo)
				aux = aux->proximo;

			// Para n�o perder o fim da lista, primeiro eu ligo o novo no que seria o proximo do valor de referencia encontrado acima. . 
			novo->proximo = aux->proximo;

			// Agora ligar a parte anterior ao novo.
			aux->proximo = novo;

		}
	}
	else
		printf("Erro ao alocar mem�ria\!n");
}

void imprimir(No* no) {
	printf("\n\tLista: ");
	while (no) {
		printf("%d ", no->valor);
		no = no->proximo;
	}
	printf("\n\n");
}

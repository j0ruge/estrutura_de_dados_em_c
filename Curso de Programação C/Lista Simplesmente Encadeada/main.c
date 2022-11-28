#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* 
	Aula 243: Lista Simplesmente Encadeada 
	Como inserir no início da lista? 
*/


// Nó que vai compor a lista
typedef struct no {
	int valor;
	struct no *proximo;
}No;


// Procedimento para inserir no início
// Por ser um procedimento retorna void

void inserir_no_inicio(No **lista, int num){
	No* novo = malloc(sizeof(No));
	if (novo) {
		//Preecnher nó e fazer inserção aqui.
		novo->valor = num;
		// Como queremos inserir no início, este novo elemento deve apontar para o primeiro elemento da lista atual. 
		novo->proximo = *lista;
		*lista = novo;
	}
	else
		printf("Erro ao alocar memória\!n");
}


// Procedimento para inserir no fim
// Por ser um procedimento retorna void

void inserir_no_fim(No** lista, int num) {
	No *novo = malloc(sizeof(No));
	No *aux = malloc(sizeof(No));

	if (novo)
	{
		//Preecnher nó e fazer inserção aqui.
		novo->valor = num;
		// Como queremos inserir no fim, este novo elemento deve ter seu proximo apontando para NULL que é indica que este é o último elemento da atual. 
		novo->proximo = NULL;
	
		// É o primeiro?
		if (*lista == NULL)
		{
			*lista = novo;
		}
		else
		{	
			// Para poder percorer a lista e não perder a cabeça da lista, eu crio uma cópia dela no ponteiro "aux".
			aux = *lista;
			while (aux->proximo)
				aux = aux->proximo;

			// Pendura o novo como próximo do último elemento da lista. 
			aux->proximo = novo;
		}		
	}
	else
		printf("Erro ao alocar memória\!n");
}


// Procedimento para inserir no meio
// Por ser um procedimento retorna void

void inserir_no_meio(No** lista, int num, int ant) {
	No* novo = malloc(sizeof(No));
	No* aux = malloc(sizeof(No));

	if (novo)
	{
		//Preecnher nó e fazer inserção aqui.
		// Já podemos colocar o novo->valor, mas até este momento não sabemos quem será o próximo. 
		novo->valor = num;

		// É o primeiro?
		if (*lista == NULL)
		{
			novo->proximo = NULL; // Agora sabemos que este é o primeiro elemento, aí sim novo->proximo = NULL, que é o fim da lista. 
			*lista = novo;
		}
		else
		{
			// Para poder percorer a lista e não perder a cabeça da lista, criamos uma cópia dela no ponteiro "aux".
			aux = *lista;

			//Procurando o elemento referência para a inserção, 
			//se o aux->proximo for NULL, o elemento procurado não exite na lista, a inserção será no final. 
			while (aux->valor != ant && aux->proximo)
				aux = aux->proximo;

			// Para não perder o fim da lista, primeiro eu ligo o novo no que seria o proximo do valor de referencia encontrado acima. . 
			novo->proximo = aux->proximo;

			// Agora ligar a parte anterior ao novo.
			aux->proximo = novo;

		}
	}
	else
		printf("Erro ao alocar memória\!n");
}

void imprimir(No* no) {
	printf("\n\tLista: ");
	while (no) {
		printf("%d ", no->valor);
		no = no->proximo;
	}
	printf("\n\n");
}

int main() {

	int opcao;
	int valor;
	int anterior;
	No	*lista = NULL;

	do {
		printf("\n\t0 - Sair");
		printf("\n\t1 - Inserir Início");
		printf("\n\t2 - Inserir Fim");
		printf("\n\t3 - Inserir Meio");
		printf("\n\t4 - Imprimir\n");
		scanf("%d", &opcao);

		switch (opcao)
		{
		case 1:
			printf("Digite um valor: ");
			scanf("%d", &valor);
			inserir_no_inicio(&lista, valor);
			break;
		case 2:
			printf("Digite um valor: ");
			scanf("%d", &valor);
			inserir_no_fim(&lista, valor);
			break;
		case 3:
			printf("Digite um valor e o valor de refência: ");
			scanf("%d%d", &valor, &anterior);
			inserir_no_meio(&lista, &valor, &anterior);
			break;
		case 4:
			imprimir(lista);
			break;
		default:
			if (opcao != 0)
				printf("Opção inválida!\n");
			break;
		}

	} while (opcao != 0);

	return EXIT_SUCCESS;
}
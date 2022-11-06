
/* Tipo Lista Simplemente Encadeada */
typedef struct lista TLSE;

TLSE* inicializa(void);
TLSE* insere_inicio(TLSE* lista_simplesmente_encadeada, int elemento);
TLSE* insere_fim(TLSE* lista_simplesmente_encadeada, int elemento);
void libera(TLSE* lista_simplesmente_encadeada);
TLSE* insere_ordenado(TLSE* lista_simplesmente_encadeada, int elemento);
TLSE* imprimir(TLSE* lista_simplesmente_encadeada);
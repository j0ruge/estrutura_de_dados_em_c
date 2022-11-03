/* **********************************************************************/
/* Disciplina: Linguagem de Programacao 3                               */
/* Professor:Andre                                                      */
/* Objetivo de Programa: Interface da TAD ponto                         */
/* Topico da Disciplina: Tipos Abstratos de Dados                     */
/* **********************************************************************/

/* TAD: Ponto (coordenada_x,coordenada_y) */
/* Tipo exportado */

typedef struct ponto Ponto;

/*
	Note que a composi��o da estrutura Ponto (struct ponto) n�o � exportada pelo m�dulo. 
	Dessa forma, os demais m�dulos que usarem esse TAD n�o poder�o acessar diretamente os campos dessa estrutura.
*/

/* Fun��es exportadas */

/* Fun��o cria -Aloca e retorna um ponto com coordenadas (coordenada_x,coordenada_y)  */
Ponto* cria(float x, float y);

/* Fun��o libera - Libera a mem�ria de um ponto previamente criado. */
void libera(Ponto* ponto);

/* Fun��o acessa - Devolve os valores das coordenadas de um ponto */
void acessa(Ponto* ponto, float* x, float* y);

/* Fun��o atribui -  Atribui novos valores �s coordenadas de um ponto */
void atribui(Ponto* ponto, float x, float y);

/* Fun��o distancia - Retorna a dist�ncia entre dois pontos */
float distancia(Ponto* ponto1, Ponto* ponto2);

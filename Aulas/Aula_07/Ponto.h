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
	Note que a composição da estrutura Ponto (struct ponto) não é exportada pelo módulo. 
	Dessa forma, os demais módulos que usarem esse TAD não poderão acessar diretamente os campos dessa estrutura.
*/

/* Funções exportadas */

/* Função cria -Aloca e retorna um ponto com coordenadas (coordenada_x,coordenada_y)  */
Ponto* cria(float x, float y);

/* Função libera - Libera a memória de um ponto previamente criado. */
void libera(Ponto* ponto);

/* Função acessa - Devolve os valores das coordenadas de um ponto */
void acessa(Ponto* ponto, float* x, float* y);

/* Função atribui -  Atribui novos valores às coordenadas de um ponto */
void atribui(Ponto* ponto, float x, float y);

/* Função distancia - Retorna a distância entre dois pontos */
float distancia(Ponto* ponto1, Ponto* ponto2);

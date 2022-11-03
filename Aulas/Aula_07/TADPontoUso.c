/* ********************************************************************* */
/* Disciplina: Linguagem de Programacao 3                                */
/* Professor: André Lucio                                                */
/* Objetivo de Programa: Utilizar os servicoss da TAD ponto              */
/* Tópico da Disciplina: Tipos Abstratos de Dados                        */
/* ********************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"

int main(void) {

	Ponto* ponto_01, * ponto_02;
	float coordenada_x, coordenada_y, distancia_entre_os_pontos;

	/*Cria ponto 1 */
	printf("Informe a coordenada X do ponto 1: ");
	scanf_s("%f", &coordenada_x);
	printf("Informe a coordenada Y do ponto 1: ");
	scanf_s("%f", &coordenada_y);
	ponto_01 = cria(coordenada_x, coordenada_y);

	/*Acessa as coordenadas do ponto 1 */
	acessa(ponto_01, &coordenada_x, &coordenada_y);

	/*Atribui valor para as coordenadas do ponto 1 */
	printf("P1 = (%.2f,%.2f)\n", coordenada_x, coordenada_y);

	/*Alterar o ponto 1*/
	printf("Informe a nova coordenada X do ponto 1: ");
	scanf_s("%f", &coordenada_x);
	printf("Informe a nova coordenada Y do ponto 1: ");
	scanf_s("%f", &coordenada_y);
	atribui(ponto_01, coordenada_x, coordenada_y);

	/*Acessa as coordenadas do ponto 1 */
	acessa(ponto_01, &coordenada_x, &coordenada_y);
	printf("P1 = (%.2f,%.2f)\n", coordenada_x, coordenada_y);

	/*Cria ponto 2 */
	printf("Informe a coordenada X do ponto 2: ");
	scanf_s("%f", &coordenada_x);
	printf("Informe a coordenada Y do ponto 2: ");
	scanf_s("%f", &coordenada_y);
	ponto_02 = cria(coordenada_x, coordenada_y);

	/*Acessa as coordenadas do ponto 2 */
	acessa(ponto_02, &coordenada_x, &coordenada_y);

	/*Atribui valor para as coordenadas do ponto 2 */
	printf("P2 = (%.2f,%.2f)\n", coordenada_x, coordenada_y);

	/*Alterar o ponto 2*/
	printf("Informe a nova coordenada X do ponto 2: ");
	scanf_s("%f", &coordenada_x);
	printf("Informe a nova coordenada Y do ponto 2: ");
	scanf_s("%f", &coordenada_y);
	atribui(ponto_02, coordenada_x, coordenada_y);

	/*Acessa as coordenadas do ponto 2 */
	acessa(ponto_02, &coordenada_x, &coordenada_y);
	printf("P2 = (%.2f,%.2f)\n", coordenada_x, coordenada_y);

	distancia_entre_os_pontos = distancia(ponto_01, ponto_02);
	printf("Distancia entre os pontos 1 e 2  = %.2f\n", distancia_entre_os_pontos);


	libera(ponto_01);
	libera(ponto_02);
	system("PAUSE");

	return 0;

}

/* ********************************************************************* */
/* Disciplina: Programa��o Estruturada - UVA                             */
/* Professor: Andr� Lucio                                                */
/* Objetivo de Programa: Inserir os dados de um aluno em um struct alo-  */
/*                       cado estaticamente                              */
/* T�pico da Disciplinas Revis�o do uso de Ponteiros                     */
/* ********************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct aluno {
    char nome[40];
    float A1, A2, A3;
    float media;
}Aluno;
/* Com o uso do typedef uma vari�vel do tipo "struct aluno" pode ser declarada
 apenas como "Aluno" */

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "Portuguese");

    Aluno aluno_01; // a vari�vel "a" foi declarada j� usando a redefini��o de tipo
    
    printf("Informe o nome do Aluno: ");
    scanf_s("%[^\n]", aluno_01.nome, sizeof(aluno_01.nome));
    printf("Informe a nota da A1: ");
    scanf_s("%f", &aluno_01.A1, sizeof(float));
    printf("Informe a nota da A2: ");
    scanf_s("%f", &aluno_01.A2, sizeof(float));
    printf("Informe a nota da A3: ");
    scanf_s("%f", &aluno_01.A3, sizeof(float));

    /*O & foi usado, pois a fun��o "scanf" necessita saber o endere�o da vari�vel.
    No caso do nome n�o foi necess�rio, pois em C um String � tratado como um vetor
    de caracteres e o nome dado a um vetor sempre representa o endere�o
    da sua primeira posi��o.*/

    printf("Nome: %s V1: %.2f  V2: %.2f  VT: %.2f \n", aluno_01.nome, aluno_01.A1, aluno_01.A2, aluno_01.A3);

    system("PAUSE");



    return EXIT_SUCCESS;
}
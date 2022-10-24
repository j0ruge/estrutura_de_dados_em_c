/* ********************************************************************* */
/* Disciplina: Programação Estruturada - UVA
/* Professor: André Lucio                                                */
/* Objetivo de Programa: Inserir vários alunos em um vetor dinâmico de   */
/*                       structs estáticos. A inserção dos dados dos alu-*/
/*                       será feita com uma função que retorna o número  */
/*                       de alunos inseridos (passagem de  parâmetro de  */
/*                       vetor é sempre por referência)                  */
/* Tópico da Disciplinas Revisão do uso de Ponteiros                     */
/* 																	     */
/* ********************************************************************* */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct aluno {
    int matricula;
    char nome[40];
    float A1, A2, A3, media;
}Aluno, * PAluno;
/* Com o uso do typedef uma variável do tipo "struct aluno" pode ser declarada
 apenas como "Aluno" e um ponteiro para esta estrutura como "PAluno"*/

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Portuguese");


    system("PAUSE");
    return 0;
}

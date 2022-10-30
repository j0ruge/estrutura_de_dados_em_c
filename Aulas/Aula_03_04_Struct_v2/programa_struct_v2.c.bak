/* ********************************************************************* */
/* Disciplina: Programação Estruturada - UVA                             */
/* Professor: André Lucio                                                */
/* Objetivo de Programa: Inserir os dados de um aluno em um struct alo-  */
/*                       cado estaticamente. A inserção dos dados do alu-*/
/*                       será feita com um procedimento (passagem de     */
/*                       parâmetro do struc por referência               */
/* Tópico da Disciplinas Revisão do uso de Ponteiros                     */
/* ********************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct aluno {
    char nome[40];
    float A1, A2, A3;
    float media;
}Aluno, * PAluno;
/* Com o uso do typedef uma variável do tipo "struct aluno" pode ser declarada
 apenas como "Aluno" e um ponteiro para esta estrutura como "PAluno"*/

void incluir_aluno(PAluno a);

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "Portuguese");


    Aluno aluno_exemplo; // a variável "a" foi declarada já usando a redefinição de tipo

    incluir_aluno(&aluno_exemplo);

    printf("Nome: %s A1: %.2f  A2: %.2f  A3: %.2f \n", aluno_exemplo.nome, aluno_exemplo.A1, aluno_exemplo.A2, aluno_exemplo.A3);

    system("PAUSE");
    

    return EXIT_SUCCESS;
}

void incluir_aluno(PAluno aluno)
{
    /* Repare que no main o struct foi passado por referência na chamada a deste
    procedimento. Sendo assim, o que chega como parâmetro não é uma cópia do
    struct, mas o endereço para o início dele na memória. O "C" oferece a seta
    -> para acessarmos o dados do struct a partir do seu ponteiro. Isto facilita
    pois o programador não precisa escrever, por exemplo, (*a).V1, pois isso equi
    vale a a->V1                   */

    printf("Informe o nome do Aluno: ");
    scanf_s("%[^\n]", aluno->nome, sizeof(aluno->nome));
    printf("Informe a nota da A1: ");
    scanf_s("%f", &aluno->A1);
    printf("Informe a nota da A2: ");
    scanf_s("%f", &aluno->A2);
    printf("Informe a nota do A3: ");
    scanf_s("%f", &aluno->A3);

    /*O & foi usado, pois a função "scanf" necessita saber o endereço da variável.
    No caso do nome não foi necessário, pois em C um String é tratado como um vetor
    de caracteres e o nome dado a um vetor sempre representa o endereço
    da sua primeira posição.*/

}
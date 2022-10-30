/* ********************************************************************* */
/* Disciplina: Programação Estruturada - UVA                             */
/* Professor: André Lucio                                                */
/* Objetivo de Programa: Inserir vários alunos em um vetor estático de   */
/*                       structs estáticos. A inserção dos dados dos alu-*/
/*                       será feita com uma função que retorna o número  */
/*                       de alunos inseridos (passagem de  parâmetro de  */
/*                       vetor é sempre por referência)                  */
/*                       Uma outra melhoria nesta versão foi a criação de*/
/*                       um procedimento imprimir.                       */
/* Tópico da Disciplinas Revisão do uso de Ponteiros                     */
/* ********************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 100 // número máximo do vetor de alunos

typedef struct aluno {
    char nome[40];
    float A1, A2, A3, media;
}Aluno, * PAluno;
/* Com o uso do typedef uma variável do tipo "struct aluno" pode ser declarada
 apenas como "Aluno" e um ponteiro para esta estrutura como "PAluno"*/

int incluir_aluno(PAluno prt_aluno);
void imprimir_alunos(int num_alunos, PAluno ptr_aluno);
void media_alunos(int num_alunos, PAluno prt_aluno);


int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Aluno alunos[MAX]; // a variável "a" foi declarada já usando a redefinição de tipo
    int qtd_alunos;

    qtd_alunos = incluir_aluno(alunos);
    media_alunos(qtd_alunos, alunos);
    imprimir_alunos(qtd_alunos, alunos);

    system("PAUSE");
    return 0;
}

int incluir_aluno(PAluno prt_aluno)
{
    int num_alunos, indice;
    //num_alunos é uma variável que será lida para guardar o número de alunos inseridos 
    printf("Informe o numero de alunos a serem inseridos: ");
    scanf_s("%d", &num_alunos);

    for (indice = 0; indice < num_alunos; indice++)
    {
        printf("Informe o nome do Aluno: ");
        scanf_s(" %[^\n]", prt_aluno[indice].nome, sizeof(prt_aluno->nome));
        printf("Informe a nota da A1: ");
        scanf_s("%f", &prt_aluno[indice].A1);
        printf("Informe a nota da A2: ");
        scanf_s("%f", &prt_aluno[indice].A2);
        printf("Informe a nota do A3: ");
        scanf_s("%f", &prt_aluno[indice].A3);
    }
    /* Nesta versão podemos usar o "." para acessar as variáveis do struct, pois
       o vetor  contém estruturas estáticas e o uso dos colchetes [i] permite
       acessar diretamente o conteúdo da célula de um vetor */

       /*O & foi usado, pois a função "scanf" necessita saber o endereço da variável.
       No caso do nome não foi necessário, pois em C um String é tratado como um vetor
       de caracteres e o nome dado a um vetor sempre representa o endereço
       da sua primeira posição.*/

    return num_alunos;
}

void imprimir_alunos(int num_alunos, PAluno ptr_aluno)
{
    int indice;
    for (indice = 0; indice < num_alunos; indice++)
    {
        printf("Nome: %s A1: %.2f  A2: %.2f  A3: %.2f Media: %.2f\n", ptr_aluno[indice].nome, ptr_aluno[indice].A1, ptr_aluno[indice].A2, ptr_aluno[indice].A3, ptr_aluno[indice].media);
    }
}

void media_alunos(int num_alunos, PAluno prt_aluno)
{
    int indice;

    for (indice = 0; indice < num_alunos; indice++)
    {
        prt_aluno[indice].media = (prt_aluno[indice].A1 + prt_aluno[indice].A2 + prt_aluno[indice].A3) / 3;
    }
}

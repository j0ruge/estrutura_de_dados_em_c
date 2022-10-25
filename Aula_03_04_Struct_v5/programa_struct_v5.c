/* ********************************************************************* */
/* Disciplina: Programação Estruturada - UVA                             */
/* Professor: André Lucio                                                */
/* Objetivo de Programa: Inserir vários alunos em um vetor estático de   */
/*                       structs dinâmicos. A inserção dos dados dos alu-*/
/*                       será feita com uma função que retorna o número  */
/*                       de alunos inseridos (passagem de  parâmetro de  */
/*                       vetor é sempre por referência)                  */
/* Tópico da Disciplinas Revisão do uso de Ponteiros                     */
/* ********************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX 100 // número máximo do vetor de alunos

typedef struct aluno {
    int matricula;
    char nome[40];
    float A1, A2, A3, media;
}Aluno, * PAluno, ** PPAluno;
/* Com o uso do typedef uma variável do tipo "struct aluno" pode ser declarada
 apenas como "Aluno" e um ponteiro para esta estrutura como "PAluno" e um ponteiro
 de ponteiro para a estrutura como "PPAluno"*/

int incluir_aluno(PPAluno ptr_ptr_aluno);
void imprimir_alunos(int num_alunos, PPAluno ptr_ptr_aluno);
void media_alunos(int num_alunos, PPAluno ptr_ptr_aluno);
void inicializa_vetor(PPAluno ptr_ptr_aluno);
int comparar_aluno_media_matricula(const void* aluno_01, const void* aluno_02);
int comparar_alunos_alfabetico(const void* aluno_01, const void* aluno_02);
PPAluno mock_testes();

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Aluno* alunos[MAX]; // a variável "a" foi declarada já usando a redefinição de tipo
    int qtd_alunos;

    inicializa_vetor(alunos);
    qtd_alunos = incluir_aluno(alunos);
    media_alunos(qtd_alunos, alunos);
    imprimir_alunos(qtd_alunos, alunos);

   
    system("PAUSE");
    return EXIT_SUCCESS;
}

int incluir_aluno(PPAluno ptr_ptr_aluno)
{
    int num_alunos, indice;
    //num_alunos é uma variável que será lida para guardar o número de alunos inseridos 
    printf("Informe o numero de alunos a serem inseridos: ");
    scanf_s("%d", &num_alunos);

    for (indice = 0; indice < num_alunos; indice++)
    {
        // No comando a seguir está sendo alocado um espaço de memória para 
        // armazenar os dados do aluno "indice".
        ptr_ptr_aluno[indice] = (PAluno)malloc(sizeof(Aluno));

        if (ptr_ptr_aluno[indice] == NULL)
        {
            printf("\n\nMemoria insuficiente\n\n");
            exit(1);
        }
        printf("Informe o nome do Aluno: ");
        scanf_s(" %[^\n]", ptr_ptr_aluno[indice]->nome, sizeof(ptr_ptr_aluno[indice]->nome));
        printf("Informe a nota da A1: ");
        scanf_s("%f", &ptr_ptr_aluno[indice]->A1);
        printf("Informe a nota da A2: ");
        scanf_s("%f", &ptr_ptr_aluno[indice]->A2);
        printf("Informe a nota do A3: ");
        scanf_s("%f", &ptr_ptr_aluno[indice]->A3);
    }
    /* Nesta versão podemos temos que usar -> para acessar as variáveis do struct,
     pois o vetor  contém ponteiros para estruturas e não as estruturas de fato */

    return num_alunos;
}

void imprimir_alunos(int num_alunos, PPAluno ptr_ptr_aluno)
{
    int indice;
    for (indice = 0; indice < num_alunos; indice++)
    {
        printf("Nome: %s A1: %.2f  A2: %.2f  A3: %.2f Media: %.2f\n", ptr_ptr_aluno[indice]->nome, ptr_ptr_aluno[indice]->A1, ptr_ptr_aluno[indice]->A2, ptr_ptr_aluno[indice]->A3, ptr_ptr_aluno[indice]->media);
    }
}

void media_alunos(int num_alunos, PPAluno ptr_ptr_aluno)
{
    int indice;
    for (indice = 0; indice < num_alunos; indice++)
    {
        ptr_ptr_aluno[indice]->media = (ptr_ptr_aluno[indice]->A1 + ptr_ptr_aluno[indice]->A2 + ptr_ptr_aluno[indice]->A3) / 3;
    }
}

/*Procedimento para inicializar todas as posições do vetor com NULL*/
void inicializa_vetor(PPAluno ptr_ptr_aluno)
{
    int indice;
    for (indice = 0; indice < MAX; indice++)
    {
        ptr_ptr_aluno[indice] = NULL;
    }
}
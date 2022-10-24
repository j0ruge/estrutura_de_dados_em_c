/* ********************************************************************* */
/* Disciplina: Programação Estruturada - UVA                             */
/* Professor: André Lucio                                                */
/* Objetivo de Programa: Inserir vários alunos em um vetor dinâmico de   */
/*                       structs também alocados dinâmicamente.          */
/* Tópico da Disciplinas Revisão do uso de Ponteiros                     */
/* ********************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct aluno {
    int matricula;
    char nome[40];
    float A1, A2, A3, media;
}Aluno, * PAluno, ** PPAluno;
/* Com o uso do typedef uma variável do tipo "struct aluno" pode ser declarada
 apenas como "Aluno" e um ponteiro para esta estrutura como "PAluno" e um ponteiro
 de ponteiro para a estrutura como "PPAluno"*/

PPAluno incluir_aluno(int num_alunos);
void imprimir_alunos(int num_alunos, PPAluno ptr_ptr_aluno);
void media_alunos(int num_alunos, PPAluno ptr_ptr_aluno);
void inicializa_vetor(int num_alunos, PPAluno ppa);
int comparar_aluno_media_matricula(const void* aluno_01, const void* aluno_02);
int comparar_alunos_alfabetico(const void* aluno_01, const void* aluno_02);
PPAluno mock_testes();

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Portuguese");

    PPAluno alunos; // a variável "alunos" foi declarada já usando a redefinição de tipo
    int qtd_alunos;

    alunos = mock_testes();
    media_alunos(10, alunos);
    imprimir_alunos(10, alunos);
    printf("\n\nVetor ordenado por media e matricula\n");
    qsort(alunos, 10, sizeof(Aluno*), comparar_aluno_media_matricula);
    imprimir_alunos(10, alunos);
    printf("\n\nVetor ordenado por nome\n");
    qsort(alunos, 10, sizeof(Aluno*), comparar_alunos_alfabetico);
    imprimir_alunos(10, alunos);

   
    system("PAUSE");
    return EXIT_SUCCESS;
}


PPAluno incluir_aluno(int num_alunos) {
    int indice;
    PPAluno ptr_ptr_aluno;
    //alocar o vetor de estruturas
    ptr_ptr_aluno = (PPAluno) malloc(num_alunos * sizeof(PAluno));
    if (ptr_ptr_aluno == NULL) {
        printf("\n\nMemoria insuficiente\n\n");
        exit(1);
    }

    //este procedimento aponta todas as células do vetor para NULL
    inicializa_vetor(num_alunos, ptr_ptr_aluno);

    for (indice = 0; indice < num_alunos; indice++)
    {
        ptr_ptr_aluno[indice] = (PAluno)malloc(sizeof(Aluno));
        if (ptr_ptr_aluno == NULL) {
            printf("\n\nMemoria insuficiente\n\n");
            exit(1);
        }

        printf("Informe a matricula do Aluno: ");
        scanf_s("%d", &ptr_ptr_aluno[indice]->matricula);
        printf("Informe o nome do Aluno: ");
        scanf_s(" %[^\n]", ptr_ptr_aluno[indice]->nome, sizeof(ptr_ptr_aluno[indice]->nome));
        printf("Informe a nota da A1: ");
        scanf_s("%f", &ptr_ptr_aluno[indice]->A1);
        printf("Informe a nota da A2: ");
        scanf_s("%f", &ptr_ptr_aluno[indice]->A2);
        printf("Informe a nota do A3: ");
        scanf_s("%f", &ptr_ptr_aluno[indice]->A3);
    }

    return ptr_ptr_aluno;
}

PPAluno mock_testes() {
    int indice;
    PPAluno ptr_ptr_aluno;
    //alocar o vetor de estruturas
    ptr_ptr_aluno = (PPAluno)malloc(10 * sizeof(PAluno));
    if (ptr_ptr_aluno == NULL) exit(1);
    //este procedimento aponta todas as células do vetor para NULL
    inicializa_vetor(10, ptr_ptr_aluno);
    ptr_ptr_aluno[0] = (PAluno)malloc(sizeof(Aluno));
    ptr_ptr_aluno[0]->matricula = 44;
    strcpy_s(ptr_ptr_aluno[0]->nome, "Andre Lucio", (sizeof(char)*40));
    ptr_ptr_aluno[0]->A1 = 8.0;
    ptr_ptr_aluno[0]->A2 = 7.3;
    ptr_ptr_aluno[0]->A3 = 6.0;
    ptr_ptr_aluno[0]->media = 0.0;

    ptr_ptr_aluno[1] = (PAluno)malloc(sizeof(Aluno));
    ptr_ptr_aluno[1]->matricula = 10;
    strcpy_s(ptr_ptr_aluno[1]->nome, "Joao Pedro", sizeof(ptr_ptr_aluno[0]->nome));
    ptr_ptr_aluno[1]->A1 = 5.0;
    ptr_ptr_aluno[1]->A2 = 7.0;
    ptr_ptr_aluno[1]->A3 = 6.2;
    ptr_ptr_aluno[1]->media = 0.0;

    ptr_ptr_aluno[2] = (PAluno)malloc(sizeof(Aluno));
    ptr_ptr_aluno[2]->matricula = 5;
    strcpy_s(ptr_ptr_aluno[2]->nome, "Joana Josefa", sizeof(ptr_ptr_aluno[0]->nome));
    ptr_ptr_aluno[2]->A1 = 5.0;
    ptr_ptr_aluno[2]->A2 = 7.9;
    ptr_ptr_aluno[2]->A3 = 6.0;
    ptr_ptr_aluno[2]->media = 0.0;

    ptr_ptr_aluno[3] = (PAluno)malloc(sizeof(Aluno));
    ptr_ptr_aluno[3]->matricula = 22;
    strcpy_s(ptr_ptr_aluno[3]->nome, "Alana Souza", sizeof(ptr_ptr_aluno[0]->nome));
    ptr_ptr_aluno[3]->A1 = 5.0;
    ptr_ptr_aluno[3]->A2 = 7.0;
    ptr_ptr_aluno[3]->A3 = 6.0;
    ptr_ptr_aluno[3]->media = 0.0;

    ptr_ptr_aluno[4] = (PAluno)malloc(sizeof(Aluno));
    ptr_ptr_aluno[4]->matricula = 23;
    strcpy_s(ptr_ptr_aluno[4]->nome, "Tamiris Vespucia", sizeof(ptr_ptr_aluno[0]->nome));
    ptr_ptr_aluno[4]->A1 = 5.0;
    ptr_ptr_aluno[4]->A2 = 7.4;
    ptr_ptr_aluno[4]->A3 = 6.0;
    ptr_ptr_aluno[4]->media = 0.0;

    ptr_ptr_aluno[5] = (PAluno)malloc(sizeof(Aluno));
    ptr_ptr_aluno[5]->matricula = 9;
    strcpy_s(ptr_ptr_aluno[5]->nome, "Carol Villar", sizeof(ptr_ptr_aluno[0]->nome));
    ptr_ptr_aluno[5]->A1 = 5.0;
    ptr_ptr_aluno[5]->A2 = 7.6;
    ptr_ptr_aluno[5]->A3 = 6.4;
    ptr_ptr_aluno[5]->media = 0.0;

    ptr_ptr_aluno[6] = (PAluno)malloc(sizeof(Aluno));
    ptr_ptr_aluno[6]->matricula = 111;
    strcpy_s(ptr_ptr_aluno[6]->nome, "Shirley Mendonca", sizeof(ptr_ptr_aluno[0]->nome));
    ptr_ptr_aluno[6]->A1 = 5.6;
    ptr_ptr_aluno[6]->A2 = 7.2;
    ptr_ptr_aluno[6]->A3 = 6.0;
    ptr_ptr_aluno[6]->media = 0.0;

    ptr_ptr_aluno[7] = (PAluno)malloc(sizeof(Aluno));
    ptr_ptr_aluno[7]->matricula = 33;
    strcpy_s(ptr_ptr_aluno[7]->nome, "Carlos Souza", sizeof(ptr_ptr_aluno[0]->nome));
    ptr_ptr_aluno[7]->A1 = 5.0;
    ptr_ptr_aluno[7]->A2 = 7.0;
    ptr_ptr_aluno[7]->A3 = 6.0;
    ptr_ptr_aluno[7]->media = 0.0;

    ptr_ptr_aluno[8] = (PAluno)malloc(sizeof(Aluno));
    ptr_ptr_aluno[8]->matricula = 123;
    strcpy_s(ptr_ptr_aluno[8]->nome, "Beatriz Maria", sizeof(ptr_ptr_aluno[0]->nome));
    ptr_ptr_aluno[8]->A1 = 5.6;
    ptr_ptr_aluno[8]->A2 = 7.2;
    ptr_ptr_aluno[8]->A3 = 6.0;
    ptr_ptr_aluno[8]->media = 0.0;

    ptr_ptr_aluno[9] = (PAluno)malloc(sizeof(Aluno));
    ptr_ptr_aluno[9]->matricula = 2;
    strcpy_s(ptr_ptr_aluno[9]->nome, "Ana de Souza", sizeof(ptr_ptr_aluno[0]->nome));
    ptr_ptr_aluno[9]->A1 = 5.0;
    ptr_ptr_aluno[9]->A2 = 7.0;
    ptr_ptr_aluno[9]->A3 = 6.2;
    ptr_ptr_aluno[9]->media = 0.0;

    return ptr_ptr_aluno;
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
void inicializa_vetor(int num_alunos, PPAluno ptr_prt_aluno) {
    int indice;
    for (indice = 0; indice < num_alunos; indice++) {
        ptr_prt_aluno[indice] = NULL;
    }
}

/* Função de comparação: elemento é do tipo Aluno */
/*OBS: quando o vetor é ponteiro de ponteiro,
esta função de comparação deve prever isso*/
int comparar_alunos_alfabetico(const void* aluno_01, const void* aluno_02) {
    //converte ponteiros genéricos para ponteiros de Aluno
    //Aluno* aluno1 = (Aluno*) a1; //ERRADO
    //Aluno* aluno2 = (Aluno*) a2; //ERRADO
    Aluno** aluno1 = (Aluno**)aluno_01;
    Aluno** aluno2 = (Aluno**)aluno_02;
    // dados os ponteiros de Aluno, faz a comparação
    return strcmp((*aluno1)->nome, (*aluno2)->nome);
}

/*Função de comparacao a ser usada pelo qsort*/
/*OBS: quando o vetor é ponteiro de ponteiro,
esta função de comparação deve prever isso*/
int comparar_aluno_media_matricula(const void* aluno_01, const void* aluno_02) {
    //Aluno* aluno1 = (Aluno*) a1; //ERRADO
    //Aluno* aluno2 = (Aluno*) a2; //ERRADO
    Aluno** aluno1 = (Aluno**)aluno_01;
    Aluno** aluno2 = (Aluno**)aluno_02;
    //primeiro criterio = media mais alta primeiro (decrescente)
    if ((*aluno1)->media > (*aluno2)->media) return -1;
    if ((*aluno1)->media < (*aluno2)->media) return 1;
    //segundo criterio = medias iguais - matricula (crescente)
    if ((*aluno1)->matricula < (*aluno2)->matricula) return -1;
    if ((*aluno1)->matricula > (*aluno2)->matricula) return 1;
}
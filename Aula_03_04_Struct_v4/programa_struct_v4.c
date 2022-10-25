/* ********************************************************************* */
/* Disciplina: Programa��o Estruturada - UVA
/* Professor: Andr� Lucio                                                */
/* Objetivo de Programa: Inserir v�rios alunos em um vetor din�mico de   */
/*                       structs est�ticos. A inser��o dos dados dos alu-*/
/*                       ser� feita com uma fun��o que retorna o n�mero  */
/*                       de alunos inseridos (passagem de  par�metro de  */
/*                       vetor � sempre por refer�ncia)                  */
/* T�pico da Disciplinas Revis�o do uso de Ponteiros                     */
/* 																	     */
/* ********************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct aluno {
    int matricula;
    char nome[40];
    float A1, A2, A3, media;
}Aluno, * PAluno;
/* Com o uso do typedef uma vari�vel do tipo "struct aluno" pode ser declarada
 apenas como "Aluno" e um ponteiro para esta estrutura como "PAluno"*/

PAluno incluir_aluno(int* num_alunos);
void imprimir_alunos(int num_alunos, PAluno ptr_aluno);
void media_alunos(int num_alunos, PAluno ptr_aluno);
int comparar_alunos_alfabetico(const void* aluno_01, const void* aluno_02);
int comparar_aluno_media_matricula(const void* aluno_01, const void* aluno_02);
PAluno mock_testes();


int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Portuguese");

    PAluno alunos;
    int qtd_alunos = 0;

    //alunos = incluir_aluno(&qtd_alunos); //ATEN��O nesta vers�o a fun��o incluir passou a retornar o ponteiro para o in�cio do vetor
    //, pois a aloca��o din�mica do vetor foi feita dentro da fun��o e o escopo global n�o iria visualizar este endere�o, ocasionando erro de execu��o.

    alunos = mock_testes(); //Este mock � s� para evitar ter que digitar v�rios alunos para testar. Descomente a linha 191 para incluir via teclado
    media_alunos(10, alunos);
    imprimir_alunos(10, alunos);
    printf("\n\nVetor ordenado por media e matricula\n");
    qsort(alunos, 10, sizeof(Aluno), comparar_aluno_media_matricula);
    imprimir_alunos(10, alunos);
    printf("\n\nVetor ordenado por nome\n");
    qsort(alunos, 10, sizeof(Aluno), comparar_alunos_alfabetico);
    imprimir_alunos(10, alunos);

    system("PAUSE");
    return EXIT_SUCCESS;
}

PAluno incluir_aluno(int* num_alunos) {
    int indice;
    PAluno ptr_aluno;
    //num_alunos � uma vari�vel que ser� lida para guardar o n�mero de alunos inseridos 
    printf("Informe o numero de alunos a serem inseridos: ");
    scanf_s("%d", num_alunos);
    ptr_aluno = (PAluno)malloc((*num_alunos) * sizeof(Aluno));
    if (ptr_aluno == NULL) {
        printf("FALTOU MEMORIA");
        exit(1);
    }

    for (indice = 0; indice < (*num_alunos); indice++) {
        printf("Informe a matricula: ");
        scanf_s("%d", &ptr_aluno[indice].matricula);
        printf("Informe o nome do Aluno: ");
        scanf_s(" %[^\n]", ptr_aluno[indice].nome, sizeof(ptr_aluno->nome));
        printf("Informe a nota da A1: ");
        scanf_s("%f", &ptr_aluno[indice].A1);
        printf("Informe a nota da A2: ");
        scanf_s("%f", &ptr_aluno[indice].A2);
        printf("Informe a nota do A3: ");
        scanf_s("%f", &ptr_aluno[indice].A3);
    }

    /* Nesta vers�o podemos usar o "." para acessar as vari�veis do struct, pois
       o vetor  cont�m estruturas est�ticas e o uso dos colchetes [indice] permite
       acessar diretamente o conte�do da c�lula de um vetor */

       /*O & foi usado, pois a fun��o "scanf" necessita saber o endere�o da vari�vel.
       No caso do nome n�o foi necess�rio, pois em C um String � tratado como um vetor
       de caracteres e o nome dado a um vetor sempre representa o endere�o
       da sua primeira posi��o.*/

    return ptr_aluno;
}

void imprimir_alunos(int num_alunos, PAluno ptr_aluno) {
    int indice;
    for (indice = 0; indice < num_alunos; indice++) {
        printf("Nome: %s Matricula: %d A1: %.2f  A2: %.2f  A3: %.2f Media: %.2f\n", ptr_aluno[indice].nome, ptr_aluno[indice].matricula, ptr_aluno[indice].A1, ptr_aluno[indice].A2, ptr_aluno[indice].A3, ptr_aluno[indice].media);
    }
}

void media_alunos(int num_alunos, PAluno ptr_aluno) {
    int indice;
    for (indice = 0; indice < num_alunos; indice++) {
        ptr_aluno[indice].media = (ptr_aluno[indice].A1 + ptr_aluno[indice].A2 + ptr_aluno[indice].A3) / 3;
    }
}

/* Fun��o de compara��o: elemento � do tipo Aluno */
/*OBS: quando o vetor � ponteiro de ponteiro,
esta fun��o de compara��o deve prever isso*/
int comparar_alunos_alfabetico(const void* aluno_01, const void* aluno_02) {
    //converte ponteiros gen�ricos para ponteiros de Aluno
    //Aluno* aluno1 = (Aluno*) aluno_01; //ERRADO
//Aluno* aluno2 = (Aluno*) aluno_02; //ERRADO
    Aluno* aluno1 = (Aluno*)aluno_01;
    Aluno* aluno2 = (Aluno*)aluno_02;
    // dados os ponteiros de Aluno, faz a compara��o
    return strcmp(aluno1->nome, aluno2->nome);
}

/*Fun��o de comparacao a ser usada pelo qsort*/
/*OBS: quando o vetor � ponteiro de ponteiro,
esta fun��o de compara��o deve prever isso*/
int comparar_aluno_media_matricula(const void* aluno_01, const void* aluno_02) {
    //Aluno* aluno1 = (Aluno*) aluno_01; //ERRADO
    //Aluno* aluno2 = (Aluno*) aluno_02; //ERRADO
    Aluno* aluno1 = (Aluno*)aluno_01;
    Aluno* aluno2 = (Aluno*)aluno_02;
    //primeiro criterio = media mais alta primeiro (decrescente)
    if (aluno1->media > aluno2->media) return -1;
    if (aluno1->media < aluno2->media) return 1;
    //segundo criterio = medias iguais - matricula (crescente)
    if (aluno1->matricula < aluno2->matricula) return -1;
    if (aluno1->matricula > aluno2->matricula) return 1;
}

PAluno mock_testes() {    
    PAluno ptr_aluno;
    //alocar o vetor de estruturas
    ptr_aluno = (PAluno)malloc(10 * sizeof(Aluno));
    if (ptr_aluno == NULL) exit(1);
    //este procedimento aponta todas as c�lulas do vetor para NULL
    ptr_aluno[0].matricula = 44;
    strcpy_s(ptr_aluno[0].nome, sizeof(ptr_aluno->nome),  "Andre Lucio");
    ptr_aluno[0].A1 = 8,0;
    ptr_aluno[0].A2 = 7,3;
    ptr_aluno[0].A3 = 6,0;
    ptr_aluno[0].media = 0,0;

    ptr_aluno[1].matricula = 10;
    strcpy_s(ptr_aluno[1].nome, sizeof(ptr_aluno->nome), "Joao Pedro");
    ptr_aluno[1].A1 = 5,0;
    ptr_aluno[1].A2 = 7,0;
    ptr_aluno[1].A3 = 6,2;
    ptr_aluno[1].media = 0,0;

    ptr_aluno[2].matricula = 5;
    strcpy_s(ptr_aluno[2].nome, sizeof(ptr_aluno->nome), "Joana Josefa");
    ptr_aluno[2].A1 = 5,0;
    ptr_aluno[2].A2 = 7,9;
    ptr_aluno[2].A3 = 6,0;
    ptr_aluno[2].media = 0,0;

    ptr_aluno[3].matricula = 22;
    strcpy_s(ptr_aluno[3].nome, sizeof(ptr_aluno->nome), "Alana Souza");
    ptr_aluno[3].A1 = 5,0;
    ptr_aluno[3].A2 = 7,0;
    ptr_aluno[3].A3 = 6,0;
    ptr_aluno[3].media = 0,0;

    ptr_aluno[4].matricula = 23;
    strcpy_s(ptr_aluno[4].nome, sizeof(ptr_aluno->nome), "Tamiris Vespucia");
    ptr_aluno[4].A1 = 5,0;
    ptr_aluno[4].A2 = 7,4;
    ptr_aluno[4].A3 = 6,0;
    ptr_aluno[4].media = 0,0;

    ptr_aluno[5].matricula = 9;
    strcpy_s(ptr_aluno[5].nome, sizeof(ptr_aluno->nome), "Carol Villar");
    ptr_aluno[5].A1 = 5,0;
    ptr_aluno[5].A2 = 7,6;
    ptr_aluno[5].A3 = 6,4;
    ptr_aluno[5].media = 0,0;

    ptr_aluno[6].matricula = 111;
    strcpy_s(ptr_aluno[6].nome, sizeof(ptr_aluno->nome), "Shirley Mendonca");
    ptr_aluno[6].A1 = 5,6;
    ptr_aluno[6].A2 = 7,2;
    ptr_aluno[6].A3 = 6,0;
    ptr_aluno[6].media = 0,0;

    ptr_aluno[7].matricula = 33;
    strcpy_s(ptr_aluno[7].nome, sizeof(ptr_aluno->nome), "Carlos Souza");
    ptr_aluno[7].A1 = 5,0;
    ptr_aluno[7].A2 = 7,0;
    ptr_aluno[7].A3 = 6,0;
    ptr_aluno[7].media = 0,0;

    ptr_aluno[8].matricula = 123;
    strcpy_s(ptr_aluno[8].nome, sizeof(ptr_aluno->nome), "Beatriz Maria");
    ptr_aluno[8].A1 = 5,6;
    ptr_aluno[8].A2 = 7,2;
    ptr_aluno[8].A3 = 6,0;
    ptr_aluno[8].media = 0,0;

    ptr_aluno[9].matricula = 2;
    strcpy_s(ptr_aluno[9].nome, sizeof(ptr_aluno->nome), "Ana de Souza");
    ptr_aluno[9].A1 = 5,0;
    ptr_aluno[9].A2 = 7,0;
    ptr_aluno[9].A3 = 6,2;
    ptr_aluno[9].media = 0,0;

    return ptr_aluno;
}

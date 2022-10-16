#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

 /*
 * Estrutura de Dados com Algoritmos e C, PDF pág 41
 * Programa 1.9: Exemplo de estrutura
 */

 struct Funcionario
 {
     char nome[40];
     struct
     {
         int dia;
         int mes;
         int ano;
     } dataNasci;
     char departamento[10];
     float salario;
 };


int main()
{
    setlocale(LC_ALL, "Portuguese");

	return EXIT_SUCCESS;
}

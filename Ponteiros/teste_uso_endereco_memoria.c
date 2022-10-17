#include <stdio.h>
#include <stdlib.h>

 /*
 * Teste de recuperar um valor diretamente passando o endereço de memória.
 */

int main()
{
    int number;
    int *pointerNumber;
    int temp = 2;

    number = 2015;
    pointerNumber = &temp;

    printf("%d esta alocado no endereco de memoria: %x\n", number, &number);
    printf("Inserir o endereco lido acima\n: ");
    scanf("%x", &pointerNumber); // Testes funcionais com decimal %d e hexadecimal %x,
    printf("\nValor apontatado pelo Ponteiro: %d", *pointerNumber);

	return EXIT_SUCCESS;
}



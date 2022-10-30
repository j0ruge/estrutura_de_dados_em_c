#include <stdio.h>
#include <stdlib.h>


#define NUM(a) (sizeof(a) / sizeof(int))

void excluir_numeros_pares_acima_de_dois(int numeros[])
{
    int posicao;
    int size = sizeof(numeros)/sizeof(numeros[0]);
    printf("Size of array: %d\n", size);
    for(posicao = 0; posicao < NUM(numeros); posicao++ )
        {
            printf("Numero %d\n", numeros[posicao]);
        }
}




int main()
{
    int numeros[] = {1, 2, 3, 4, 5, 6};
    excluir_numeros_pares_acima_de_dois(numeros);
    return 0;
}

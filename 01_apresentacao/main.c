#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Programa para conversão de temperatura */
float converte (float c);

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    float t1;
    float t2;
    /* mostra mensagem para usuario */
    printf("Digite a temperatura em Celsius: ");
    /* captura valor entrado via teclado */
    scanf("%f",&t1);
    /* faz a conversao */
    t2 = converte(t1);
    /* exibe resultado */
    printf("A temperatura em Fahrenheit é: %f\n", t2);
    getchar();
    return EXIT_SUCCESS;
}

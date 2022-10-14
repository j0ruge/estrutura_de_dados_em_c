#include<stdlib.h>
#include<stdio.h>
#include "validation.h"


int main()
{
    char code[10];

    do
    {
        printf("Input a code number: ");
        scanf("%s", code);
        if(!is_number_digit_check(code)){
            printf("Insert a valid number!\n");
        }
    }
    while (!is_number_digit_check(code));

    printf("%s Code is accepted, input finished!\n", code);
    system("pause");
    return EXIT_SUCCESS;
}

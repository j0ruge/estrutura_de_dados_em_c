#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{
    int age;
    char fname[50];
    char lname[50];
};


int main()
{
    FILE *inputfile;
    struct person person1;

    inputfile = fopen("personinfo.dat", "r");

    if(inputfile == NULL)
    {
        fprintf(stderr, "Error white opening file!");
        exit(EXIT_FAILURE);
    }
    while(fread(&person1, sizeof(struct person), 1, inputfile))
    {
        printf("Age is: %d First Bane is: %s Last Name is: %s",person1.age, person1.fname, person1.lname);
    }
    fclose(inputfile);

    return 0;
}

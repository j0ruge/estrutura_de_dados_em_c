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

    FILE *outputfile;

    outputfile = fopen("personinfo.dat", "w");
    if(outputfile == NULL)
    {
        fprintf(stderr, "\n Error while opening the file");
        exit(EXIT_FAILURE);
    }

    struct person person1 = {20, "Linux", "Hint"};
    struct person person2 = {25, "John", "Doe"};

    fwrite(&person1, sizeof(struct person), 1, outputfile);
    fwrite(&person2, sizeof(struct person), 1, outputfile);

    if(fwrite != EXIT_SUCCESS )
    {
        printf("\n Structures were written to the file!");
    }
    else
    {
        printf("\n Error writing to the file");
    }
    fclose(outputfile);

    return EXIT_SUCCESS;
}

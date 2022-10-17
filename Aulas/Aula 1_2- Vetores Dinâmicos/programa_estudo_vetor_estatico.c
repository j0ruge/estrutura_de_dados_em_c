#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>
#include <string.h>
#include <math.h>
#include <conio.h>

 /*
 * OBJETIVO: Vetor Estático
 */


 void informar_dados_vetor(int *vetor, int quantidade_elementos){
	printf("\nTotal de elementos do vetor = %d", quantidade_elementos);

	int indice;
	for( indice=0; indice < quantidade_elementos; indice++ )
    {
		printf("\nVET[%d] = ",indice);
		scanf("%d",&vetor[indice]);
	};
	getch();
}



int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Portuguese");

    int opcao;
	int sair;
	int quantidade;
	int elemento;

	int *vetor = NULL;
	

	//int qtd;
	int elem;
	
	int *vet = NULL;
	
	
	do{		
		system("cls");
		printf("\n(1) Informar quantos elementos tem o vetor");
		printf("\n(2) Informar os elementos do vetor");
		printf("\n(3) Imprimir os elementos do vetor");
		printf("\n(4) Buscar um elemento no vetor");
		printf("\n(5) Buscar o maior elemento do vetor");
		printf("\n(6) Buscar o menor elemento do vetor");		
		printf("\n(7) Ordenar o vetor");		
		printf("\n(8) Sair");
		printf("\n\nDigite uma opcao: ");
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1:				
				do{					
					system("cls");
					printf("\nInforme a quantidade de elementos do vetor: ");
					scanf("%d",&quantidade);					
				}while(quantidade < 0);
				vetor = (int*) malloc(quantidade*sizeof(int)); 
				getch();			
				break;
			case 2:
				informar_dados_vetor(vetor/*referencia- o nome do vetor, por definição já é um ponteiro*/,
				quantidade/*valor*/);
				getch();
				break;
			case 3:
				//imprimir_vetor(vet,qtd);
				getch();
				break;
			case 4:				
				printf("\nInforme o numero a ser procurado: ");
				scanf("%d",&elemento);				
				//int ind = buscar_elemento(vet, qtd, elem);
			//	if(ind != -1){
			//		printf("Elemento encontrado na posicao %d",ind);					
				//}else{
			//		printf("Elemento nao encontrado no vetor!");
			//	}
				getch();					
				break;

			case 5:
			//	printf("\nO maior elemento do vetor eh: %d",maior(vet,qtd));
				getch();				
				break;
			case 6:
			//	printf("\nO menor elemento do vetor eh: %d",menor(vet,qtd));
				getch();				
				break;
			case 7:
			//	bubble_sort (vet,qtd);
				break;
			
			case 8:
				printf("Sair");
				sair = 1;
				break;
			default:
				printf("Opcao Invalida!");
				getch();
				sair = 0;			
		}
	}while(!sair);

/*
    do
    {
        system("cls");
		printf("\n(1) Informar quantos elementos tem o vetor");
		printf("\n(2) Informar os elementos do vetor");
		printf("\n(3) Imprimir os elementos do vetor");
		printf("\n(4) Buscar um elemento no vetor");
		printf("\n(5) Buscar o maior elemento do vetor");
		printf("\n(6) Buscar o menor elemento do vetor");
		printf("\n(7) Ordenar o vetor");
		printf("\n(8) Sair");
		printf("\n\nDigite uma opcao: ");
        scanf("d%", &opcao);

        switch(opcao)
        {
            case 1:
                do
                {
                    system("cls");
					printf("\nInforme a quantidade de elementos do vetor: ");
					scanf("%d",&quantidade);
                }while(quantidade < 0);
                vetor = (int *) malloc(quantidade * sizeof(int));
                getch( );
                break;
            case 8:
				printf("Sair");
				sair = 1;
				break;
			default:
				printf("Opcao Invalida!");
				getch( );
				sair = 0;
        }

    }
    while(!sair);

*/
	return EXIT_SUCCESS;
}

# 4. Funções
W. Celes e J. L. Rangel

## 4.1. Definição de funções

As funções dividem grandes tarefas de computação em tarefas menores. Os programas em C geralmente consistem de várias pequenas funções em vez de poucas de maior tamanho. A
criação de funções evita a repetição de código, de modo que um procedimento que é repetido deve ser transformado numa função que, então, será chamada diversas vezes. Um
programa bem estruturado deve ser pensado em termos de funções, e estas, por sua vez, podem (e devem, se possível) esconder do corpo principal do programa detalhes ou
particularidades de implementação. Em C, tudo é feito através de funções. Os exemplos anteriores utilizam as funções da biblioteca padrão para realizar entrada e saída. Neste
capítulo, discutiremos a codificação de nossas próprias funções.

A forma geral para definir uma função é:

```
tipo_retornado nome_da_função (lista de parâmetros...)
{
	corpo da função
}

``` 
Para ilustrar a criação de funções, consideraremos o cálculo do fatorial de um número.
Podemos escrever uma função que, dado um determinado número inteiro não negativo n,
imprime o valor de seu fatorial. Um programa que utiliza esta função seria:

```
/* programa que le um numero e imprime seu fatorial */
#include <stdio.h>
void fat (int n);
/* Função principal */
int main (void)
{
int n;
scanf("%d", &n);
fat(n);
return 0;
}
/* Função pa/* programa que le um numero e imprime seu fatorial */
#include <stdio.h>
void fat(int n);
/* Função principal */
int main(void)
{
	int n;
	scanf("%d", &n);
	fat(n);
	return 0;
}
/* Função para imprimir o valor do fatorial */
void fat(int n)
{
	int i;
	int f = 1;
	for (i = 1; i <= n; i++)
		f *= i;
	printf("Fatorial = %d\n", f);
}

```

Notamos, neste exemplo, que a função `fat` recebe como parâmetro o número cujo fatorial deve ser impresso.<br>
Os parâmetros de uma função devem ser listados, com seus respectivos tipos, entre os parênteses que seguem o nome da função. Quando uma função não tem
parâmetros, colocamos a palavra reservada `void` entre os parênteses. <br>
Devemos notar que `main` também é uma função; sua única particularidade consiste em ser a função automaticamente executada após o programa ser carregado.<br>
Como as funções `main` que temos apresentado não recebem parâmetros, temos usado a palavra `void` na lista de parâmetros.

Além de receber parâmetros, uma função pode ter um valor de retorno associado. No exemplo do cálculo do fatorial, a função fat não tem nenhum valor de retorno, portanto
colocamos a palavra void antes do nome da função, indicando a ausência de um valor de retorno.

```
void fat (int n)
{
	. . .
}
```

A função `main` obrigatoriamente deve ter um valor inteiro como retorno. Esse valor pode ser usado pelo sistema operacional para testar a execução do programa. A convenção
geralmente utilizada faz com que a função main retorne zero no caso da execução ser bem sucedida ou diferente de zero no caso de problemas durante a execução.

Por fim, salientamos que C exige que se coloque o protótipo da função antes desta ser chamada. O protótipo de uma função consiste na repetição da linha de sua definição
seguida do caractere (;). Temos então:


```
void fat (int n); /* obs: existe ; no protótipo */
int main (void)
{
	. . .
}
void fat (int n) /* obs: nao existe ; na definição */
{
	. . .
}
```
A rigor, no protótipo não há necessidade de indicarmos os nomes dos parâmetros, apenas os seus tipos, portanto seria válido escrever: void fat (int);. Porém, geralmente
mantemos os nomes dos parâmetros, pois servem como documentação do significado de cada parâmetro, desde que utilizemos nomes coerentes. O protótipo da função é necessário
para que o compilador verifique os tipos dos parâmetros na chamada da função. Por exemplo, se tentássemos chamar a função com fat(4.5); o compilador provavelmente
indicaria o erro, pois estaríamos passando um valor real enquanto a função espera um valor inteiro. É devido a esta necessidade que se exige a inclusão do arquivo stdio.h para a
utilização das funções de entrada e saída da biblioteca padrão. Neste arquivo, encontram-se, entre outras coisas, os protótipos das funções `printf` e `scanf`.

Uma função pode ter um valor de retorno associado. Para ilustrar a discussão, vamos reescrever o código acima, fazendo com que a função fat retorne o valor do fatorial. A
função main fica então responsável pela impressão do valor.


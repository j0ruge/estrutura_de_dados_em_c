# 4. Fun��es
W. Celes e J. L. Rangel

## 4.1. Defini��o de fun��es

As fun��es dividem grandes tarefas de computa��o em tarefas menores. Os programas em C geralmente consistem de v�rias pequenas fun��es em vez de poucas de maior tamanho. A
cria��o de fun��es evita a repeti��o de c�digo, de modo que um procedimento que � repetido deve ser transformado numa fun��o que, ent�o, ser� chamada diversas vezes. Um
programa bem estruturado deve ser pensado em termos de fun��es, e estas, por sua vez, podem (e devem, se poss�vel) esconder do corpo principal do programa detalhes ou
particularidades de implementa��o. Em C, tudo � feito atrav�s de fun��es. Os exemplos anteriores utilizam as fun��es da biblioteca padr�o para realizar entrada e sa�da. Neste
cap�tulo, discutiremos a codifica��o de nossas pr�prias fun��es.

A forma geral para definir uma fun��o �:

```
tipo_retornado nome_da_fun��o (lista de par�metros...)
{
	corpo da fun��o
}

``` 
Para ilustrar a cria��o de fun��es, consideraremos o c�lculo do fatorial de um n�mero.
Podemos escrever uma fun��o que, dado um determinado n�mero inteiro n�o negativo n,
imprime o valor de seu fatorial. Um programa que utiliza esta fun��o seria:

```
/* programa que le um numero e imprime seu fatorial */
#include <stdio.h>
void fat (int n);
/* Fun��o principal */
int main (void)
{
int n;
scanf("%d", &n);
fat(n);
return 0;
}
/* Fun��o pa/* programa que le um numero e imprime seu fatorial */
#include <stdio.h>
void fat(int n);
/* Fun��o principal */
int main(void)
{
	int n;
	scanf("%d", &n);
	fat(n);
	return 0;
}
/* Fun��o para imprimir o valor do fatorial */
void fat(int n)
{
	int i;
	int f = 1;
	for (i = 1; i <= n; i++)
		f *= i;
	printf("Fatorial = %d\n", f);
}

```

Notamos, neste exemplo, que a fun��o `fat` recebe como par�metro o n�mero cujo fatorial deve ser impresso.<br>
Os par�metros de uma fun��o devem ser listados, com seus respectivos tipos, entre os par�nteses que seguem o nome da fun��o. Quando uma fun��o n�o tem
par�metros, colocamos a palavra reservada `void` entre os par�nteses. <br>
Devemos notar que `main` tamb�m � uma fun��o; sua �nica particularidade consiste em ser a fun��o automaticamente executada ap�s o programa ser carregado.<br>
Como as fun��es `main` que temos apresentado n�o recebem par�metros, temos usado a palavra `void` na lista de par�metros.

Al�m de receber par�metros, uma fun��o pode ter um valor de retorno associado. No exemplo do c�lculo do fatorial, a fun��o fat n�o tem nenhum valor de retorno, portanto
colocamos a palavra void antes do nome da fun��o, indicando a aus�ncia de um valor de retorno.

```
void fat (int n)
{
	. . .
}
```

A fun��o `main` obrigatoriamente deve ter um valor inteiro como retorno. Esse valor pode ser usado pelo sistema operacional para testar a execu��o do programa. A conven��o
geralmente utilizada faz com que a fun��o main retorne zero no caso da execu��o ser bem sucedida ou diferente de zero no caso de problemas durante a execu��o.

Por fim, salientamos que C exige que se coloque o prot�tipo da fun��o antes desta ser chamada. O prot�tipo de uma fun��o consiste na repeti��o da linha de sua defini��o
seguida do caractere (;). Temos ent�o:


```
void fat (int n); /* obs: existe ; no prot�tipo */
int main (void)
{
	. . .
}
void fat (int n) /* obs: nao existe ; na defini��o */
{
	. . .
}
```
A rigor, no prot�tipo n�o h� necessidade de indicarmos os nomes dos par�metros, apenas os seus tipos, portanto seria v�lido escrever: void fat (int);. Por�m, geralmente
mantemos os nomes dos par�metros, pois servem como documenta��o do significado de cada par�metro, desde que utilizemos nomes coerentes. O prot�tipo da fun��o � necess�rio
para que o compilador verifique os tipos dos par�metros na chamada da fun��o. Por exemplo, se tent�ssemos chamar a fun��o com fat(4.5); o compilador provavelmente
indicaria o erro, pois estar�amos passando um valor real enquanto a fun��o espera um valor inteiro. � devido a esta necessidade que se exige a inclus�o do arquivo stdio.h para a
utiliza��o das fun��es de entrada e sa�da da biblioteca padr�o. Neste arquivo, encontram-se, entre outras coisas, os prot�tipos das fun��es `printf` e `scanf`.

Uma fun��o pode ter um valor de retorno associado. Para ilustrar a discuss�o, vamos reescrever o c�digo acima, fazendo com que a fun��o fat retorne o valor do fatorial. A
fun��o main fica ent�o respons�vel pela impress�o do valor.


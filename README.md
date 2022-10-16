# 1.1 Dados Homogêneos

Uma estrutura de dados, que utiliza somente um tipo de dado, em sua definição é conhecida como dados homogêneos.<br>
Variáveis compostas homogêneas correspondem a posições de memória, identificadas por um mesmo nome, individualizado por índices e cujo conteúdo é composto do mesmo tipo.<br>
Sendo os **vetores** (*também conhecidos como estruturas de dados unidimensionais*) e as **matrizes** (*estruturas de dados bidimensionais*) os representantes dos dados homogêneos.


## Vetor

Também conhecidos como estruturas de dados unidimensionais homogêneas, *que utilizam somente um tipo de dado*

Algumas características do tipo vetor([10]):

* Alocação estática (deve-se conhecer as dimensões da estrutura no momento da declaração)
* Estrutura homogênea
* Alocação seqüencial (bytes contíguos)
* Inserção/Exclusão
	+ Realocação dos elementos
	+ Posição de memória não liberada


### Fórmula 
Formula genérica para cálculo de posição na memória de um elemento qualquer

$${Pos_n= enderecoInicial + ( (n - 1) * tamanhoDoTipoDoElemento) }$$

```
\* Algoritmo 1.1: Cálculo da posição de índices de um vetor na memória *\

begin
 | Endereço Elemento 1 <-- endereço inicial 
 | Endereço Elemento 2 <-- endereço inicial + (1 * tamanho Elemento)
 | Endereço Elemento 1 <-- endereço inicial + (2 * tamanho Elemento)
 | Endereço Elemento 1 <-- endereço inicial + (3 * tamanho Elemento)
end
```

### Definição

A definição de um vetor em C se dá pela sintaxe:

```
tipo_do_dado nome_do_vetor[ tamanho_do_vetor ]
```

----
## Matriz

A matriz é um arranjo bidimensional ou multidimensional homogêneo de alocação estática e seqüencial.

### Fórmula 
Formula genérica para cálculo de posição na memória de um elemento qualquer

$${Pos_ij= enderecoInicial + ((i-1) * C * tamanhoDoTipoDoElemento) + ((j-1) * tamanhoDoTipoDoElemento)}$$

Onde: 
* **C** a quantidade de colunas por linhas, 
* **i** o número da linha e 
* **j** a posição do elemento dentro linha


```
\* Algoritmo 1.2: Cálculo da posição de índices de uma matriz na memória *\

begin
 | M00 <-- endereço Inicial 
 | M01 <-- endereço Inicial + (1 * tamanho Elemento)
 | M10 <-- endereço Inicial + (i * C * tamanho Elemento)
 | M11 <-- endereço Inicial + (i * C * tamanho Elemento) + (j * tamanho Elemento)
end
```

### Definição

A definição de uma matriz bidimencional em C se dá pela sintaxe:

```
tipo_do_dado nome_da_matriz[ quantidade_linhas ] [ quantidade_colunas ]
```

A definição de uma matriz de várias dimensões em C se dá pela sintaxe:

```
tipo_do_dado nome_da_matriz[tamanho_dimensão_1] [tamanho_dimensão_2] [tamanho_dimensão_3] ... [tamanho_dimensão_n]
```

> **Note**
> 
> Uma regra que se pode sempre levar em consideração:<br>
> Para cada dimensão de uma matriz, sempre haverá um laço (normalmente um for).<br>
> Se houver duas dimensões, então haverá dois laços.
> Se houver quatro dimensões, então haverá quatro laços e assim até **n** dimensões. 

----
## Ponteiros

O ponteiro é um tipo
de dado como int, char ou float. A diferença do ponteiro em relação aos outros tipos de dados é que uma variável que seja ponteiro guardará um endereço de memória.

Por meio deste endereço pode-se acessar a informação, dizendo que a variável ponteiro aponta para uma posição de memória.<br>
O maior problema em relação ao ponteiro é entender quando se está trabalhando com o seu valor, ou seja, o endereço, e quando se está trabalhando com a informação apontada por ele.

### Operador & e *

Ele é um operador unário que devolve o endereço na memória de seu operando. O operador & tem como significado **O endereço de**.<br>

O * é um operador unário que devolve o valor da variável localizada no endereço que o segue.<br>

O operador * tem como signiicado ***NO endereço de***.<br>

Por exemplo:<br>

```m = &count;``` * põe o endereço na memória da variável count em **m** *.<br>
```q = *m;``` *coloca o valor de count em **q** *.<br>

> **Warning**
>
>Cuide-se para não confundir o operador de ponteiros (*) como multiplicação na utilização de ponteiros e vice-versa.

----
### Vetores e matrizes como ponteiros em C

Vetores nada mais são do que ponteiros com alocação estática de memória, logo, todo vetor na linguagem C é um ponteiro, tal que o acesso aos índices do vetor
podem ser realizados através de aritmética de ponteiros.

----
## Referências
[LaTeX Equation Editor](https://www.codecogs.com/latex/eqneditor.php)

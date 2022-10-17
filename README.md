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
 | Endereço Elemento 3 <-- endereço inicial + (2 * tamanho Elemento)
 | Endereço Elemento 4 <-- endereço inicial + (3 * tamanho Elemento)
end
```
Onde: 
* **n** é o Elemento, 


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

$${Pos_{ij}= enderecoInicial + ((i-1) * C * tamanhoDoTipoDoElemento) + ((j-1) * tamanhoDoTipoDoElemento)}$$

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


# 1.2 Dados Heterogêneos

Uma estrutura de dados é chamada de heterogênea quando envolve a utilização de mais de um tipo básico de dado (inteiro ou caractere, por exemplo) para
representar uma estrutura de dados.<br>
Normalmente, este tipo de dado é chamado de **registro**.<br>
A linguagem C utiliza as **estruturas** para representar um registro.<br>

> **Note**
> 
> Estruturas são utilizadas para referenciar múltiplos tipos de dados.
----

# 2. Uso de Memória

## 2.1 Alocação de memória Estática x Dinâmica

A alocação estática ocorre em tempo de compilação, ou seja, no momento em que se define uma variável ou estrutura é necessário que se definam seu tipo
e tamanho. <br>
Nesse tipo de alocação, ao se colocar o programa em execução, a memória necessária para utilizar as variáveis e estruturas estáticas precisa ser reservada e deve ficar disponível até o término do programa (rotina ou função).<br>
A alocação dinâmica ocorre em tempo de execução, ou seja, as variáveis e estruturas são declaradas sem a necessidade de se definir seu tamanho, pois nenhuma memória será reservada ao colocar o programa em execução.<br>
Durante a execução do programa, no momento em que uma variável ou parte de uma estrutura precise ser utilizada, sua memória será reservada e, no momento em que não
for mais necessária, deve ser liberada. Isso é feito com o auxílio de comandos ou funções que permitem, por meio do programa, reservar e/ou liberar memória.<br>

----
## 2.2 Alocação dinâmica de memória

Várias linguagens de programação possibilitam manipular dinamicamente a memória das suas estruturas de dados. <br>
Algumas linguagens como o Java possibilitam que uma estrutura de dados cresça ou diminua quase que sem interferência do programador. <br>
Outras linguagens como o C exigem que o trabalho de alocação de memória seja feito antecipadamente pelo programador.<br>
Na linguagem C, uma matriz na prática é um vetor de ponteiros, onde cada coluna é um ponteiro para uma linha. <br>


## 2.3 Funções para alocação de memória

Na linguagem C, a alocação dinâmica de memória pode ser realizada com apenas quatro chamadas a funções:

```
void * malloc(int qty_bytes_alloc);
void * calloc(int qty, int size);
void * realloc(void * pointer, int new_size);
free( void * pointer);
```

A função malloc permite que seja feita a alocação de uma nova área de memória para uma estrutura. <br>
A função calloc tem a mesma funcionalidade de malloc, exceto que devem ser fornecidos o tamanho da área e a quantidade de elementos. <br>
A função realloc permite que uma área previamente alocada seja aumentada ou diminuída e a função free libera uma área alocada previamente com a função malloc, calloc ou realloc.

----

### 2.3.1 Função malloc

É a função malloc que realiza a alocação de memória. Deve-se informar para a função a quantidade de bytes para alocação.<br>
A função irá retornar, se existir memória suiciente, um endereço que deve ser colocado em uma variável do tipo ponteiro.<br>
Como a função retorna um ponteiro para o tipo void, deve-se utilizar o typecast, transformando este endereço para o tipo de ponteiro desejado.<br>

----

### 2.3.2 Função calloc

Em vez de se alocar uma quantidade de bytes através da função malloc, pode-se usar a função calloc e especiicar a quantidade de bloco de um determinado
tamanho. <br>
Funcionalmente a alocação irá ocorrer de maneira idêntica. <br>
A única diferença entre o malloc e o calloc é que a última função, além de alocar o espaço, também inicializa o mesmo com zeros.<br>

----

### 2.3.3 Função realloc

Às vezes é necessário expandir uma área alocada. Para isto deve-se usar a função realloc.<br>
Deve-se passar para ela o ponteiro retornado pelo malloc e a indicação do novo tamanho. <br>
A realocação de memória pode resultar na troca de blocos na memória.<br>

----
## Referências
[LaTeX Equation Editor](https://www.codecogs.com/latex/eqneditor.php)


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

----
## Referências
[LaTeX Equation Editor](https://www.codecogs.com/latex/eqneditor.php)

# 1.3 Exercícios

### 1) Fazer um programa em C que implemente o algoritmo 1.1 para acessar elementos de vetores via ponteiros.<br>
* Crie uma função:

```
imprime_array_elemento(int *aArray, int iElemento);
```

```
\* Algoritmo 1.1: Cálculo da posição de índices de um vetor na memória *\

begin
 | Endereço Elemento 1 <-- endereço inicial 
 | Endereço Elemento 2 <-- endereço inicial + (1 * tamanho Elemento)
 | Endereço Elemento 3 <-- endereço inicial + (2 * tamanho Elemento)
 | Endereço Elemento 4 <-- endereço inicial + (3 * tamanho Elemento)
end
```
$${Pos_n= enderecoInicial + ( (n - 1) * tamanhoDoTipoDoElemento) }$$

Onde:
* **n** é o Elemento, 

----

### 2) Fazer um programa em C que implemente o algoritmo 1.2 para acessar elementos de uma matriz via ponteiros. Considerando uma matriz de 2x2 :

* Crie uma função:

```
imprime_matriz_elemento_estatica(int paMatriz[2][2], int piLinha, int piColuna);
```

```
\* Algoritmo 1.2: Cálculo da posição de índices de uma matriz na memória *\

begin
 | M00 <-- endereço Inicial 
 | M01 <-- endereço Inicial + (1 * tamanho Elemento)
 | M10 <-- endereço Inicial + (i * C * tamanho Elemento)
 | M11 <-- endereço Inicial + (i * C * tamanho Elemento) + (j * tamanho Elemento)
end
```

$${Pos_{ij}= enderecoInicial + ((i-1) * C * tamanhoDoTipoDoElemento) + ((j-1) * tamanhoDoTipoDoElemento)}$$

Onde: 
* **C** a quantidade de colunas por linhas, 
* **i** o número da linha e 
* **j** a posição do elemento dentro linha

---

* Após entender o capítulo , crie uma função:

```
imprime_matriz_elemento_dinamica(int ** paMatriz, int piLinha, int piColuna);
```

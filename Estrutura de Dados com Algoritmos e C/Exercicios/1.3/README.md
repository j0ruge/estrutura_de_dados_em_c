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


## Vetor

Também conhecidos como estruturas de dados unidimensionais homogêneas, *que utilizam somente um tipo de dado*

Algumas características do tipo vetor([10]):

* Alocação estática (deve-se conhecer as dimensões da estrutura no momento da declaração)
* Estrutura homogênea
* Alocação seqüencial (bytes contíguos)
* Inserção/Exclusão
	+ Realocação dos elementos
	+ Posição de memória não liberada


### Fórmula genérica para cálculo de posição na memória de um elemento qualquer

$${Pos_n= enderecoInicial + ( (n - 1) * tamanhoDoTipoDoElemento) }$$

```
begin
 | Endereço Elemento 1 <-- endereço inicial 
 | Endereço Elemento 2 <-- endereço inicial + (1 * tamanho Elemento)
 | Endereço Elemento 1 <-- endereço inicial + (2 * tamanho Elemento)
 | Endereço Elemento 1 <-- endereço inicial + (3 * tamanho Elemento)
end
```


## Referências
[LaTeX Equation Editor](https://www.codecogs.com/latex/eqneditor.php)

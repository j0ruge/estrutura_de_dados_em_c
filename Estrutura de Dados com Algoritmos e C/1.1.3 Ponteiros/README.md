## Programa 1.5: Exemplo de uso de ponteiros.

```
Endereco de piValor: -874514300
Valor apontado por piValor: 27121975

Valor alterado de iVarivael: 18011982
Endereco de piValor: -874514300

Process returned 0 (0x0)   execution time : 0.044 s
Press any key to continue.
```
----
## Programa 1.6: Ponteiros como referência em funções.

### Entrada
```
Entre com os valores: 5 4
```

### Saída

```
Endereco de iResultado = 2095412
Endereco de piResultado = 2095412
Soma : 9

Process returned 0 (0x0)   execution time : 5.295 s
Press any key to continue.
```

----

## Programa 1.7: Aritmética com ponteiros.

Com uma variável do tipo ponteiro, é possível realizar operações de soma e subtração. Será somada ou diminuída no ponteiro a quantidade de endereços
de memória relativos ao tipo do ponteiro.<br>
Por exemplo, um ponteiro para int ocupa 4 bytes, uma operação de soma neste ponteiro irá acrescentar 4 posições (unidades) na memória.<br>
O programa 1.7 é visto como os endereços de memória são manipulados através de aritmética de ponteiros, e a diferença entre o tipo **char**, *que ocupa 1 byte de memória*, e o tipo **int**, *que ocupa 4 bytes*.

```
Endereco de piValor = 1117781276
Endereco de pcValor = 1117781275

Após incremento de piValor e pcValor
====================================
Endereco de piValor = 1117781280
Endereco de pcValor = 1117781276

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
```

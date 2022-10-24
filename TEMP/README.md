https://www.youtube.com/watch?v=Qp3WatLL_Hc&feature=emb_rel_pause


https://www.ime.usp.br/~pf/algoritmos/aulas/string.html


177.124.232.149 
19735 

comparar string 
srtcmp()


You have not enabled debugging info (-g) and/or stripped it from the executavle (-s) in Compiler Options


0x008FFB14 <- vetor_dinamico = 0x00000000 {???} /* Foi inicializado como NULL */

O malloc, alterou o endereço do vetor_dinamico na área de stack para 0x008FFA0C e fez a alocação no heap

0x008FFA0C <- vetor_dinamico = 0x00e6eec8 {-842150451} /* Efeito malloc */

No endereço no heap 0x00E6EEC8, neste momento eu tenho alocado 8 bytes referentes ao FATOR_REALLOC cd cd cd cd cd cd cd cd


quantidade_total_elementos, dentro da função é um ponteiro e esta alocada na memória em 

0x008FFA18 <- quantidade_total_elementos = 0x008ffb38 {0} /* zero , porque já havia sido inicializada. */

0x008FFA18 <- quantidade_total_elementos = 0x008ffb38 {2} /* recebe 2 */



quantidade_elementos, dentro da função é um ponteiro e esta alocada na memória em 

0x008FFA14 <- quantidade_elementos = 0x004ffc40 {-858993460} /* -858993460 , porque não foi inicializada. */

0x008FFA14 <- quantidade_elementos = 0x004ffc40 {0}


0x008FFA0C <- vetor_dinamico = 0x00e6eec8 {2015} /* Recebe 2015 na posição vetor_dinamico[0]


0x008FFA14 <- quantidade_elementos = 0x004ffc40 {1} /* Incrementa a quantidade de item  */


teste realloc

0x00EFF828 <- vetor_dinamico = 0x014AF2B8  {2015}

/* Após o REALLOC */



0x00EFF828 <- vetor_dinamico = 0x014acd40  {2015}


0x00bcd240 antigo


0x00BD2BB0 novo 


## STRUCTS

0x010FFB00 <- aluno_01

Ocompiladior marca a reserva como ccccc, depois de preenchido os bytes não populados do tamanho da string, são preenchidos com fefefefe
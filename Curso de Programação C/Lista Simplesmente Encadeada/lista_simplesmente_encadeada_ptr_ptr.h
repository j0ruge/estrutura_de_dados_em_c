#pragma once
#include <stdlib.h>
#include <stdio.h>

typedef struct no No;

void inserir_no_inicio(No** lista, int num);
void inserir_no_fim(No** lista, int num);
void inserir_no_meio(No** lista, int num, int ant);
void imprimir(No* no);

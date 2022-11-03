#define NOT_FOUND -1


typedef struct matriz Matriz;

/* Função que cria a Matriz*/
Matriz* cria(int m_quantidade_linhas, int n_quantidade_colunas);

/* Procedimento que libera a área de memória reservada para a estrutura Matriz*/
void libera(Matriz* matriz);

/* Função que retorna o elemento de uma posição da matriz. */
float acessa(Matriz* matriz, int linha_i, int coluna_j);

/* Procedimento que atribui um valor a uma posição da matriz. */
void atribui(Matriz* matriz, int linha_i, int coluna_j, float valor);

/* Funcão que retorna o número de linhas da matriz */
int linhas(Matriz* matriz);

/* Funcão que retorna o número de colunas da matriz */
int colunas(Matriz* matriz);

/* Funcão que retorna a matriz soma de duas matrizes */
Matriz* soma(Matriz* matriz_01, Matriz* matriz_02);

/* Funcão que retorna a matriz transposta de uma matriz*/
Matriz* transposta(Matriz* matriz);


imprimir_vetor_matriz(Matriz* matriz);
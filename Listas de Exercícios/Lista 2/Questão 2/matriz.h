#define NOT_FOUND -1


typedef struct matriz Matriz;

/* Fun��o que cria a Matriz*/
Matriz* cria(int m_quantidade_linhas, int n_quantidade_colunas);

/* Procedimento que libera a �rea de mem�ria reservada para a estrutura Matriz*/
void libera(Matriz* matriz);

/* Fun��o que retorna o elemento de uma posi��o da matriz. */
float acessa(Matriz* matriz, int linha_i, int coluna_j);

/* Procedimento que atribui um valor a uma posi��o da matriz. */
void atribui(Matriz* matriz, int linha_i, int coluna_j, float valor);

/* Func�o que retorna o n�mero de linhas da matriz */
int linhas(Matriz* matriz);

/* Func�o que retorna o n�mero de colunas da matriz */
int colunas(Matriz* matriz);

/* Func�o que retorna a matriz soma de duas matrizes */
Matriz* soma(Matriz* matriz_01, Matriz* matriz_02);

/* Func�o que retorna a matriz transposta de uma matriz*/
Matriz* transposta(Matriz* matriz);


imprimir_vetor_matriz(Matriz* matriz);
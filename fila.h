
#define TAM 5

#define TRUE 1
#define FALSE 0

typedef struct _fila {
  char v[TAM];
  int ini;
  int fim;
} Fila;

Fila * criar_fila();

void liberar_fila(Fila *f);

int enfileirar(Fila *f, char valor);

char desenfileirar (Fila *f);

int esta_vazia(Fila *f);

int esta_cheia(Fila *f);

void imprimir_fila(Fila *f);
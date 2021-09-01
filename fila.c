#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila * criar_fila() {
  Fila *f = malloc(sizeof(Fila));

  if (f == NULL) {
    return NULL;
  }

  f->ini = f->fim = 0;

  return f;
}

void liberar_fila(Fila *f) {
  free(f);
}

int enfileirar(Fila *f, char valor) {
  // se tiver espaço no vetor para armazenar elementos
  if (f->fim < TAM) {
    int fim_da_fila = f->fim;

    f->v[fim_da_fila] = valor;

    f->fim++;

    return 0;
  } else {
    return -1;
  }
}

char desenfileirar (Fila *f) {
  // existe algo para desenfileirar
  if (f->ini < f->fim) {
    int ini_da_fila = f->ini;

    char c = f->v[ini_da_fila];

    f->ini++;

    return c;
  } else {
    return '\0';
  }
}

int esta_vazia(Fila *f) {
  if (f->ini == f->fim) {
    return TRUE;
  } else {
    return FALSE;
  }
}

int esta_cheia(Fila *f) {
  if (f->fim < TAM) {
    return FALSE;
  } else {
    return TRUE;
  }
}

void imprimir_fila(Fila *f) {
  int i = 0;

  printf("[ini] ");

  for (i = f->ini; i < f->fim; i++) {
    printf (" %c ", f->v[i]);
  }

  printf(" [fim]\n");
}
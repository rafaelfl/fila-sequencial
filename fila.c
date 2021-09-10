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

int inc(int i) {
  // if (i == TAM-1) {
  //   return 0;
  // }

  // return i+1;

  return (i+1) % TAM;
}

int enfileirar(Fila *f, char valor) {
  // se tiver espaço no vetor para armazenar elementos
  if (esta_cheia(f) == FALSE) {
    f->v[f->fim] = valor;

    f->fim = inc(f->fim);

    return 0;
  } else {
    return -1;
  }
}

char desenfileirar (Fila *f) {
  int i = 0;

  // existe algo para desenfileirar
  if (esta_vazia(f) == FALSE) {
    char c;

    c = f->v[f->ini];

    f->ini = inc(f->ini);

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
  if (inc(f->fim) == f->ini) {
    return TRUE;
  } else {
    return FALSE;
  }
}

void imprimir_fila(Fila *f) {
  int i = f->ini;

  printf("[ini] ");

  while (i != f->fim) {
    printf (" %c ", f->v[i]);

    i = inc(i);
  }

  printf(" [fim]\n");
}
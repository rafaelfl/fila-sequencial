#include <stdio.h>
#include "fila.h"

int main(void) {
  Fila *f;

  f = criar_fila();

  imprimir_fila(f);

  if (esta_vazia(f)) {
    printf("VAZIA\n");
  } else {
    printf("não VAZIA\n");
  }

  if (esta_cheia(f)) {
    printf("CHEIA\n");
  } else {
    printf("não CHEIA\n");
  }

  enfileirar(f, 'X');
  imprimir_fila(f);

  enfileirar(f, 'L');
  imprimir_fila(f);

  enfileirar(f, 'R');
  imprimir_fila(f);

  if (esta_vazia(f)) {
    printf("VAZIA\n");
  } else {
    printf("não VAZIA\n");
  }

  if (esta_cheia(f)) {
    printf("CHEIA\n");
  } else {
    printf("não CHEIA\n");
  }

  enfileirar(f, '8');
  imprimir_fila(f);

  enfileirar(f, 'S');
  imprimir_fila(f);

  if (esta_vazia(f)) {
    printf("VAZIA\n");
  } else {
    printf("não VAZIA\n");
  }

  if (esta_cheia(f)) {
    printf("CHEIA\n");
  } else {
    printf("não CHEIA\n");
  }

  printf("===> %c\n", desenfileirar(f));
  imprimir_fila(f);

  printf("===> %c\n", desenfileirar(f));
  imprimir_fila(f);

  printf("===> %c\n", desenfileirar(f));
  imprimir_fila(f);

  printf("===> %c\n", desenfileirar(f));
  imprimir_fila(f);

  printf("===> %c\n", desenfileirar(f));
  imprimir_fila(f);

  printf("===> %c\n", desenfileirar(f));
  imprimir_fila(f);

  if (esta_vazia(f)) {
    printf("VAZIA\n");
  } else {
    printf("não VAZIA\n");
  }

  if (esta_cheia(f)) {
    printf("CHEIA\n");
  } else {
    printf("não CHEIA\n");
  }

  // enfileirar(f, 'X');
  // enfileirar(f, 'L');
  // imprimir_fila(f);
  // desenfileirar(f);
  // desenfileirar(f);
  // imprimir_fila(f);

  //  if (esta_vazia(f)) {
  //   printf("VAZIA\n");
  // } else {
  //   printf("não VAZIA\n");
  // }

  // if (esta_cheia(f)) {
  //   printf("CHEIA\n");
  // } else {
  //   printf("não CHEIA\n");
  // }

  //   0  1. 2. 3  4.    5
  //   i     f                 
  // [ X  L            ]

  liberar_fila(f);
}
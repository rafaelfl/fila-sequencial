#include <stdio.h>
#include "fila.h"

int main(void) {
  Fila *f;
  char c[TAM];
  int count = 0;

  f = criar_fila();

  enfileirar(f, 'X');
  enfileirar(f, 'L');
  enfileirar(f, 'R');
  enfileirar(f, '8');

  imprimir_fila(f);

  while (!esta_vazia(f)) {
    c[count] = desenfileirar(f);
    count++;
  }

  while (count > 0) {
    enfileirar(f, c[count-1]);
    count--;
  }

  imprimir_fila(f);

  liberar_fila(f);
}
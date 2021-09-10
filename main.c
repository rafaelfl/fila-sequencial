#include <stdio.h>
#include "fila.h"

int main(void) {
  Fila *f;

  f = criar_fila();

  enfileirar(f, 'X');
  enfileirar(f, 'L');
  enfileirar(f, 'R');
  enfileirar(f, '8');

  imprimir_fila(f);

  liberar_fila(f);
}